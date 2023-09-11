#include <stdio.h>

float average(int []);

int main(){

int array[5];
for (int i = 0; i < 5; i++)
{
printf("enter %d. number ", i+1);
scanf("%d",&array[i]);
}
printf("average: %.2f", average(array));

return 0;
}

float average(int average[]){

int sum=0;

for (int i = 0; i < 5; i++)
{
    sum+=average[i];
}

return sum/5;
}