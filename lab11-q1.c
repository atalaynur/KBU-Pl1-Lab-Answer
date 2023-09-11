#include <stdio.h>

int main(){

int n=0,PN=0;

for (n = 0; n < 100; n++)
{
    PN=n*(3*n-1)/2;
    if (PN>100)
    {
        break;
    }
    
    printf("%d ",PN);
}




return 0;

}