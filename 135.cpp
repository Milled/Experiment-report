#include "stdio.h"
#include "math.h"
#define PI 3.141592
int main(int argc, char const *argv[]) {
  float a;
  char str1[] = "����Բ�İ뾶:";
  char str2[] = "Բ�����Ϊ:";
  char str3[] = "Բ���ܳ�Ϊ:";
  printf("%s",str1 );
  scanf("%f\n",&a);
  float b,c;
  b=PI*pow(a,2);
  c=2*PI*a;
  printf("%s%f\n%s%f\n",str2,b,str3,c);
  return 0;
}
