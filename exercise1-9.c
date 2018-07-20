/* Exercise 1-9. Write a program to copy its input to its output, replacing each
   string of one or more blanks by a single blank.*/

#include <stdio.h>

int main()
{
  int c, prevchar;
  prevchar = 'a'; /* You can use any char here*/
  
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      if (prevchar != ' ')
	putchar(c);
     }
    
    else
      putchar(c);

    prevchar = c;
  }
}
