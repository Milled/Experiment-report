#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a=3,b=4,c=5;
  float x=1.414,y=1.732,z=2.712;
  printf("a=%-7.db=%-7.dc=%-7.d\nx=%-7.3fy=%-7.3fz=%-7.3f\n",a,b,c,x,y,z);
  return 0;
}
