#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int num;
	int div;
	
	printf("Enter the numerator:\n");
	scanf("%d",&num);

	printf("Enter the divisor:\n");
	scanf("%d",&div);
	
	if (num % div ==0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
