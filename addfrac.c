#include <stdio.h> 


int main()
{

int num1, num2, den1, den2, numrus, denrus;
printf("Fraction (x/x + x/x):");
scanf("%d/%d + %d/%d", &num1, &den1, &num2, &den2);

//calc

numrus = num1 * den2 + num2 * den1;

denrus = den1 * den2;

printf("\n%d/%d\n", numrus, denrus);

}
