/*How do getchar and putchar work? getchar() get ONE char and return its code,
  putchar() get code of the char and return this char. This code demonstraites behaviour of this functions*/

#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF){
    printf("%c - ", c); /*In this case you can see an ASCII code of each char. 
			  Replace "%d" to "%c" and it automaticaly translate ANSII code to the char */
    putchar(c);
    printf("\n");
  }
}

 
