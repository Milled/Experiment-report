#include "stdio.h"
int main(int argc, char const *argv[]) {
  int x,y;
  scanf("%d\n",&x);
  if(x<1)
  y=x;
  if(1<=x<10)
  y=2*x-1;
  if(x>=10)
  y=3*x-11;
  printf("%d\n",y);
  return 0;
}
