#include <stdio.h>
#include <limits.h>
int isPrime(int num){
  int checked = 1, checking[7] = {2,3,5,7,11};
  if(num <= 1){
    checked = 0;
  }
  if(checked == 1 && num % 2 == 0){
    checked = 0;
  }
  if(checked == 1){
    for(int i = 3; i < num; i += 2){
      if(num % i == 0){
        checked = 0;
      }
    }
  }
  return checked;
}
int main(void) {
  int arr[5], numE = 5;
  for(int i = 0; i < 5; i++){
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i < 5; i++){
    if(isPrime(arr[i]) == 1){
      for(int k = i - 1; k < numE; k++){
        arr[k] = arr[k+1];
      }
      numE--;
    }
  }
  if(numE == 0){
    printf("I am empty");
  }else{
    for(int i = 0; i < numE; i++){
      printf("%d ", arr[i]);
    }
  }
}
