#include <stdio.h>
#include "insertion_sort.h"


bool insertion_sort(int *array, int size)
{
    int i = 0;
    int j = 0;
    int key = 0;
    if(array == NULL || size < 2)
    {
        return false;
    }
    
    for(j=1; j<size; j++)
    {
        key = array[j];
        i = j - 1;
        while(i >= 0 && array[i] > key)
        {
            array[i+1] = array[i];
            i = i -1;
        }
        array[i+1] = key;
    }
    return true;
}
