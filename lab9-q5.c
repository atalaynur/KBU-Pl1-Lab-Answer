#include <stdio.h>

int main()
{
	float x,sum,fact;
	int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	sum =1; fact = 1;
	for (i=n-1;i>0;i--)
	{
        fact=fact*i;
	}

	printf("\nThe sum  is : %f\n",sum);
    return 0;
    
} 