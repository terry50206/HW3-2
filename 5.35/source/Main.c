#include<stdio.h>
int main()
{
	int h;
	printf("到第幾個:");
	scanf_s("%d", &h);
	printf("%d", f(h));
	return 0;
}
long f(int a) 
{
	if (a < 2 && a >= 0)
	{
		return a;
	}
	else
	return(f(a - 1) + f(a - 2));
}