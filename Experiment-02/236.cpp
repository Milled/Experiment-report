#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a=2;
  a+=a;
  a-=2;
  a*=2+3;
  a/=a+a;
  printf("%d\n",a);//����ļ�����Ϊ0.5����ΪaΪint�����Ϊ0��
  return 0;
}
