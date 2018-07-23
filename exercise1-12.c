/* Exercise 1-12. Write a program that prints its input one word per line. */

#include <stdio.h>

int main()
{
    int c, prevchar;
    prevchar = 'a';

    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (prevchar == ' ' || prevchar == '\n' || prevchar == '\t')
                continue;

            else 
            {
               putchar('\n'); 
            }
        }

        else 
        {
             putchar(c);
        }
        prevchar = c;
    }

    return 0;
}