#include <stdio.h>
#include "vector_utils.h"

int read_vector_float(float *vec, int size, float stop_value)
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
        if(scanf("%f", vec)!=1)
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
int create_histogram(const float *vec, int size, int *out, int out_size)
{
    if( size<1 ||out_size<1||out==NULL||vec==NULL)
    {return 1;}
    float a,b,c;
    for(int i = 0; i < out_size; i++)
    {*(i+out) = 0;}
    for(int j = 0; j < size; j++)
    {
        c = 0;
        b= 1;
        a = *(vec + j);
        for(int i = 0; i < out_size; i++)
        {
            if( a >= c && a < b )
            {
                *(out + (int)c) += 1;
            }
            b++;
            c++;
        }
    }
    return 0;
}
