#include "stdio.h"
int main(int argc, char const *argv[]) {
  int i,j;
  for (i=1;i<=9;i++){
	  for (j = 1; j <= i; j++) {
      printf("%d*%d=%d ",j,i,j*i);
	  if (i == j) printf("\n");
    }
  }
  return 0;
}
