/*Kamran Balayev 17011904
 Newton Raphson Method */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float func(float A, float B, float x)
{
    return A-x+B*sin(x);
}
float derivative(float B, float x)
{
    return -1+B*cos(x);
}
int main()
{   printf("\t\t\t\t\tNewton Raphson Method\n\n\n");
    float xk,xk1,eps,A,B;int ite=2;
    printf("Equation: f(x) = A - x + Bsin(x)\n\n");
    printf("A : ");scanf("%f", &A);
    printf("B : ");scanf("%f", &B);
    printf("Equation: f(x) = %.2f -x + %.2fsin(x)\n", A,B);
    printf("x0 : ");scanf("%f", &xk);
    printf("Epsilon : ");scanf("%f", &eps);
    xk1=xk-func(A,B,xk)/derivative(B,xk);
    printf("\n1. iteration x = %.4f\n", xk1);
    while (fabs(xk1 - xk) > eps){
    	xk=xk1;
    	xk1=xk-func(A,B,xk)/derivative(B,xk);
    	printf("%d. iteration x = %.4f\n", ite, xk1);
    	ite++;
    }
    printf("\nX Root: %.4f\n", xk1);
    printf("\nIteration Count: %d\n", ite-1);
    return 0;
}
