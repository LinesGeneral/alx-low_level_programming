#include <stdio.h>

/**
 * main - program prints different combination of two digits
 * prints only the smallest combination
 * Return: Always 0.
*/
int main()
{
    int a, b;

    for (a = 48; a < 58; a++)
    {
        for (b = 48; b < 58; b++)
        {
            if (a != b && a < b)
            {
                putchar(a);
                putchar(b);
                putchar(' ');
            }
        }
        
    }
    putchar('\n');
    return (0);
}
