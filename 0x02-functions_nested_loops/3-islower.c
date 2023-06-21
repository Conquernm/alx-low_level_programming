#include "main.h"

/**
 *_islower - Checks for loercase characters
 *@C: The character to be checked
 *Return: 1 if character is lowercase or 0 for anything else
 */

int _islower(int c)
{

	if (c >= '97' && c <= '122')
	{
	return (1);
	}	
	return(0);
}
