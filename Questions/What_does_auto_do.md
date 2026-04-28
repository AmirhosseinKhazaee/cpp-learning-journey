### Q: What does `auto` do in C++?

**A:** `auto` tells the compiler to automatically deduce the type of a variable from the initializer. For example:
```cpp
auto x = 10;      // x is int
auto y = 3.14;    // y is double
auto z = 3.14f;   // z is float
```

auto does not make a variable “dynamically typed”; the type is still fixed at compile time.