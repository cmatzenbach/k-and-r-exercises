#include <stdio.h>
#define MAXSIZE 1000

// print all input lines longer than 80 chars
int getLine(char s[], int lim);

int main(void) {
  // vars for current len and current max
  int len, max;
  // declare arrays big enough to hold max length
  char line[MAXSIZE];
  char longest[MAXSIZE];

  max = 0;
  while ((len = getLine(line, MAXSIZE)) > 0) {
    if (len > 10) {
      printf("%s\n", line);
    }
  }

  return 0;
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

/* void copyStr(char to[], char from[]) { */
/*   int i = 0; */

/*   while ((to[i] = from[i]) != '\0') */
/*     i++; */
/* } */
