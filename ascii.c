#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int v;
	v=0;

	while(v <= 255)
	{
		printf("%d = %c\n",v,v);
		v++;
	}
	return 0;
}
