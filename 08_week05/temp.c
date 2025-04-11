#include <stdio.h>

void tempDescription(double temp);

int main() {
  double temp;
  printf("Enter the temperature: ");
  scanf("%lf", &temp);
  tempDescription(temp);

  return 0;
}

void tempDescription(double temp) {
  if (temp < 0) {
    printf("Freezing weather\n");
  } else if (temp >= 0 && temp < 10) {
    printf("Very cold weather\n");
  } else if (temp >= 10 && temp < 20) {
    printf("Cold weather\n");
  } else if (temp >= 20 && temp < 30) {
    printf("Normal in Temp\n");
  } else if (temp >= 30 && temp < 99) {
    printf("It's hot\n");
  } else {
    printf("It's very hot\n");
  }
}