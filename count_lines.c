#include <stdio.h>
 /* count lines in input */
 main()
21
 {
 int c, nl;
 nl = 0;
 while ((c = getchar()) != EOF)
 if (c == '\n')
 ++nl;
 printf("%d\n", nl);
 }