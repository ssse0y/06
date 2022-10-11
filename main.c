#include <stdio.h>

int sumTwo(int a, int b){
   int op;
   op=a+b;
   return op;
}

int square(int n){
   return(n*n);
}

int get_max(int x, int y){
   if (x>y) return(x);
   else return(y);
}

int main(void){
   int sum, sq, max;
   sum= sumTwo(2,5);
   sq=square(3);
   max=get_max(6,5);
   printf("두 숫자의 합: %d\n", sum);
   printf("정수의 제곱: %d\n", sq);
   printf("큰 수 구하기: %d\n", max);
   
   return 0;
}
