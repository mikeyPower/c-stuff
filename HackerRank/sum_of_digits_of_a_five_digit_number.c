/*
In this challenge, you have to input a five digit number and print the sum of digits of the number. 
*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.

    int rem,div,total;
    total =0;
    for(int i =0; i<5;i++)
    {
        rem = n % 10;
        total = total + rem;
        n = n / 10;
    }
    printf("%d",total);
    return 0;
}

