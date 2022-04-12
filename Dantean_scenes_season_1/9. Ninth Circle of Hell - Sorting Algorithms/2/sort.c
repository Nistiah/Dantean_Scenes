#include "vector_utils.h"
#include "sort.h"
#include <stdio.h>


int bubble_sort_asc(int tab[], int size)
{
    if (size<=0)
    {return 1;}
    int x,c=1;
    for (int i=0; i<size-1; i++)
    {
        for(int j=1; j<size; j++)
        {
            if (tab[j-1]>tab[j])
            {
                x=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=x;
            }else
            {c++;}
        }
        if(c==size-1)
        {break;}
        display_vector(tab,size);
        c=0;
    }
    return 0;
}
int bubble_sort_desc(int tab[], int size)
{
    if (size<=0)
    {return 1;}
    int x,c=1;
    for (int i=0; i<size-1; i++)
    {
        for(int j=1; j<size; j++)
        {
            if (tab[j-1]<tab[j])
            {
                x=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=x;
            }else
            {c++;}
        }
        if(c==size-1)
        {break;}
        display_vector(tab,size);
        c=0;
    }
    return 0;
}
int bubble_sort(int tab[], int size, enum direction dir){
    if (size<=0)
    {return 1;}

    if (dir!=1&&dir!=2)
    {
        return 1;
    }
    if (dir==1)
    {
        bubble_sort_asc(tab, size);
    }
    if(dir==2)
    {
        bubble_sort_desc(tab, size);
    }
    return 0;
}
