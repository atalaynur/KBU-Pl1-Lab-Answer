#include <stdio.h>

int main(){
int student[10][2],averageh=0, averagew=0;

    for (int j = 0; j < 10; j++)
    {
        printf("entre %d. students weight ", j+1);
        scanf("%d", &student[j][0]);
    }

        for (int j = 0; j < 10; j++)
    {
        printf("entre %d. students height(cm) ", j+1);
        scanf("%d", &student[j][1]);
    }
    


for (int j = 0; j < 10; j++)
{
    averagew+=student[j][0];
}

for (int j = 0; j < 10; j++)
{
    averageh+=student[j][1];
}
   

printf("weight average:%d height average:%d ", averagew/10, averageh/10);



return 0;
}