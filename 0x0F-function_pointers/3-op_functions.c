#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - adding op
  * @a: 1st int
  * @b: 2nd int
  *
  * Return: 0
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract
  * @a: 1st int
  * @b: 2nd int
  *
  * Return: int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiple
  * @a: 1 int
  * @b: 2 int
  *
  * Return: 0
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division
  * @a: int
  * @b: int
  *
  * Return: 0
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - module
  * @a: int
  * @b: int
  *
  * Return: int
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
