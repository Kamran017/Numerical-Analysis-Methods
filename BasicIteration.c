/*KAMRAN BALAYEV 17011904*/
/* Basic Iteration Method*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float h(float A,float B, float C,double x)
{
    return  ((B + C*sin(x))/A) ;
}

int main()
{
    printf("\t\t\t\t\tBasic Iteration Method\n\n\n");
    float xk,xk1,eps,A,B,C;
    int ite=2;
    printf("Equation: f(x) = Ax - B - Csin(x)\n\n");
    printf("A : ");
    scanf("%f", &A);
    printf("B : ");
    scanf("%f", &B);
    printf("C : ");
    scanf("%f", &C);
    printf("Equation: f(x) = %.2fx - %.2f - %.2fsin(x) \n", A,B,C);
    printf("x0 : ");//INITIAL VALUE OF F(x)
    scanf("%f", &xk);
    printf("Epsilon : ");
    scanf("%f", &eps);

    xk1=h(A,B,C,xk);//call the function with proper values
    printf("\n1. iteration x = %.4f\n", xk1);
    //if absolute difference of xk and xk1 <= epsilon loop will be finished
    while(!(fabs(xk-xk1)<=eps)){
        xk=xk1;
        xk1=h(A,B,C,xk);
        printf("%d. iteration x = %.4f\n", ite, xk1);
    	ite++;
    }
    return 0;
}
