/*
For each integer n in the interval [a,b]  (given as input) :

If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, 
"two" for 2, and so on.
Else if n > 9 and it is an even number, then print "even".
Else if  n > 9 and it is an odd number, then print "odd".
*/



#include <stdio.h>

int main() {
  static const char *word[] = {"one", "two",   "three", "four", "five",
                               "six", "seven", "eight", "nine"};
  int a, b;

  scanf("%d %d", &a, &b);

  for (; a >= 1 && a <= b; a++) {
    if (a <= 9)
      printf("%s\n", word[a - 1]);
    else if (a % 2)
      printf("odd\n");
    else
      printf("even\n");
  }

  return 0;
}