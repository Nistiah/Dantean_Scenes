#include <stdio.h>
#include "vector_utils.h"

int read_vector(int *vec, int size, int stop_value)
{
    if (0>size)
    {
        return -1;
    }
    if(vec==NULL)
        return -1;

    int j=size;
    for (int i=0; i<size; i++)
    {
        if(scanf("%d", vec)!=1)
        {
            return -2;
        }
        if(*vec==stop_value) {
            j=i;
            return j;
        }
        vec++;
    }
    if (1>j)
    {
        return -1;
    }
    while(getchar()!='\n')
    {}
    return j;
}
void display_vector(const int *tab, int size)
{
    if(size>0) {
        for (int i = 0; i < size; i++) {
            printf("%d ", *tab);
            tab++;
        }
        printf("\n");
    }
}
int shift(int *array, int array_size, int positions_to_shift, enum direction dir)
{
    if (1>array_size||array==NULL||positions_to_shift<0||dir>2||dir<0)
    {
        return 1;
    }

    int c;
    int tab[300];
    int *a = tab;

    if(dir == ROTATE_RIGHT)
    {
        positions_to_shift = (positions_to_shift + array_size) % array_size;
        for(int i=0; i<array_size;i++)
        {
            c = (i + positions_to_shift + array_size) % array_size;
            *(tab + c) = *(array + i);
        }
    }

    else if(dir == ROTATE_LEFT)
    {
        positions_to_shift = (positions_to_shift + array_size) % array_size;
        for(int i=0; i<array_size;i++)
        {
            c = (i - positions_to_shift + array_size) % array_size;
            *(tab + c) = *(array + i);
        }
    }

    for (int i = 0; i < array_size; i++)
    {
        *(array + i) = *(a + i);
    }



        return 0;
    }
