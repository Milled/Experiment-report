#include "stdio.h"
int main(){
  int n,sum=0;
  for (n = 0; n <= 100; n++)
	sum = sum + n;
  printf("%d\n", sum);
  return 0;
}
