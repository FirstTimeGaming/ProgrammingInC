#include <stdio.h>

// make a main class that gets an arrow body and head character
int main() {
    // create variables for the body and head of the arrow
    char arrow_body;
    char arrow_head;

    // get the arrow body and head from the user
    puts("Enter the arrow body character: ");
    scanf("%c", &arrow_body);
    puts("Enter the arrow head character: ");
    scanf(" %c", &arrow_head);

    // print the arrow
    printf("    %c\n", arrow_head);
    printf("    %c%c\n", arrow_head, arrow_head);
    printf("%c%c%c%c%c%c%c\n", arrow_body, arrow_body, arrow_body, arrow_body, arrow_head, arrow_head, arrow_head);
    printf("%c%c%c%c%c%c%c%c\n", arrow_body, arrow_body, arrow_body, arrow_body, arrow_head, arrow_head, arrow_head, arrow_head);
    printf("%c%c%c%c%c%c%c\n", arrow_body, arrow_body, arrow_body, arrow_body, arrow_head, arrow_head, arrow_head);
    printf("    %c%c\n", arrow_head, arrow_head);
    printf("    %c\n", arrow_head);

    return 0;
}