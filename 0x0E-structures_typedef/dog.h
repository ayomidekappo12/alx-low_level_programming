#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @struct: Define a new type struct dog.
 *
 * Return: Always (success) 0.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int main ()
{
	struct dog dog;

	dog.name = "Bingo";
	dog.age  = 5.2;
	dog.owner = "Alex";

	return (0);
}
