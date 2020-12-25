#include <stdio.h>
#include <limits.h>

int main(void) {
  int N, maxL, minL, maxN = INT_MIN, minN = INT_MAX;
  scanf("%d", &N);
  int arr[N - 1];
  for(int i = 0; i < N; i++){
    scanf("%d", &arr[i]);
    if(arr[i] > maxN){
      maxN = arr[i];
      maxL = i;
    }else if(arr[i] < minN){
      minN = arr[i];
      minL = i;
    }
  }
  int temp = arr[maxL];
  arr[maxL] = arr[minL];
  arr[minL] = temp;

  for(int i = 0; i < N; i++){
    printf("%d ", arr[i]);
  }
}
