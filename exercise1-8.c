/* Exercise 1-8. Write a program to count blanks, tabs, and newlines.*/

#include <stdio.h>

int main()
{
  int c, tabs, blanks, nl;
  tabs = blanks = nl = 0;

  while ((c = getchar()) !=EOF) {
    if (c == '\n')
      ++ nl;
    if (c == '\t')
      ++ tabs;
    if (c == ' ')
      ++ blanks;
  }
  printf ("\nNewlines: %d | Tabs: %d | Blanks: %d\n", nl, tabs, blanks);
}
      
