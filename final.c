#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	int n1;
	int n2;
	char calc;
	int max;
	float quo;
	int sum;
	int pro;
	int dif;
	int show;
	int t;
	int c;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &n1,&n2);
	
	max=(n1>n2) ? n1 : n2;
	quo= n1 / n2;
	sum= n1 + n2;
	pro= n1 * n2;
	dif= n1 - n2;

	printf("What would you like to do with those numbers?:\n");
	printf("Type in: (l) for LCM, (a) for addition, (s) for subtraction, (g) for GCF, (m) for multiplication, (d) for division,(p) for prime numbers in between the two numbers.\n");
	scanf(" %c", &calc);

		switch(calc){
			
			case 'l':

				while(1)
				{
					if(max%n1==0 && max%n2==0)
					{
						printf("LCM of %d and %d is %d\n", n1, n2,max);
						break;
					}
					++max;
				}
			break;

			case 'd':
			
				printf("The quotient of %d and %d is %f\n", n1, n2,quo);
				break;
			
			case 'a':
				
				printf("The sum of %d and %d is %d\n", n1, n2,sum);
				break;
			
			case 'm':

				printf("The product of %d ans %d is %d\n", n1, n2,pro);
				break;

			case 'g':

				while(n1!=n2){
					
					if(n1>n2)
						n1-=n2;

					else
						n2-=n1;	
				}

				printf("GCF is %d\n", n1);
				break;

			case 's':

				printf("The difference between %d and %d is %d\n", n1, n2, dif);
				break;

			case 'p':
				for(c=n1+1; c<n2; c++)
				{
					show=0;
					for(t=2; t<=c/2; t++)
					{
						if(c%t==0)
						{
							show=1;
							break;
						}
					}
					
					if(show==0)
						printf(" %d \n",c);
				}

		}
		
		return 0;

}
