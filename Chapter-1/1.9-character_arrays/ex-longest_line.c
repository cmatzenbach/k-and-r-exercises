#include <stdio.h>

#define MAXSIZE 1000

int getLine(char s[], int maxline);
void copyStr(char to[], char from[]); 

int main(void) {
  // vars for current len and current max
  int len, max;
  // declare arrays big enough to hold max length
  char line[MAXSIZE];
  char longest[MAXSIZE];

  max = 0;
  while ((len = getLine(line, MAXSIZE)) > 0) {
    if (len > max) {
      max = len;
      copyStr(longest, line);
    }
  }
  if (max > 0) {
    printf("The longest line is %s", longest);
  }
  
  return 0;
}

// gets the current line from user, returns line length
int getLine(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
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
