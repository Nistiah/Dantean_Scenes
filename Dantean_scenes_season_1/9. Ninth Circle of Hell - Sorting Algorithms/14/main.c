#include <stdio.h>
#include "vector_utils.h"

int sort_negative_asc_positive_desc(int tab[], int size);

int main() {
    int d[150], x;

    printf("podaj wektor:");
    x=read_vector(d,150,0);
    if(x==-2)
    {
        printf("Incorrect input");
        return 1;
    }
    if(x==0||x==-1)
    {
        printf("Not enough data available");
        return 3;
    }
    sort_negative_asc_positive_desc(d,x);
    display_vector(d,x);


    return 0;
}
int sort_negative_asc_positive_desc(int tab[], int size)
{
    if(size<=0)
    {return 1;}
    int x, indexuj1=-1, indexdod1=-1;

    for(int i=0; i<size; i++)
    {
        indexuj1=-1;
        for (int j=0; j<size; j++)
        {
            if(indexuj1!=-1){
            if(tab[j]<0&&j!=indexuj1)
            {
                if(tab[indexuj1]>tab[j]) {
                    x = tab[j];
                    tab[j] = tab[indexuj1];
                    tab[indexuj1] = x;
                    indexuj1=j;
                }
            }
            }
            if(tab[j]<0)
            {
                indexuj1=j;
            }
        }
        indexdod1=-1;
        for (int j=0; j<size; j++)
        {
            if(indexdod1!=-1){
                if(tab[j]>=0&&j!=indexdod1)
                {
                    if(tab[indexdod1]<tab[j]) {
                        x = tab[j];
                        tab[j] = tab[indexdod1];
                        tab[indexdod1] = x;
                        indexdod1=j;
                    }
                }
            }
            if(tab[j]>=0)
            {
                indexdod1=j;
            }
        }
    }

    return 0;
}
