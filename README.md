Gem is a statically typed JIT compiled programming language that is easy to use and integrate, while being safe, powerful, and fast.

# Option (Syntax Example)
``` gem
type Option[:T] = (Null | T, )

pub func Option[:T]::some(val: T) -> Self {
  (val as Self, ) |>
}

pub func Option[:T]::none() -> Self {
  (nil as Self, ) |>
}

pub func Option[:T]::unwrap(self) -> T {
  self.unwrap_or(func() {
    panic("Option::unwrap() called on none!");
  })
}

pub func Option[:T]::unwrap_or(self, cb: func() -> T) {
  return match self.0 as {
    T(val) { val |> }
    Null(_) { cb() |> }
  }
}
```
# Thread Safety
``` gem
mut data: Vector<i64> = Vector::new()

Thread::spawn(func(id) {
  data.append(id) // Blocked per each thread
}).all_done(func() {
  for d in data {
    println("%0" % { d })
  }
})
```
