#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a,b,c,t;
  scanf("%d%d%d\n",&a,&b,&c);
  if (a>b)
    t=a;
  else
    t=b;
  if (c>t)
    t=c;
  else
    t=t;
  printf("%d\n",t);
  return 0;
}
