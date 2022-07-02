#include<stdio.h>                                                                              
#include <unistd.h>

/**
 * *main - print exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 *   follwed by a new line, to standard error.
 *   return: Always 0 (success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - dora korpar, 2015-10-199\n", 59);
return (1);
}
