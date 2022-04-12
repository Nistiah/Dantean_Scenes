#include <stdio.h>
#include "vector_utils.h"

int sum_of_digits(long long number);
int sort_by_length (int tab[], int size);
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
    sort_by_length(d,x);

    display_vector(d,x);


    return 0;
}
int sum_of_digits(long long number){
    int x=1;
    if(number<0)
    {
        number*=-1;
        x+=1;
    }
    if(number<10)
    {return x;}
    else return x+(sum_of_digits(number/10));



}
int sort_by_length (int tab[], int size)
{
    if (size<=0)
    {return 1;}
    int x;
    for (int i=0; i<size-1; i++)
    {
        for(int j=1; j<size; j++)
        {
            if (sum_of_digits(tab[j-1])>sum_of_digits(tab[j]))
            {
                x=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=x;

            }else
            if (sum_of_digits(tab[j-1])==sum_of_digits(tab[j])) {
                if (tab[j-1]<tab[j])
                {
                    x=tab[j-1];
                    tab[j-1]=tab[j];
                    tab[j]=x;
                }
            }
            }

    }
    return 0;
}
