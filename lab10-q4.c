
#include <stdio.h>

int main()
{
int array[10];
int i=0;

printf("Enter array elements\n");
 for ( int i; i < 10 ; i++){ 
    scanf("%d", &array[i]);
    
 }
for ( int j=9; j >=0; j--)
{
    printf("%d", array[j]);
}

return 0;
}