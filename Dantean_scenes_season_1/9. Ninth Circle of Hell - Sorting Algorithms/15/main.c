#include <stdio.h>
#include "vector_utils.h"

int sort_odd_desc(int tab[], int size);
int sort_even_asc(int tab[], int size);

int main() {
    int d[150], x;
    printf("podaj wektor:");
    x=read_vector(d,150,0);
    if(x==-2)
    {
        printf("Incorrect input");
        return 1;
    }
    if(x==-1)
    {
        printf("Not enough data available");
        return 3;
    }
    sort_even_asc(d,x);
    sort_odd_desc(d,x);
    display_vector(d,x);
    return 0;
}
int sort_odd_desc(int tab[], int size)
{
    if(size<=0)
    {return 1;}
    int x;
    for(int i=1; i<size-2; i=i+2)
    {
        for (int j=1; j<size-2; j=j+2)
        {
            if(tab[j+2]>tab[j])
            {
                x=tab[j+2];
                tab[j+2]=tab[j];
                tab[j]=x;
            }
        }
    }
    return 0;
}
int sort_even_asc(int tab[], int size)
{
    if(size<=0)
    {return 1;}
    int x;
    for(int i=0; i<size-2; i=i+2)
    {
        for (int j=0; j<size-2; j=j+2)
        {
            if(tab[j+2]<tab[j])
            {
                x=tab[j+2];
                tab[j+2]=tab[j];
                tab[j]=x;
            }
        }
    }
    return 0;
}
