#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  double a,b,c,x1,x2,disc,realpart,imagpart;
  scanf("%lf%lf%lf\n",&a,&b,&c);
  if(a==0)
  printf("This is not a quadratic");
  else
  {
    disc=b*b-4*a*c;
    if(disc==0)
    printf("The equation has two equal roots: %8.4f\n",-b/(2*a));
    else
    if(disc>0)
    {
    x1=(-b+sqrt(disc))/(2*a);
    x2=(-b-sqrt(disc))/(2*a);
    printf("The equation has complex roots: %8.4f and %8.4f\n",x1,x2);
    }
    else
    {
      realpart=-b/(2*a);
      imagpart=sqrt(-disc)/(2*a);
      printf("The equation has distinct real roots:\n");
      printf("%8.4f+%8.4fi\n",realpart,imagpart);
      printf("%8.4f-%8.4fi\n",realpart,imagpart);
    }
  }
  return 0;
}
