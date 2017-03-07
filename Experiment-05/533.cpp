#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  int n;
  double i,sum=0;
  for(n=1;;n++){
    i=pow((-1),(n-1))*(1/(pow(n,2)+1));
    sum+=i;
    if(fabs(i)<1e-5)break;
  }
  printf("%lf\n",sum);
  return 0;
}
