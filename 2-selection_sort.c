#include"sort.h"
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
 * selection_sort - sort number by selection algorithm.
 * @array: array will be sorted.
 * @size: size the array.
*/
void selection_sort(int *array, size_t size)
{
size_t size_array = size;
size_t i, j, minindex;
for (i = 0 ; i < size_array - 1 ; i++)
{
minindex = i;
for (j = i + 1 ; j < size_array ; j++)
{
if (array[j] < array[minindex])
minindex = j;
}
_swap(&array[i], &array[minindex]);
print_array(array, size_array);
}
}
