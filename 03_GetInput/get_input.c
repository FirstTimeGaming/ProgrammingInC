#include <stdio.h>

// create just main function boilerplate without extra anything
int main() {

    int square_side = 0;
    int square_perimeter = 0;
    int square_area = 0;

    // puts(msg) only accepts one argument, a string, and prints it to the terminal
    puts("Enter the side of a square: ");

    // Get the input
    // & - address of operator
    scanf("%d", &square_side);
    square_perimeter = 4 * square_side;
    square_area = square_side * square_side;

    printf("The perimeter of a square with side %d is %d\n", square_side, square_perimeter);
    printf("The area of a square with side %d is %d\n", square_side, square_area);

    return 0;
}