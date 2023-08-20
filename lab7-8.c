#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define Fpoint 0

//lab7

//Q1
int main()
{
    int num1, num2,sum;
    printf("enter 2 number\n");
    scanf("%d %d", &num1,&num2);
    sum=num1+num2;
    printf("sum= %d", sum);
    return 0;
}


//Q2

int main()
{
    int A, B, C;
    printf("enter 2 number\n");
    scanf("%d %d", &A,&B);
    C=A;
    A=B;
    B=C;
    printf("%d %d", A,B);

    return 0;
}

//Q3

int main()
{
    int no;
    float midterm, finl, passgrade;
    printf("enter your student ID\n");
    scanf("%d", &no);
    printf("enter yor m�dterm grade");
    scanf("%f", &midterm);
    printf("enter your final grade");
    scanf("%f",&finl);
    passgrade=(midterm*0.4)+(finl*0.6);
    printf("StudentID=%d  Passing Grade=%f", no,passgrade);
    return 0;
}


//Q4
int main()
{
    int typ,r;
    float result;
    printf("enter radius\n");
    scanf("%d", &r);

    printf("1-paremater of  the circle is calculate\n 2-the area is calculate\n please chose one option");
    scanf("%d",&typ);

    if(typ==1)
         result=2*PI*r;
        printf("perimeter=%.2f",result);

    if (typ==2)
         result=PI*r*r;
        printf("area=%.2f",result);

    return 0;
}


//Q5

int main()
{
    int money,banknotes;
    printf("enter the amount of money, must be multiples of 10\n");
    scanf("%d", &money);
    banknotes=money/200;
    banknotes+=(money%200)/100;
    banknotes+=(money%100)/50;
    banknotes+=(money%50)/20;
    banknotes+=(money%20)/10;

    printf("minimum number of the banknotes=%d", banknotes);
    return 0;
}


//lab-8


//Q1

int main()
{
    int num1, num2,sum;
    printf("enter 2 number\n");
    scanf("%d %d", &num1,&num2);
    sum=num1+num2;
    printf("sum= %d", sum);
    return 0;
}



//Q1

int main()
{
    int typ,r;
    float AREA;
    printf("enter radius\n");
    scanf("%d", &r);
    AREA=PI*r*r;
    printf("area=%f",AREA);

    return 0;
}


//Q3
int main()
{
int num;
printf("enter a number");
scanf("%d",&num);
if(num%2==0)
    printf("even number");
else
    printf("odd number");
    return 0;
}

//Q4

int main()
{
    int temp;
    printf("enter temperature\n");
    scanf("%d", &temp);

    if(temp>Fpoint)
    printf("ABOW");

    else if(temp<Fpoint)
    printf("BELOW");

    else
        printf("EQUAL");
    return 0;
}

//Q5

int main()
{
    int ftemp, ctemp;
    printf("enter temperature from fahrenheit\n");
    scanf("%d", &ftemp);

ctemp=(ftemp-32)*0.55;

    printf("Celcius=%d",ctemp);

    return 0;
}

//Q6

int main()
{
    float feet, cm;
    printf("enter length in feet\n");
    scanf("%f", &feet);

cm=feet*30.48;

    printf("cm=%.2f",cm);

    return 0;
}

//Q7

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
