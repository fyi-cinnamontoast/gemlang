<img alight="left" src="https://github.com/sizakuma/gemlang/assets/142700972/1ca40173-d7fd-4a9f-971f-881279cb4695" width="300">

# About

**Gem** is a scripting Just-In-Time or Ahead-of-Time compiled programming language.

# Example
```
import "std" { panic }

use def Option<T> = T | Null {
	fun some(v: T): Self { v as Self }

	fun none(): Self { Nil as Self }

	fun is_some(self): Boolean { self is T }

	fun is_none(self): Boolean { self is Null }

	fun unwrap(self): T {
		self.unwrap_or(fun() { 
			panic("Calling `Option::unwrap()` on none") 
		})
	}

	fun unwrap_or(self, cb: fun(): T): T {
		match self as {
			T { self }
			Null { cb() }
		}
	}
}

```
