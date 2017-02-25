#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  int a,b,c;
  float d;
  a=2;
  b=3;
  c=4;
  d=sqrt(a)+sqrt(b)+sqrt(c);
  char str[] = "平方根的和：";
  printf("%s%.4f\n",str,d);
  return 0;
}
