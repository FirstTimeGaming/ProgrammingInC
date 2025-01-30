#include <stdio.h>

// Function prototypes
int get_five();
void print_course(int course_ID);
double milesToKilometers(double miles);
double kilometersToMiles(double kilometers);

int main() {
    int five = get_five();
    printf("The value of five is: %d\n", five);
    return 0;
}

int get_five() {
    return 5;
}

void print_course(int course_ID) {
    printf("Course ID: %d\n", course_ID);
}

double milesToKilometers(double miles) {
    return miles * 1.60934;
}

double kilometersToMiles(double kilometers) {
    return kilometers / 1.60934;
}

