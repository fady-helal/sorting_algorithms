#include "sort.h"
void bubble_sort(int *array, size_t size)
{
    size_t my_size = size;
    size_t i, j;
    int flag = true;
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
