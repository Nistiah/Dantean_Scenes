
#ifndef UNTITLED9_BIT_SET_H
#define UNTITLED9_BIT_SET_H

union bit_set{
    unsigned int x;
    struct{
        unsigned int jeden: 16;
        unsigned int dwa: 16;

    }tab1;
    struct{
        unsigned  char jeden: 8;
        unsigned  char dwa: 8;
        unsigned  char trzy: 8;
        unsigned  char cztery: 8;
    }tab2;
    struct
    {
        unsigned  char jeden: 1;
        unsigned  char dwa: 1;
        unsigned  char trzy: 1;
        unsigned  char cztery: 1;
        unsigned  char piec: 1;
        unsigned  char szesc: 1;
        unsigned  char siedem: 1;
        unsigned  char osiem: 1;
        unsigned  char jeden1: 1;
        unsigned  char dwa1: 1;
        unsigned  char trzy1: 1;
        unsigned  char cztery1: 1;
        unsigned  char piec1: 1;
        unsigned  char szesc1: 1;
        unsigned  char siedem1: 1;
        unsigned  char osiem1: 1;
        unsigned  char jeden2: 1;
        unsigned  char dwa2: 1;
        unsigned  char trzy2: 1;
        unsigned  char cztery2: 1;
        unsigned  char piec2: 1;
        unsigned  char szesc2: 1;
        unsigned  char siedem2: 1;
        unsigned  char osiem2: 1;
        unsigned  char jeden3: 1;
        unsigned  char dwa3: 1;
        unsigned  char trzy3: 1;
        unsigned  char cztery3: 1;
        unsigned  char piec3: 1;
        unsigned  char szesc3: 1;
        unsigned  char siedem3: 1;
        unsigned  char osiem3: 1;
    }tablica;

}uniaa;


#endif //UNTITLED9_BIT_SET_H
