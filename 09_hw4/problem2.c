#include <stdio.h>
#include <stdbool.h>

int main() {

    // Problem 3
    int x;
    scanf("%d", &x);
    bool problem3 = ( (x > 5) || (x < 10) );
    printf("%d\n", problem3);

    // Problem 4
    int y;
    scanf("%d", &x);
    scanf("%d", &y);

    bool problem4 = x <= y;
    printf("%d\n", problem4);



    return 0;
}
