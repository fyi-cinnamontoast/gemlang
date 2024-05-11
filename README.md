Gem is a statically typed JIT compiled programming language that is easy to use and integrate, while being safe, powerful, and fast.

# Option
```
type Option[:T] = (Null | T, )

func Option[:T]::some(val: T) -> Self {
  (val as Self, ) |>
}

func Option[:T]::none() -> Self {
  (nil as Self, ) |>
}

func Option[:T]::unwrap(self) -> T {
  match self.0 as {
    T { self.0 as T |> }
    Null { panic("Calling Option[:T]::unwrap() on none!") }
  } |>
}
```
# Thread Safety
```
async mut data: Vector<i64> = Vector::new() // Mutex

Thread::spawn(async func(id) {
  data.append(id) // Blocked per each thread
}).all_done(func() {
  for d in data {
    println("%0" % { d })
  }
})
```
