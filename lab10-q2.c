
#include <stdio.h>

int main(){
int array[10];
int i=0;
printf("Enter array elements\n");
 for (i = 0; i!= -1; i++) { 
    scanf("%d", &array[i]);
    if (array[i]==-1)
    {
        for ( int j = 0; j < i; j++)
        {
           array[j]=array[j]*array[j];
           printf("%d\n", array[j]);
        }
    }
 }
return 0;
}