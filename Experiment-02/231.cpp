#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  int a,b,c;
  a=2;b=3;c=4;
  float x,d;
  x=1.414;
  d=a*pow(x,3)+b*pow(x,2)+c;
  printf("%f\n",d);
  return 0;
}
