#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  double a,q=1.1;
  int n;
  for(n=1;;n++){
    a=pow(q,n);
    if (a>=3) break;
  }
  printf("%d\n",n);
  return 0;
}
