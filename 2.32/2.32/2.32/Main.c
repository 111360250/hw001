#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a,b;
	float BMI;
	printf("Input your weight:\n");
	scanf("%f", &a);
	printf("Input your height:\n");
	scanf("%f", &b);
	BMI = a / ((b / 100)*(b / 100));
	printf("%f=%f/((%f/100)*(%f/100))\n",BMI, a, b,b);
	if (BMI < 18.5) { printf("Underweight"); }
	if (18.5 < BMI && BMI < 24.9) { printf("Normal"); }
	if (25 < BMI && BMI< 29.9) { printf("Overweight"); }
	if (BMI > 30) { printf("Obese"); }

}