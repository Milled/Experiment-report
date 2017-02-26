#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a,b,c;
  float x,y,z;
  scanf("%d\n",&a);
  scanf("%d\n",&b);
  scanf("%d\n",&c);
  scanf("%f\n",&x);
  scanf("%f\n",&y);
  scanf("%f\n",&z);
  printf("a=%-7.db=%-7.dc=%-7.d\nx=%-7.3fy=%-7.3fz=%-7.3f\n",a,b,c,x,y,z);
  return 0;
}
