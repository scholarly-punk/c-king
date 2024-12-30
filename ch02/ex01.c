#include <stdio.h>

int main(void)
{
  printf("hello, world\n");

  /*
    No I didn't get a warning from the compiler, when compiled with

    gcc -march=native -O3 -std=c99 -W -Wall -Wextra -Werror -pedantic
    -o ex01 ex01.c
    
    But I did when I added the -ansi flag.
   */

  return 0;

  /* The above got rid of the warning even with the -ansi flag. */  
}
