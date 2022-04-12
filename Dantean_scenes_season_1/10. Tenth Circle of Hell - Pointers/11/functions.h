#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED
enum type {ALL_ODD, ALL_EVEN, MIX};

int all_even(int number);
int all_odd(int number);
int get_next_number(const int *tab, int size, enum type t);
#endif
