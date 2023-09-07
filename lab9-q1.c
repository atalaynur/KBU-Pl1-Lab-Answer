#include <stdio.h>

int main()
{
    int A,B,C;
    printf("enter 3 number\n");
    scanf("%d %d %d", &A,&B,&C);

    if(A>B&&B>C)

    printf("largest %d",A);

    else if(B>A&&A>C)

    printf("largest %d",B);

    else

    printf("largest %d",C);

    return 0;
}
    