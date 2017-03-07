#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  int n,k,i,m=0;
  for (n=999;n>=100;n--)
  {
    k=sqrt(n);
    for (i=2;i<=k;i++)
      if (n%i==0)break;
    if (i>=k+1)
    {
      printf("%d\n",n);
      m++;
    }
	if (m==3)break;
  }
}
