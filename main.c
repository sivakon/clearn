#include "helper.h"
#include <immintrin.h>

int print_vec(__m256i x);

int main()
{
    short x[16], y[16];
    for(int i = 0; i < 16; i++) x[i] = i + 1; // some initial values

    for(int i = 0; i < 16; i++) y[i] = i * i; // some initial values

    __m256i t0 = _mm256_loadu_si256((__m256i * ) x); // loading int to __m256
    __m256i t1 = _mm256_loadu_si256((__m256i * ) x); // loading int to __m256

    __m256i result = _mm256_add_epi16(t0, t1);

    print_vec(result);
    // helper();
    // int i = addition(1,2);
    // printf("%d", i);
    return 0;
}

int print_vec(__m256i x) {
  short int v[16];
  _mm256_storeu_si256((__m256i * ) v, x);
  printf("%4hi %4hi %4hi %4hi | %4hi %4hi %4hi %4hi | %4hi %4hi %4hi %4hi  | %4hi %4hi %4hi %4hi \n", v[15], v[14], v[13], v[12], v[11], v[10], v[9], v[8], v[7], v[6], v[5], v[4], v[3], v[2], v[1], v[0]);
  return 0;
}