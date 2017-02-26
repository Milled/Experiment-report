#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a,b,c,d,e;
  scanf("%d%d%d\n",&a,&b,&c);
  d=a+b+c;
  e=a-b-c;
  printf("x1=a+b+c=%2.d+%2.d+%2.d=%3.d\n",a,b,c,d);
  printf("x2=a-b-c=%2.d-%2.d-%2.d=%3.d\n",a,b,c,e);
  return 0;
}
