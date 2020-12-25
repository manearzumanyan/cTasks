#include <stdio.h>
int numDiv(int number){
  int num = 0, d = number;
  for(int i = 1; i <= number; i++){
    if(d % i == 0){
      num++;
    }
  }
  return num;
}
int main(void) {
  int N;
  for(;;){
    scanf("%d", &N);
    if(N == 0){
      break;
    }
    printf("%d ", numDiv(N));
  }
}
