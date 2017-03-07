#include "stdio.h"
int main(int argc, char const *argv[]) {
	long n, b, mul = 1, sum = 0;
	for (n = 1; n <= 10; n++) {
		for (b = 1; b <= n; b++) {
			mul = mul*b;
		}
		sum += mul;
		mul = 1;
	}
	printf("%ld\n", sum);
  return 0;
}
