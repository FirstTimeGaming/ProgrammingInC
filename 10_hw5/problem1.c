#include <stdio.h>

void fun(int *ptr) {
    *ptr = 30;
}

int main() {
    int y = 10;
    fun(&y);
    printf("%d", y);
    return 0;
}