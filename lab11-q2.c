#include <stdio.h>
#define a 10
#define b 10

int main(){

int matris1[a][b], matris2[a][b],sum[a][b], row, columns;

printf("how many rows are here in the matrix\n");
scanf("%d", &row);
printf("how many columns are there in the matrix\n");
scanf("%d", &columns);


for (int i = 0; i < row; i++)
{
    printf("enter %d. row for matris-1\n",i);

    for (int j = 0; j < columns; j++)
    {
        scanf("%d", &matris1[i][j]);
    }
}

for (int i = 0; i < row; i++)
{
    printf("enter %d. row for matris-2\n",i);

    for (int j = 0; j < columns; j++)
    {
        scanf("%d", &matris2[i][j]);
    }
}

for (int k = 0; k < row; k++)
{
    for (int m = 0; m < columns; m++)
    {
        sum[k][m]= matris1[k][m]+matris2[k][m];
    }
    
}
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < columns; j++)
    {
        printf("%d ", sum[i][j]);
    }
    printf("\n");
}


return 0;
}