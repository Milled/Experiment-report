#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main(int argc, char const *argv[]) {
  int i,j,add;
  srand(time(NULL));
  int a[10][10]={{0}},b[10][11]={{0}};
  for(i=0;i<=9;i++)
  {
    for(j=0;j<=9;j++)
    {
      a[i][j]=rand()%100;
    }
  }
  printf("array a :\n");
  for(i=0;i<=9;i++)
  {
    for(j=0;j<=9;j++)
    {
      printf("%2d ",a[i][j]);
    }
    printf("\n");
  };
  printf("\n");
  for(j=0;j<=9;j++)
  {
    for(i=0;i<=9;i++)
    {
      b[i][j]=a[i][j];
    }
  };
  for(i=0;i<=10;i++)
  {
    for(j=0,add=0;j<=9;j++)
    {
      add+=a[i][j];
    }
    b[i][10]=add;
  };
  printf("array b :\n");
  for(i=0;i<=9;i++)
  {
    for(j=0;j<=10;j++)
    {
      printf("%2d ",b[i][j]);
    }
    printf("\n");
  };
  return 0;
}
