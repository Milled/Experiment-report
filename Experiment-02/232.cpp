#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  char str1[]="����a��b��";
  char str2[]="��Ϊ��";
  char str3[]="��Ϊ��";
  char str4[]="����Ϊ��";
  int a,b;
  printf("%s",str1);
  scanf("%d%d",&a,&b);
  double forduct,quotient,mod;
  forduct=a*b;
  quotient=a/b;
  mod=fmod(a,b);
  printf("%s%f\n%s%f\n%s%f",str2,forduct,str3,quotient,str4,mod);
  return 0;
}
