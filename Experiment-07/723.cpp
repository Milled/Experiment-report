#include "stdio.h"
int main(int argc, char const *argv[]) {
  int i;
  int f[20]={0,1,1};
  for(i=3;i<20;i++)
  {
    f[i]=f[i-1]+f[i-2]+f[i-3];
  }
  for(i=0;i<20;i++)
  {
    if(i%5==0)printf("\n");
    printf("%6d",f[i]);
  }
  printf("\n");
  return 0;
}
