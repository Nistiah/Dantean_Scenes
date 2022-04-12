#include <stdio.h>
#include "vector_utils.h"

int sort_by_distance(int tab[], int size, int v);
int mod(int a)
{
    if(a<0)
    {return -a;}
    return a;
}
int main() {
    int d[150], x;
    int v;

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
    printf("Podaj wartosc:");
    if(scanf("%d", &v)!=1)
    {
        printf("Incorrect input");
        return 1;
    }
    sort_by_distance(d,x,v);

    display_vector(d,x);


    return 0;
}


int sort_by_distance(int tab[], int size, int v)
{
    if (size<=0)
    {return 1;}
    int x;
    for (int i=0; i<size-1; i++)
    {
        for(int j=1; j<size; j++)
        {
            if (mod(tab[j-1]-v)>mod(tab[j]-v))
            {
                x=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=x;
            }
        }

    }
    return 0;
}
