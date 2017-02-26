#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  char str1[]="输入a和b：";
  char str2[]="积为：";
  char str3[]="商为：";
  char str4[]="余数为：";
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
