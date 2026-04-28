## 🔎 Narrowing in C++

**Narrowing** happens when you convert a value from a **larger / more precise type** to a **smaller / less precise type**, and you may lose data.

Examples of narrowing:

- `double → int`  (loses decimal part)
- `int → char`    (may overflow)
- `long → short`  (may overflow)

---

# ✅ 1️⃣ Basic narrowing example

```cpp
#include <iostream>
using namespace std;

int main()
{
    double price = 19.99;
    int whole_price = price;   // narrowing (decimal lost)

    cout << "Original: " << price << '\n';
    cout << "After narrowing to int: " << whole_price << '\n';

    return 0;
}
```

### Output:
```
Original: 19.99
After narrowing to int: 19
```

The `.99` is lost.

---

# ✅ 2️⃣ Dangerous narrowing (overflow)

```cpp
#include <iostream>
using namespace std;

int main()
{
    int big_number = 300;
    char small_number = big_number;   // narrowing (overflow possible)

    cout << "big_number: " << big_number << '\n';
    cout << "small_number: " << static_cast<int>(small_number) << '\n';

    return 0;
}
```

A `char` typically holds values from **-128 to 127** (or 0–255 if unsigned).  
300 does not fit → result becomes unexpected.

---

# ✅ 3️⃣ Uniform initialization prevents narrowing (C++11 feature)

Brace `{}` initialization protects you:

```cpp
int main()
{
    double x = 3.14;
    int y {x};   // ❌ compile-time error (narrowing not allowed)

    return 0;
}
```

The compiler stops you.  
This is **good practice**.

---

# ✅ 4️⃣ Explicit narrowing (safe & intentional)

If you really want to narrow, make it explicit:

```cpp
int main()
{
    double x = 3.14;

    int y = static_cast<int>(x);  // explicit narrowing

    std::cout << y;

    return 0;
}
```

Now it's clear you *intentionally* accept the loss.

---

# 🎯 Summary

Narrowing = converting to a smaller type and possibly losing data.

Common cases:
- `double → int`
- `int → char`
- `long → short`

✅ Use `{}` initialization to prevent accidental narrowing.  
✅ Use `static_cast<>` when narrowing is intentional.
