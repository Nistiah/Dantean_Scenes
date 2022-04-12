#include <stdio.h>

int read_vector(int vec[], int size, int stop_value)
{
    if (size<1)
    {
        return -1;
    }
    int j=size;
    for (int i=0; i<size; i++)
    {
        if(scanf("%d", &vec[i])!=1)
        {
            return -2;
        }
        if(vec[i]==stop_value) {
            j=i;
            break;
        }
    }
    if (j<1)
    {
        return -1;
    }
    while(getchar()!='\n')
    {}
    return j;
}
void display_vector(const int vec[], int size)
{
    if(size>0) {
        for (int i = 0; i < size; i++) {
            printf("%d ", vec[i]);
        }
        printf("\n");
    }
}
