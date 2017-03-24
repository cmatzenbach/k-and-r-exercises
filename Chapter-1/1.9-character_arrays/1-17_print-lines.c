#include <stdio.h>

// print all input lines longer than 80 chars
int main(void) {

}

int getLine(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if(i == (lim-1)) {
    while((c = getchar()) != '\n') ++i;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  } 
  
  s[i] = '\0';
  return i;
}

void copyStr(char to[], char from[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0')
    i++;
}
