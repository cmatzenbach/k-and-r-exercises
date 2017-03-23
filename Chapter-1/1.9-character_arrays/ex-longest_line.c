#include <stdio.h>

#define MAXSIZE 1000

int getLine(char* s, int lim);
int copyStr(char* to, char* from); 

int main(void) {
  int len, max;
  char line[MAXSIZE];
  char longest[MAXSIZE];

  max = 0;
  while ((len = getLine(line, MAXSIZE)) > 0) {
    if (len > max) {
      max = len;
      copyStr(line, longest);
    }
  }
  if (max > 0) {
    printf("The longest line is %s", longest);
  }
}

// gets the current line from user, returns line length
int getLine(char* s, int lim) {
  int c, i;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\0'; ++i) {
    s[i] = c;
  }
  if (c == '\0') {
    s[i] = '\0';
    i++;
  } 
  
  return i;
}

int copyStr(char* to, char* from) {
  int i = 0;

  while ((to[i] = from[i]) != '\0')
    i++;
}