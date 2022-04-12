#ifndef MAIN_C_VECTOR_UTILS_H
#define MAIN_C_VECTOR_UTILS_H
enum direction{ROTATE_RIGHT=1,ROTATE_LEFT};

int read_vector(int *vec, int size, int stop_value);
void display_vector(const int* tab, int size);
int shift(int *array, int array_size, int positions_to_shift, enum direction dir);

#endif //MAIN_C_VECTOR_UTILS_H
