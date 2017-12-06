#include <stdio.h>

int main(void)
{
  int c, is_blank;

  while ((c = getchar()) != EOF) {
    if (is_blank != 1 || c != ' ') {
      putchar(c);
      if (c == ' ')
        is_blank = 1;
      else
        is_blank = 0;
    }
  }
}
