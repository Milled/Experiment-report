#include "stdio.h"
#include "math.h"
#define PI 3.14159
int main(int argc, char const *argv[]) {
  float a=2.456;
  char str1[] = "�뾶Ϊ2.456��Բ�����Ϊ:";
  char str2[] = "�뾶Ϊ2.456��Բ���ܳ�Ϊ:";
  float b,c;
  b=PI*pow(a,2);
  c=2*PI*a;
  printf("%s%f\n%s%f\n",str1,b,str2,c);
  return 0;
}
