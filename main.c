#include <stdio.h>

float globVariable = 3.14;
// static variables persist within that function and will be stored in the function



void writeMessage(char name[], int n){
  printf("Hello, %s, %d\n", name, n);
}

int fib(int n){
  if(n==0) return 0;
  else if(n == 1) return 1;
  else return fib(n-1) + fib(n-2);

}

int main(void) {
  int n = 10;
  int fibN = fib(n);
  printf("Fibonacci of %d is %d\n", n, fibN);
  printf("Hello World\n");
  int cumsum = 0;
  int i;
  for (i = 1; i <= 100; i++){
    cumsum = cumsum + i;
  }
  while (i <= 100){
    cumsum += i;
    i += 1;
  }
  writeMessage((char *)"Sara", 2);
  printf("the cumulative sum is %d\n", cumsum);
  
  return 0;
}

