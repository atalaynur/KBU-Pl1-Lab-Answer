#include <stdio.h>

void even(int number);

int main(){
int number;
printf("enter a number");
scanf("%d",&number);
even(number);

return 0;
}

void even(int number){
 if (number%2==0)
 {
    printf("even number");
 }
 else
printf("odd number");

}