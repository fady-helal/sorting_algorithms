#include"sort.h"
void print_array(int arr[], size_t size)
{
size_t i;
for (i = 0; i < size; i++)
{
    if (i == 0)
        printf("%d", arr[i]);
    else
    {
        printf(", %d", arr[i]);
    }
}
printf("\n");
}

