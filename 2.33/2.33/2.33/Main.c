#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a, b, c, d, e,f;
	printf("�@��Ѫ��`���{��:\n");
	scanf("%f", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�:\n");
	scanf("%f", &b);
	printf("�����@����/�[�گ��p�h�֤��� :\n");
	scanf("%f", &c);
	printf("�@�Ѫ������O:\n");
	scanf("%f", &d);
	printf("�@�Ѫ��q��O(�L���O):\n");
	scanf("%f", &e);
	f = a / c * b;
	printf("�@�ѤU�Ӷ}���h�u�@����O:%f", f + d + e);
}