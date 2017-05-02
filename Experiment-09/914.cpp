#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  int decide(int n);
  int find(int m,int sum,int max);
  int m,max,sum=1;
  printf("Find from:");
  scanf("%d",&m);
  printf("The number your want find:");
  scanf("%d",&max);
  printf("Those are the numbers you want:");
  find(m,sum,max);
  printf("\n");
  return 0;
}

int decide(int n){
  float a=pow(n,0.5);
  int i,f=1;
  for(i=2;i<=a;i++){
    while(n%i==0){
      f=0;break;
    }
  }
  return f;
}

int find(int m,int sum,int max){
  if (sum<=max){
    if(decide(m)==1){
      printf("%d ",m);
      sum++;
      find(m-1,sum,max);
    }
    else find(m-1,sum,max);
  }
  return 0;
}
