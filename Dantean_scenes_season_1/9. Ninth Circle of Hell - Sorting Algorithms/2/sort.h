#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

enum direction {ASCENDING=1, DESCENDING=2};

int bubble_sort_asc(int tab[], int size);
int bubble_sort_desc(int tab[], int size);
int bubble_sort(int tab[], int size, enum direction dir);

#endif
