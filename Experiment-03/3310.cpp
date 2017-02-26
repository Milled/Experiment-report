#include "stdio.h"
int main(int argc, char const *argv[]) {
  char a,b,c;
  a=getchar();
  b=getchar();
  c=getchar();
  a+=32;
  b+=32;
  c+=32;
  putchar(a);
  putchar(b);
  putchar(c);
  return 0;
}
