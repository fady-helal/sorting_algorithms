#include"sort.h"
/**
 * partition - Make partition (Quick Sort Algorthim)
 *
 * @array: The array to Operated
 * @low: low index
 * @high: high index
 * @size: Number of elements in @array
 * Return: Index
 */

size_t partition(int *array, int low, int high, size_t size)
{
    int pivot = array[low];
    int i = low;
	int j = high;
    while(i < j)
    {
        do 
        {
            i++;
        }while(array[i] <= pivot);
        do
		{
			j--;
		} while (array[j] > pivot);
        if (i < j)
			_swap(array[i], array[j]);
    }
    _swap(array[low], array[j]);
	return j;
}

/**
 * QS_Recursive - Make Recursion (Quick Sort Algorthim)
 *
 * @array: The array to Operated
 * @low: low index
 * @high: high index
 * @size: Number of elements in @array
 */

void QS_Recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		size_t Pv_indx;

		Pv_indx = partition(array, low, high);
		QS_Recursive(array, low, Pv_indx - 1);
		QS_Recursive(array, Pv_indx + 1, high);
	}
}


/**
 * quick_sort - Arrange Array (Quick Sort Algorthim)
 *
 * @array: The array to Operated
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	QS_Recursive(array, 0, size - 1, size);
}