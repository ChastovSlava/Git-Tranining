#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void initArray(int* array, int len) {
    int i;
    time_t t;
    for (i = 0; i < len; i++)
    {
        array[i] = time(&t) * rand() % 10;
        if (array[i] < 0)
        {
            array[i] = array[i] * (-1);//Для чего это?
        }
        printf("From Init %d\n", array[i]);

    }
}

void outArray(int* out, int len) {
    int i;
    for (i = 0; i < len; i++) {
        printf("\nArray[%d] = %d", i, out[i]);
    }
}

int main() {
    int size = 5;
    int array[5];
    initArray(array, size);

    printf("first element = %d\n", *array);

    //array - это указатель на первый элемент массива
    outArray(array, size);

    return 0;
}