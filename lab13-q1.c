#include <stdio.h>

int area(int a);

int main(){
int x;
printf("what is the edge length of the square?\n");
scanf("%d", &x);
printf("area: %d", area(x));
}

int area(int a){
return a*a;
}