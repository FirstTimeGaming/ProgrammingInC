#include <stdio.h>

int main() {
    int years = 0;
    int days = 0;
    int hours = 0;
    int minutes = 0;

    puts("Enter your age in years: ");
    scanf("%d", &years);
    days = years * 365;
    hours = days * 24;
    minutes = hours * 60;

    printf("You are %d years old, which is %d minutes\n", years, minutes);

    return 0;
}