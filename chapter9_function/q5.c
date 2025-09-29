#include <stdio.h>

// 值传递版本
void by_value(double a, double b) {
    if (a > b) {
        b = a;
    } else {
        a = b;
    }
}

// 指针传递版本
void by_pointer(double *a, double *b) {
    if (*a > *b) {
        *b = *a;
    } else {
        *a = *b;
    }
}

int main() {
    double x = 3.0, y = 7.0;
    by_value(x, y);
    by_pointer(&x, &y);
    return 0;
}
