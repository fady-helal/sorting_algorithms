#include "sort.h"
/**
 * _swap - Swap two integers in an array.
 * @index1: The first integer to swap.
 * @index2: The second integer to swap.
 */
void _swap(int *index1, int *index2)
{
int temp;
temp = *index1;
*index1 = *index2;
*index2 = temp;
}
/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
size_t my_size = size;
size_t i, j;
bool flag = true;
for (i = 0 ; i < my_size - 1; i++)
{
for (j = 0 ; j < my_size - i - 1 ; j++)
{
if (array[j] > array[j + 1])
{
_swap(&array[j], &array[j + 1]);
print_array(array, my_size);
}
}
if (flag == false)
break;
}
}
