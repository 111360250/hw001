#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int a;
	int b;
	int c;
	printf("*********\n");
	for (i = 1; i < 8; i++)
	{
		printf("*       *\n");
	}
	printf("*********\n");

	printf("   ***   \n");
	printf("  *   *  \n");
	for (a = 1; a < 6; a++)
	{
		printf(" *     * \n");
	}
	printf("  *   *  \n");
	printf("   ***   \n");

	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n");
	for (b = 1; b < 7; b++)
	{
		printf("  *  \n");
	}
	printf("    *    \n");
	printf("   * *   \n");
	printf("  *   *  \n");
	printf(" *     * \n");
	printf("  *   *  \n");
	printf("   * *   \n");
	printf("    *    \n");
	system("pause");
	return 0;
}
