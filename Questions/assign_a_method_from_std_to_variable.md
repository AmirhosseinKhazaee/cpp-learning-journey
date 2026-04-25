
If you want to use a variable that refers to `std::cout`, you can do this:

```cpp
#include <iostream>

int main(){
    std::ostream& func = std::cout;   // func is a reference to std::cout
    const char* message = "Amir";
    func << message;                  // same effect as std::cout << message;
    return 0;
}
```

### 🔍 Explanation
- `std::ostream` is the **type** of output stream objects (like `cout`, `cerr`, etc.).
- The `&` means **reference**, so `func` points to the same stream.
- `func << message;` sends the string to that stream.

You could also make your code even cleaner:
```cpp
std::ostream& func = std::cout;
func << "Amir\n";
```
