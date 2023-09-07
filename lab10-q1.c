#include <stdio.h>

int main(){
float array[8], sum=0, average;
printf("Enter array elements\n");
 for (int i = 0; i < 8 ; i++){ 
    scanf("%f", &array[i]);
    sum+=array[i];
 }

 average=sum/8;

 printf("average=%f", average);

return 0;
}
