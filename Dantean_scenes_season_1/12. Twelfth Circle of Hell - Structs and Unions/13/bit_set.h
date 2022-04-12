#include <stdint.h>
#ifndef UNTITLED9_BIT_SET_H
#define UNTITLED9_BIT_SET_H

union bit_set{
    uint32_t wartosc;
    struct{
        unsigned char bit1: 1;
        unsigned char bit2: 1;
        unsigned char bit3: 1;
        unsigned char bit4: 1;
        unsigned char bit5: 1;
        unsigned char bit6: 1;
        unsigned char bit7: 1;
        unsigned char bit8: 1;
    }tab[4];
};

#endif //UNTITLED9_BIT_SET_H
