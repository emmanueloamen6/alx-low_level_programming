#include "main.h"
/**
 * _strspn - 
 * Return:
 */
unsigned int _strspn(char *s, char *accept) 
{
    unsigned int c = 0;
    int i = 1;

    while (*s && i) 
    {
        i = 0;
        for (char *a = i; *a; a++) {
            if (*s == *a) {
                c++;
                i = 1;
                break;
            }
        }
        s++;
    }
    return c;
}
