/*Kamran Balayev 17011904*
  REGULA FALSI METHOD*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,b,c,eps,Fa,Fb,Fc,G,D;
    printf("\t\t\t\t\tRegula Falsi Method\n\n\n");
    printf("Equation: Gx ( x^2 - D)");
    printf("\nValue of G : ");
    scanf("%f", &G);
    printf("Value of D : ");
    scanf("%f", &D);

    printf("Equation: f(x) = ");
    printf("%.1f*x*(x^2-%.1f)", G,D);
    printf("\n");

    printf("Value of a : ");
    scanf("%f", &a);
    printf("Value of b : ");
    scanf("%f", &b);
    printf("Value of epsilon : ");
    scanf("%f", &eps);
    printf("\n");

    Fa = G*a*((a*a)-D);
    Fb = G*b*((b*b)-D);
    c = (b*Fa - a*Fb) / (Fa - Fb);
    Fc = G*c*((c*c)-D);

    if (Fa * Fb > 0)
    {
        printf("The equation has not a root");

    }
    else{
        if (Fa * Fb == 0)
        {
            if (Fa == 0)
            {
                printf("a is root of equation\n");
            } else {
                printf("b is root of equation\n");
            }

        }
        else
        {
            if (Fc == 0)
            {
                printf("c is root of equation\n");
            } else
            {
                while (fabs(Fc) > eps)//purpose of fabs function is getting the absolute value
                {
                    if (Fc * Fa < 0)
                    {
                        b = c;
                    } else {
                    	a = c;
                    }

                    c = (b*Fa - a*Fb) / (Fa - Fb);
                    printf("a = %.3f\n", a);
                    Fa = G*a*((a*a)-D);
                    printf("f(a) = %.3f\n", Fa);
                    printf("b = %.3f\n", b);
                    Fb = G*b*((b*b)-D);;
                    printf("f(b) = %.3f\n", Fb);
                    printf("c = %.3f\n", c);
                    Fc = G*c*((c*c)-D);
                    printf("f(c) = %.3f\n", Fc);
                    printf("\n");
                }
				c = (b*Fa - a*Fb) / (Fa - Fb);
            }
        }
    }
    printf("Root => ");
    printf("%.4f\n", c);

    return 0;
}
