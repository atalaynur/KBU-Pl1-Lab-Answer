#include <stdio.h>

int main(){
int a, result=1;
printf("enter a number for finding factorial\n");
scanf("%d",&a);
for ( int i = a; i >0; i--)
{
    result=result*i;
}

printf("factorial=%d", result);
return 0;
}