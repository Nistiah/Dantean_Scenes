#include "functions.h"
#include <stdio.h>

int all_even(int number)
{
    if(number<0)
    {
        number*=-1;
    }
    if(number<10)
    {
        if(number%2==0)
        {
            return 1;
        }else {
            return 0;
        }
    }
    if(number%2==0)
    {
        return all_even(number/10);
    }else {
        return 0;
    }
}
int all_odd(int number)
{
    if(number<0)
    {
        number*=-1;
    }
    if(number<10)
    {
        if(number%2==1)
        {
            return 1;
        }else {
            return 0;
        }
    }
    if(number%2==1)
    {
        return all_odd(number/10);
    }else {
        return 0;
    }
}
int get_next_number(const int *tab, int size, enum type t)
{

    if(tab==NULL)
    {
        return -1;
    }
    if(size<=0)
    {
        return -2;
    }
    if(t==0)
    {
        if(all_even(*tab)==1)
        {
            return *tab;
        }else
        {
            return -1;
        }
    }
    if(t==1)
    {
        if(all_odd(*tab)==1)
        {
            return *tab;
        }else
        {
            return -1;
        }
    }
    if(t==2)
    {
        if(all_even(*tab)==0&&all_odd(*tab)==0)
        {
            return *tab;
        }else
        {
            return -1;
        }
    }
    return *tab;

}
