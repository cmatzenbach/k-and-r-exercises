#include <stdio.h>

#define MAXSIZE 20

int getLine(char s[], int maxline);
void copyStr(char to[], char from[]); 

int main(void) {
  int len, max;
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
    if (max > MAXSIZE) {
      printf("\nArray is %d over the limit", max-MAXSIZE);
      printf("\nString length: %d", max);
      printf("\nThe longest line is %s\n", longest);
    }
    else {
      printf("The longest line is %s\n", longest);
    }
  }
  
  return 0;
}

// gets the current line from user, returns line length
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
