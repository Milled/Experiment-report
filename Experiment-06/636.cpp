#include "stdio.h"
int main(int argc, char const *argv[]) {
  int x,y,z,sum;
  for(x=0;x<=9;x++){
    for(y=0;y<=9;y++){
      for(z=0;z<=9;z++){
        sum=100*x+10*x+z+100*y+10*z+z;
        if(sum==532) printf("x=%d y=%d z=%d\n",x,y,z);
      }
    }
  }
  return 0;
}
