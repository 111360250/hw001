#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("Input a intege:");
	scanf("%d",&a);
	if (a % 2 == 1) { printf("%d is odd",a); }
	if (a % 2 == 0) { printf("%d is even", a);}


}