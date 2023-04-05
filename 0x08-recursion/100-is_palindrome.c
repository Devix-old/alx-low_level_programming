#include <string.h>
#include <stdio.h>

/**
 * helper - Checks if a string is a palindrome recursively
 *
 * @s: String to check
 * @i: Starting index to check from
 *
 * Return: 1 if palindrome, 0 if not
 */

int helper(char *s, int i)
{
    int len = strlen(s);

    if (i >= len)
    {
        return 1;
    }

    if (s[i] != s[len - 1 - i])
    {
        return 0;
    }

    return helper(s, i + 1);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 *
 * @s: String to check
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
    return helper(s, 0);
}

