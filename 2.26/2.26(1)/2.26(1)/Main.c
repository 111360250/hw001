#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf("Input two integers:");
	scanf("%d%d", &a, &b);
	if (a%b == 0) { printf("%d is %d multiple \n",a,b); }
	if (a%b!=0) { printf("%d is not %d multiple \n",a,b); }
	
}