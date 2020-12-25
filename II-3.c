#include <stdio.h>
#include <string.h>
int main(void) {
  int L;
  scanf("%d", &L);
  char s1[L], s2[L], s3[L], finalText[L*3];
  scanf("%s", s1);
  scanf("%s", s2);
  scanf("%s", s3);
  strcat(finalText, s3);
  strcat(finalText, s1);
  strcat(finalText, s2);
  printf("%s\n", finalText);
}
