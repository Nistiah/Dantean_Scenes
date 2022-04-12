#include "vector_utils.h"
#include "sort.h"

int selection_sort_asc(int tab[], int size) {
    if (size <= 0) { return 1; }
    int index, x;
    for (int i = 0; i <=size-1; i++) {

        index = i;
        for (int j = i; j <=size-1;j++) {
            if (tab[j] < tab[index]) {
                 index=j;
            }
        }
        x = tab[i];
        tab[i] = tab[index];
        tab[index] = x;
        display_vector(tab, size);

        }
        return 0;
    }

int selection_sort_desc(int tab[], int size)
{
    if (size <= 0) { return 1; }
    int x, index;
    for (int i=0; i<=size-1; i++)
    {
        index = i;
        for(int j=i; j<=size-1; j++)
        {
            if (tab[j] > tab[index])
            {
                index=j;

            }
        }
        x = tab[i];
        tab[i] = tab[index];
        tab[index] = x;
        display_vector(tab,size);

    }
    return 0;
}
int selection_sort(int tab[], int size, enum direction dir){
    if (size<=0)
    {return 1;}

    if (dir!=1&&dir!=2)
    {
        return 1;
    }
    if (dir==1)
    {
        selection_sort_asc(tab, size);
    }
    if(dir==2)
    {
        selection_sort_desc(tab, size);
    }
    return 0;
}
