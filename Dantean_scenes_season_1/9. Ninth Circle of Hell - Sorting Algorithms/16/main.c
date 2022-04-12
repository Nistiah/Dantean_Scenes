#include <stdio.h>
#include "vector_utils.h"

int sort_odd_asc_even_desc(int tab[], int size);


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
    sort_odd_asc_even_desc(d,x);
    display_vector(d,x);
    return 0;
}

int sort_odd_asc_even_desc(int tab[], int size)
{
    if(size<=0)
    {return 1;}
    int x;

    for(int i=0; i<size; i++)
    {
        for (int j=1; j<size; j++)
        {

            if(tab[j]%2==1&&tab[j-1]%2!=1||tab[j]%2==-1&&tab[j-1]%2!=-1||tab[j]%2==1&&tab[j-1]%2!=-1||tab[j]%2==-1&&tab[j-1]%2!=1)
            {
                x=tab[j];
                tab[j]=tab[j-1];
                tab[j-1]=x;
            }
        }
    }
    for(int i=0; i<size; i++) {
        for (int j = 1; j < size; j++) {
        if(tab[j]%2==1||tab[j]%2==-1)
        {
            if (tab[j]<=tab[j-1])
            {
                x=tab[j];
                tab[j]=tab[j-1];
                tab[j-1]=x;
            }
        }else if(tab[j]%2==0&&tab[j-1]%2==0)
            {
                if (tab[j]>tab[j-1])
                {
                    x=tab[j];
                    tab[j]=tab[j-1];
                    tab[j-1]=x;
                }
            }
        }
    }



    return 0;
}
