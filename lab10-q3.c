#include <stdio.h>

int main(){
int number, digit[5];
printf("Enter a number\n");
  scanf("%d", &number);

for (int j = 4; j >=0 ; j--)
{
   digit[j]=number%10;
   number=number/10;
}
for (int x = 0; x < 5; x++)
{
   printf("%d", digit[x]);
}

return 0;
}