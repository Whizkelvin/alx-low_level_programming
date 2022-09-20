Task 7.txt
Who has access
A
System properties
Type
Text
Size
500 bytes
Storage used
500 bytes
Location
pointers arrays and strings
Owner
Antony Bahati
Modified
Sep 19, 2022 by Antony Bahati
Opened
6:16 PM by me
Created
Sep 19, 2022
No description
Viewers can download
#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints a string
 * @str: string to print
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
* _strlen - returns the length of a string
* @s: string
*
* Return: the length of the given string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
