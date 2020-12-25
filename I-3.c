#include <stdio.h>

int main(void) {
  char text[40], text2[40], l = 0;
  scanf("%s", text);
  for(int i = 0; i < 40; i++){
    if(text[i] != text[i-1]){
      text2[l] = text[i];
      l++;
    }
    if(text[i] == text[i+1]){
      i++;
    }
  }
  printf("%s\n", text2);
}
