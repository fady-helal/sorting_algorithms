#include"sort.h"

void _swap(int *index1, int *index2)
{
    int temp;
    temp = *index1;
    *index1 = *index2;
    *index2 = temp;
}

void print_array(int arr[], size_t size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (i == 0)
            printf("%d", arr[i]);
        else
        {
            printf(", %d" arr[j]);
        }
    }
    printf("\n")
}
