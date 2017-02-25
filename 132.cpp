#include "stdio.h"
int main(int argc, char const *argv[]) {
  int sum,difference,produce;
  float a,b,quotient;
  a=1;
  b=3;
  sum=a+b;
  difference=a-b;
  produce=a*b;
  quotient= a/b;
  printf("sum is %d\n",sum);
  printf("difference is %d\n",difference);
  printf("produce is %d\n",produce);
  printf("quotient is %.3f\n",quotient);
  return 0;
}
