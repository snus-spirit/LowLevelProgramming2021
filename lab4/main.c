#include <stdio.h>
#include "NOD.h"


int main() {
    int arr[6] = {108, 171, 45, 27, 792, 153}; //{133, 266, 152, 114, 228, 38}; //
    NOD(arr, sizeof(arr)/sizeof(int));
    printf("NOD = %d\n", *arr);
    return 0;
}