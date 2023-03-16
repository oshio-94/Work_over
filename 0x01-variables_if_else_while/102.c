#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return:0
 */
int main(void)
{
        for (int a = 48; a <= 50; a++)
        {
                for (int b = 48; b <= 57; b++)
                {
                        for (int c = 48; c <= 53; c++)
                        {
                               for (int d = 48; d <= 57; d++)
			       {
				       if (a >= 50 && b >= 52)
				       {
					       break;
				       } 
				       else{
					       putchar(a);
					       putchar(b);
					       putchar(':'); * 2;
					       putchar(c);
					       putchar(d);
					       putchar(' ');
				       }
			       }
                        }
                }
        }
        return (0);
}
