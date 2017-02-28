#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  double num,a=0,b=0;
  scanf("%lf\n",&num);
  num=num/10000.0;
  num=modf (num,&b);
  a+=b;
  num=modf (num*10,&b);
  a+=b*10;
  num=modf (num*10,&b);
  a+=b*100;
  num=modf (num*10,&b);
  a = a + b * 1000 + num * 100000;
  printf("%.0f\n",a);
}
