#include <math.h>
#include <stdio.h>
#define A -5
#define B 5
#define H 0.1

double F(double x) {
  return x * exp(x) + 2 * sin(x) - sqrt(sqrt(pow(x * x * x - x * x, 2)));
}
int main() {
  int count;
  double x, y, m, n, M, N;
  count = 0;
  printf("введите число M: ");
  scanf("%lf", &m);
  printf("введите число N: ");
  scanf("%lf", &n);
  if (m < n) {
    M = m;
    N = n;
  } else {
    N = m;
    M = n;
  }
  printf("значение аргумента     значение функции\n");
  for (x = A; x <= B; x += H) {
    y = F(x);
    printf("%10.4f            %10.4f\n", x, y);
    if (x >= M && x <= N) {
      count += 1;
    }
  }
  printf(
      "количество значений функции которые находятся на отрезке от M до N %d",
      count);
}