#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y, b, i;
	scanf_s("%d %d", &x, &y);
	if (x >= y)
	{
		b = x;
	}
	else
	{
		b = y;
	}
	i = b;
	int ans = 0;
	while (ans == 0)
	{
		if (i%x == 0 && i%y == 0)
		{
			ans = i;
		}
		i = i + b;
	}
	printf("LCM:%d\n", ans);
	return 0;
}