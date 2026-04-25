#include <iostream>
#include <cstdio>

int main() {
    int a = 1;
    int b = 4;
    int c = b;

    printf("a=%d, b=%d, c=%d\n", a, b, c);

    b = a;
    a = c;

    printf("a=%d, b=%d, c=%d\n", a, b, c);

    return 0;
}
