#include "stdio.h"
#include "math.h"
#define PI 3.141592
int main(int argc, char const *argv[]) {
  float a;
  char str1[] = "输入圆的半径:";
  char str2[] = "圆的面积为:";
  char str3[] = "圆的周长为:";
  printf("%s",str1 );
  scanf("%f\n",&a);
  float b,c;
  b=PI*pow(a,2);
  c=2*PI*a;
  printf("%s%f\n%s%f\n",str2,b,str3,c);
  return 0;
}
