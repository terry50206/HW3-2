#include<stdlib.h>
#include<stdio.h>
int main()
{
	char input, output;
	scanf_s("%c", &input);
	if (input < 96)
	{
		output = input + 32;
	}
	else
	{
		output = input - 32;
	}
	printf("%c\n", output);
	return 0;
}