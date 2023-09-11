#include <stdio.h>

int prime(int number);
int armstrong(int number);

int main(){
int number;

printf("enter a number");
scanf("%d",&number);

if (prime(number)&&armstrong(number))
{
    printf("both armstrong and the prime number");

}
else if (prime(number))
{
    printf(" just prime number");
}
else if (armstrong(number))
{
    printf(" just armstrong number");
}
else 
        printf("Neither a prime number nor an Armstrong number.\n");

return 0;
}

int prime(int number){

for (int i = 2; i < 10; i++)
{
    if (number%i==0)
    {
        return 0;
    }
    
}

return 1;
}

int armstrong(int number){
    int digits[100];
    int result=1, i=0;

while (number!=0)
{
    digits[i]=number%10;
    i++;
    number=number/10;
}


for (int j = 0; j < i+1; j++)
{
    for (int k = 0; k <= i+1; k++)
    {
        result*=digits[j];
    }
    
}

if (result==number)
{
    return 1;
}


return 0;
}