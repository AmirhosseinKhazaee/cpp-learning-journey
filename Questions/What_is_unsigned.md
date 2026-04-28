`unsigned` in C++ means a numeric type that **cannot store negative values**.  
All its bits are used for **non‑negative numbers (0 and positive numbers)**.

### Basic idea

Normally an `int` is **signed**, meaning it stores:

```
-2, -1, 0, 1, 2 ...
```

But an `unsigned int` stores only:

```
0, 1, 2, 3 ...
```

Because it does not need to represent negative numbers, it can store **larger positive values**.

---

## Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a = -5;
    unsigned int b = 5;

    cout << a << '\n';
    cout << b << '\n';

    return 0;
}
```

Output

```
-5
5
```

---

## Range difference (typical 32‑bit)

| Type | Range |
|-----|------|
| `int` | -2,147,483,648 → 2,147,483,647 |
| `unsigned int` | 0 → 4,294,967,295 |

Unsigned **doubles the positive range** because it doesn't store negatives.

---

## Other unsigned types

You can apply `unsigned` to several integer types:

```
unsigned char
unsigned short
unsigned int
unsigned long
unsigned long long
```

Example:

```cpp
unsigned int count = 100;
unsigned long file_size = 9000000;
```

---

## Important behavior (surprising for beginners)

Unsigned numbers **wrap around** if they go below zero.

Example:

```cpp
unsigned int x = 0;
x = x - 1;

cout << x;
```

Output (on most systems):

```
4294967295
```

This happens because unsigned integers **cannot represent negative numbers**, so they wrap to the maximum value.

---

✅ **Common uses of unsigned**
- array sizes
- memory sizes
- counts
- bit manipulation

Example:

```cpp
size_t length = 10;   // size_t is an unsigned type
```
