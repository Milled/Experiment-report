#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a=2;
  a+=a;
  a-=2;
  a*=2+3;
  a/=a+a;
  printf("%d\n",a);//这里的计算结果为0.5，因为a为int，输出为0；
  return 0;
}
