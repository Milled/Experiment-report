#include "stdio.h"
int main(int argc, char const *argv[]) {
  int i,j,number;
  int a[6];
  printf("input 6 numbers:\n");
  for(i=0;i<6;i++)
  {
    scanf_s("%d",&a[i]);
  }
  printf("\n");
  for(j=0;j<3;j++)
  {
    number=a[j];
    a[j]=a[i-j-1];
    a[i-j-1]=number;
  }
  printf("switch the order:\n");
  for(i=0;i<6;i++)
  {
  printf("%d ",a[i]);
  }
  printf("\n");
  return 0;
}
