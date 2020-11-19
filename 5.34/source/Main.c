#include <stdio.h>
#include <math.h>

int main() 
{
	int a, b, c;

	printf("base:"); 
	scanf_s("%d", &a); 
	
	printf("exponent:"); 
	scanf_s("%d", &b); 
	
	c = pow(a, b);
	printf("result: %d\n", c); 
	
	return 0;
}