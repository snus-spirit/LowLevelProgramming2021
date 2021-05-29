#include "sub.h"
void sub (int *first, int *second) {
    if (*first > *second) {
        *first = *first - *second;
    } else {
        *second = *second - *first;
    }
}