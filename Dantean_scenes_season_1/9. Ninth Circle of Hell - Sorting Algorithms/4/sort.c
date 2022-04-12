#include "vector_utils.h"
#include "sort.h"

int insertion_sort_asc(int tab[], int size) {
    if (size <= 0) { return 1; }
    int j, index;
    for (int i=1; i<=size-1; i++)
    {

        index = tab[i];
        j=i-1;
        while(j>=0&&tab[j]>index)
        {
            tab[j+1]=tab[j];
            --j;
        }
        tab[j+1]=index;


        display_vector(tab,size);

    }
        return 0;
    }

int insertion_sort_desc(int tab[], int size)
{
    if (size <= 0) { return 1; }
    int j, index;
    for (int i=1; i<=size-1; i++)
    {
        index = tab[i];
        j=i-1;
        while(j>=0&&tab[j]<index)
        {
            tab[j+1]=tab[j];
            --j;
        }
        tab[j+1]=index;


        display_vector(tab,size);

    }
    return 0;
}
int insertion_sort(int tab[], int size, enum direction dir){
    if (size<=0)
    {return 1;}

    if (dir!=1&&dir!=2)
    {
        return 1;
    }
    if (dir==1)
    {
        insertion_sort_asc(tab, size);
    }
    if(dir==2)
    {
        insertion_sort_desc(tab, size);
    }
    return 0;
}
