#include "stdio.h"
int main(int argc, char const *argv[]) {
  int fac(int n);
  int N=5,M=2;
  int con;
  con=fac(N)/(fac(M)*fac(N-M));
  printf("%d\n",con);
  return 0;
}

int fac(int n){
  int f;
  if(n<0){
    printf("error");
  }
  else if(n==0||n==1){
    f=1;
  }
  else f=fac(n-1)*n;
  return(f);
}
