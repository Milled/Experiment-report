#include "stdio.h"
int main(int argc, char const *argv[]) {
  int num;
  scanf("%d\n",&num);
  while (printf("%1.d\t", num%10), num = num/10);
  return 0;
}
