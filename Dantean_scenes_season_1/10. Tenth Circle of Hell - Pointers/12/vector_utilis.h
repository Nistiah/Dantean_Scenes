#ifndef MAIN_C_VECTOR_UTILS_H
#define MAIN_C_VECTOR_UTILS_H

int read_vector_float(float *vec, int size, float stop_value);
void display_vector(const int* tab, int size);

int create_histogram(const float *vec, int size, int *out, int out_size);

#endif //MAIN_C_VECTOR_UTILS_H
