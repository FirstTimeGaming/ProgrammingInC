#include <stdio.h>

double circle_area(int radius) {
    const int PI = 3;
    return PI * radius * radius;
}

int main() {

    int playground_radius = 0;
    int walkway_width = 0;

    printf("Enter the radius of the playground:");
    scanf("%d", &playground_radius);
    printf("Enter the width of the walkway:");
    scanf("%d", &walkway_width);

    double playground_circle = circle_area(playground_radius);
    double walkway_circle = circle_area(playground_radius + walkway_width);
    double area_of_walkway = walkway_circle - playground_circle;

    printf("The area of the walkway is: %f\n", area_of_walkway);



    return 0;
}

