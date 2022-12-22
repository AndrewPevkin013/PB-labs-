#include <stdio.h>

int fib(int n) {
  int a, b;
  if (n <= 1)
    return 1;
  a = fib(n - 1);
  b = fib(n - 2);
  return a + b;
}

//int fib(int n) {
//  int a, b, sum, count;
//  a = count = sum = 0;
//  b = 1;
//  while (count < n) {
//    sum = a + b;
//    a = b;
//    b = sum;
//    count++;
//  }
//  return a;
//}

int main(){
  int n = 35;
  printf("%d", fib(n));
  return 0;
}
