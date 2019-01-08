/*
* You have to print the character,"ch" , in the first line.
* Then print ""s  in next line. In the last line print the sentence, "sen" .
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char ch;
  char s[50];
  char sen[100];
  scanf("%c", &ch);
  scanf("%s", s);
  scanf("\n");
  scanf("%[^\n]%*c", sen);
  printf("%c\n%s\n%s", ch, s, sen);
  return 0;
}