#include "main.h"

void times_table(void)
{
    int a, b, result;

    

    for (a = 48; a < 58; a++)
    {
        
        for (b = 48; b < 58; b++)
        {
            result = a * b;
            _putchar(result);
            _putchar(',');
            _putchar(' ');
        }
        _putchar('\n');
    }
}