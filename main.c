#include <stdio.h>

int comb(int x, int y, int z) 
{
	int res1=x/(y*z);
	return res1;
}

int fac(int n)
{
	int res=1;
	int i;
	
	for(i=1 ; i<=n ; i++)
	   res=res*i;
	
	return res;
}

int main(void) {
	int a, b, n1, n2, n3, n4;
	printf("n,r ���� ������� �Է��ϼ���:");
	scanf("%d %d", &a, &b);
	n1=fac(a);
	n2=fac(a-b);
	n3=fac(b);
	n4=comb(n1, n2, n3);
	printf("combination�� ���: %d \n", n4);
	return 0;
	
	
}

	
