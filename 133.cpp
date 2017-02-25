#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  int a,b,c,d,e,f;
  scanf("%d%d%d%d%d\n",&a,&b,&c,&d,&e);
  f=pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2)+pow(e,2);
  printf("%d\n",f);
  return 0;
}
