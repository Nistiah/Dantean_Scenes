#include <stdio.h>

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
int sort(int *tab, int size)
{
    if (1>size||tab==NULL)
    {
        return 1;
    }
    tab++;
    int c, *t=tab;
    for(int i=1; i<size; i++)
    {
        for (int j=1; j<size; j++)
        {
            if(*tab<*(tab-1))
            {
                c=*tab;
                *tab=*(tab-1);
                *(tab-1)=c;
            }
            tab++;
        }
        tab=t;
    }
    return 0;
}
