#include <stdio.h>

int main(void) {
  int arr[5], k, flag = 0, fl;

  for(int i = 0; i < 5; i++){
    scanf("%d", &arr[i]);
    k = 0, fl = 1;
    char ar[256];

   if(arr[i] > 10){
      while (arr[i]) {
        ar[k++] = arr[i] % 10;
        arr[i] /= 10; 
      }
      for(int a = 0, b = k - 1; a < b; a++, b--){
        if(ar[a] != ar[b]){
          fl = 0;
        }
      }
      if(fl == 1){
        flag = 1;
      }
   }
  }
  if(flag == 1){
    printf("YES");
  }else{
    printf("NO");
  }
}
