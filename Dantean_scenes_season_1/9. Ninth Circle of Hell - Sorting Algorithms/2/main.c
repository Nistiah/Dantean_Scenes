#include <stdio.h>
#include "vector_utils.h"
#include "sort.h"

int main() {
    int d[51], x;

    printf("podaj wektor:");
    x=read_vector(d,50,0);
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
    printf("podaj kierunek:");
    enum direction dir;
    if(scanf("%u", &dir)!=1)
    {
        printf("Incorrect input");
        return 1;
    }

    if (dir!=1&&dir!=2)
    {
        printf("Incorrect input data");
        return 2;
    }

    bubble_sort(d, x, dir);
    display_vector(d,x);
    return 0;
}
