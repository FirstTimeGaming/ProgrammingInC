#include <ctype.h>
#include <stdio.h>

int main() {

  // 1
  int n1[] = {50, 7, 0, 3, 8, 2};
  int n2[5] = {7};
  // int n3[5] = {50, 7, 0, 3, 8, 12, 66};
  int n4[5] = {6, 6, 6};

  // 2
  char string[] = "first";

  char string1[] = {'f', 'i', 'r', 's', 't', '\0'};
  // character string2[] = {'f', 'i', 'r', 's', 't', '\0'};
  // char string3 = {'f', 'i', 'r', 's', 't', '\0'};
  // char string4 = {'f', 'i', 'r', 's', 't'};

  // 5
  char ch = 'c';

  ch = toupper(ch);
  printf("%c\n", ch);

  ch = 'c';
  toupper(ch);
  printf("%c\n", ch);

  // ch = toupper();
  // printf("%c\n", ch);

  ch = 'c';
  isupper(ch);
  printf("%c\n", ch);


  return 0;

}
