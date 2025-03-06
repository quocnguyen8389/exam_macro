#include <stdio.h>

#define KIEMTRA(condition, message) \
    do { \
        if (!(condition)) { \
            fprintf(stderr, "[ERROR] %s (Điều kiện: %s)(File: %s, Dòng: %d)\n", message, #condition, __FILE__, __LINE__); \
        } \
    } while (0)

int main() {
    int a = -5;
    KIEMTRA(a > 0, "a là số dương");
    return 0;
}
