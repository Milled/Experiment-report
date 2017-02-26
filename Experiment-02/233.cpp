#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  char str1[]="输入华氏温度F：";
  char str2[]="对应的摄氏温度C：";
  float a,b;
  printf("%s",str1);
  scanf("%f\n",&a);
  b=(5./9)*(a-32);
  printf("%s%.2f\n",str2,b);
  return 0;
}
