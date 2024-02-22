<img alight="left" src="https://github.com/sizakuma/gemlang/assets/142700972/1ca40173-d7fd-4a9f-971f-881279cb4695" width="300">

# About

**Gem** is a scripting Just-In-Time or Ahead-of-Time compiled programming language.

# Example
- Option
```
import "std" { panic }

with def Option[:T] = T | Null {
	fun some(v: T): Self { v as Self |> }

	fun none(): Self { Nil as Self |> }

	fun is_some(self): Boolean { self is T |> }

	fun is_none(self): Boolean { self is Null |> }

	fun unwrap(self): T {
		self.unwrap_or(fun() { 
			panic("Calling `Option::unwrap()` on none") 
		}) |>
	}

	fun unwrap_or(self, cb: fun(): T): T {
		match self as {
			T { self |> }
			Null { cb() |> }
		} |>
	}
}

```
- Thread Safety
```
var data = Vector::new[:String]()
async var mutex_data = Vector::new[:String]() // Mutex

Thread::spawn(async fun(i: UInt) {
	// !!!DANGER!!!
	unsafe { 
		data.push_back("Hello, World from thread #%0" % { i }) 
	}
	// Fine
	mutex_data.push_back("Hello, World from thread #%0" % { i })
}, 16)
```
- Pipes (`|>`)
```
fun hello(b: Boolean) {
	return if (b) {
		static const letters = [ "H", "e", "l", "l", "o" ]
		letter.join("") |>
	}
	else { "" |> } 
}

var res = (True |> hello)
println(res) // Hello
```
- Type Expansion (compile time)
```
with def SomeType {
	var hello = "Hello, World!"
}
var SomeType::expansion = "EXPANDED"
```
- Type Expansion + Reflections (runtime concept)
```
var typeof_some_type = typeof SomeType
typeof_some_type.expand_fields[:String]("some_field", "RUNTIME EXPANDED")
var some_instance = SomeType {  }
var res = typeof_some_type.get_field("some_field", some_instance)
println(res) // RUNTIME EXPANDED
```
