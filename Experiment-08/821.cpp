#include "stdio.h"
int main(int argc, char const *argv[]) {
  int a[9],b[3][3];
  int i,j;
  printf("array a :\n");
  for(i=0;i<9;i++)
  {
    scanf_s("%d",&a[i]);
  }
  printf("\n");
  printf("array b :\n");
  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
      b[i][j]=a[i*3+j];
      printf("%2d",b[i][j]);
    }
    printf("\n");
  }
  return 0;
}
