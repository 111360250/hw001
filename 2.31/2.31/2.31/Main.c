#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i,squ,cub;
	printf("number\t square\t cube\n");
	for (i = 0; i <= 10; i++)
	{
		squ = pow(i, 2);
		cub = pow(i, 3);
		printf("%d\t %d\t %d\n",i,squ,cub);
	}

}