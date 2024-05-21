#include<stdio.h>
#include<math.h>
double compoundinterest(double p1,double r1,double n1);
int main()
{
    double p,r,n;
    printf("Enter the credentials for compound interest:\n");
    scanf("%lf%lf%lf",&p,&r,&n);
    double  c;
    c=compoundinterest(p,r,n);
    printf("the interest is: %lf",c);
    }
   double  compoundinterest(double p1,double r1,double n1)
    {
    double ci;
    ci=p1*(1+(r1/100),n1);
return ci;
}
