#include "main.h"
/**
 * _sqrt_recursion_calculate - calculates the square root
 *
 * @n: parameter
 *
 * @start: parameter
 *
 * @end: parameter
 *
 * Return: Always 0 or 1
 */
int _sqrt_recursion_calculate(int n, int start, int end)
{
        int mid;
        int square;

        if (start > end)
                return (-1);
        mid = (start + end) / 2;
        square = mid * mid;

        if (square == n)
                return (mid);
        else if (square < n)
                return (_sqrt_recursion_calculate(n, mid + 1, end));
        else
                return (_sqrt_recursion_calculate(n, start, mid - 1));
}

/**
 * _sqrt_recursion - prints the square root of a number
 *
 * @n: a parameter for testing
 *
 * Return: Always 1 or 0
 */
int _sqrt_recursion(int n)
{
        if (n < 0)
                return (-1);
        return (_sqrt_recursion_calculate(n, 0, n));
}

