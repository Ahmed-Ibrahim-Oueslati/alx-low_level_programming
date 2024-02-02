#include <stdio.h>
#include <math.h>

int is_prime(int n) {
  // Check if n is less than or equal to 1
  if (n <= 1) {
    return 0; // Not prime
  }
  // Check if n is even (except 2)
  if (n % 2 == 0 && n != 2) {
    return 0; // Not prime
  }
  // Check divisibility by odd numbers up to sqrt(n)
  for (int i = 3; i <= sqrt(n); i += 2) {
    if (n % i == 0) {
      return 0; // Not prime
    }
  }
  return 1; // Prime
}

void find_prime_factors(int n) {
  printf("Prime factors of %d: ", n);
  // Handle divisibility by 2 separately
  while (n % 2 == 0) {
    printf("2 ");
    n /= 2;
  }
  // Check for odd prime factors
  for (int i = 3; i <= n; i += 2) {
    if (is_prime(i) && n % i == 0) {
      printf("%d ", i);
      n /= i;
    }
  }
  printf("\n");
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  find_prime_factors(num);
  return 0;
}

