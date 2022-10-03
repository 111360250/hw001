#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a, b, c, d, e,f;
	printf("一整天的總里程數:\n");
	scanf("%f", &a);
	printf("汽油一公升/加侖多少錢:\n");
	scanf("%f", &b);
	printf("平均一公升/加侖能行駛多少公里 :\n");
	scanf("%f", &c);
	printf("一天的停車費:\n");
	scanf("%f", &d);
	printf("一天的通行費(過路費):\n");
	scanf("%f", &e);
	f = a / c * b;
	printf("一天下來開車去工作的花費:%f", f + d + e);
}