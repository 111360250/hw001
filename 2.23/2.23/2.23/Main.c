#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, M, m;
	printf("Input 3 integers:");
	scanf("%d %d %d", &a, &b, &c);
	if ((a >= b) && (b > c)) { printf(" M = %d, m = %d;", a, c); }
	if ((b >= a) && (a > c)) { printf(" M = %d, m = %d;", b, c); }
	if ((c >= b) && (b > a)) { printf(" M = %d, m = %d;", c, a); }
	if ((a >= c) && (c > b)) { printf(" M = %d, m = %d;", a, b); }
	if ((b >= c) && (c > a)) { printf(" M = %d, m = %d;", b, a); }
	if ((c >= a) && (a > b)) { printf(" M = %d, m = %d;", c, b); }
	if ((a >= c) && (c > b)) { printf(" M = %d, m = %d;", a, b); }
	if ((a > b) && (b >= c)) { printf(" M = %d, m = %d;", a, c); }
	if ((b > a) && (a >= c)) { printf(" M = %d, m = %d;", b, c); }
	if ((a > c) && (c >= b)) { printf(" M = %d, m = %d;", a, b); }
	if ((c > a) && (a >= b)) { printf(" M = %d, m = %d;", c, b); }
	if ((b > c) && (c >= a)) { printf(" M = %d, m = %d;", b, a); }
	if ((c > a) && (a >= b)) { printf(" M = %d, m = %d;", c, b); }


}