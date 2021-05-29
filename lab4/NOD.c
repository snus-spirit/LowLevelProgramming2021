#include "NOD.h"
#include "sub.h"

void NOD(int *arr, int size) {
    int second;
    int counter = 1;
    while (counter < size) {
        second = arr[counter];// Типа в СИ arr[counter] = *arr + counter?
        while (second != *arr) {
//            if (*arr > second) {
//                *arr = *arr - second;
//            } else {
//                second = second - *arr;
//            }
            sub(arr, &second);
        }
        counter++;
    }
}
