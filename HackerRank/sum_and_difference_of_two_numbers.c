/*
Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

Declare  4 variables: two of type int and two of type float.
Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your variables.
Use the + and - operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int one, two;
    float three, four;

    scanf("%d", &one);
    scanf("%d", &two);
    scanf("%f", &three);
    scanf("%f", &four);

    printf("%d %d\n",one + two,one-two);
    printf("%.1f %.1f\n", three + four, three - four);

    return 0;
}

