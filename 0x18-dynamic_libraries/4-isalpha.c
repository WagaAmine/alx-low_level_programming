#include "main.h"

/**
 * _isalpha - checks for alphabetic character globale
 * @c: the character to be checked demo
 * Return: 1 if c is a letter, 0 otherwiseb
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
