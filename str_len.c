#include "main.h"
/**
 * str_len - function to check string lenght
 * @s: string to be checked
 * Return: number of characters in string
 */
int str_len(char *s)
{
        int i;

        i = 0;
        while (s[i])
        {
                i++;
        }
        return (i);
}
