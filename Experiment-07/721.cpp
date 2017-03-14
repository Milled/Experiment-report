#include "stdio.h"
#include "stdlib.h"
int main(int argc, char const *argv[]) {
  int a[15],i;
  for(i=0;i<=14;i++)
  {
  a[i]=rand() %101;
  if(i%5==0) printf("\n");
  printf("%3d",a[i]);
  }
  printf("\n");
  return 0;
}
