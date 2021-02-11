#include "holberton.h"
#include <stdio.h>
void print_most_numbers(void)
{
         int i;

         for (i = '0'; i <= '9'; i++)
         {
                 if ((i == 2) || (i == 4))
                 {
                         continue;
                 }
                 else
                         printf("%c",i);

         }
         printf("\n");
 }

int main(void)
{
    print_most_numbers();
    return (0);
}
