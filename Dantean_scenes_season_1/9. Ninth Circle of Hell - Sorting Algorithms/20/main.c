#include <stdio.h>
#include "vector_utils.h"

int sum_of_digits(signed int number);
int sort_by_sum(int tab[], int size);

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
    sort_by_sum(d,x);
    display_vector(d,x);


    return 0;
}
int sum_of_digits(signed int number){
    if(number<0)
    {
        number*=-1;
    }
    if(number<10)
    {return number;}
    else return (number%10)+(sum_of_digits(number/10));
}
int sort_by_sum(int tab[], int size){
    int pom;
    if(size<1)
    {return 1;}
    for (int i=0; i<size; i++)
    {
        for (int j=1; j<size; j++)
        {
            if(sum_of_digits(tab[j])<sum_of_digits(tab[j-1]))
            {
                pom=tab[j];
                tab[j]=tab[j-1];
                tab[j-1]=pom;
            }
            if(sum_of_digits(tab[j])==sum_of_digits(tab[j-1]))
            {
                if(tab[j]<tab[j-1]) {
                    pom = tab[j];
                    tab[j] = tab[j - 1];
                    tab[j - 1] = pom;
                }
            }
        }
    }
    return 0;

}
