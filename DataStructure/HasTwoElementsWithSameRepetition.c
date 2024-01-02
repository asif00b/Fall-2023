
#include <stdio.h>
#include <stdbool.h>

bool hasTwoElementsWithSameRepetition(int arr[], int size) {
    int countArray[100]={0};
    for (int i=0;i<size;i++) {
        countArray[arr[i]]++;
    }
    int repetitions[100] = {0};
    int maxRepetition = 0;
    for (int i=0;i<100;i++) {
        if (countArray[i] > 1) {
            repetitions[countArray[i]]++;
            maxRepetition=(countArray[i]>maxRepetition)?countArray[i]:maxRepetition;
        }
    }
    for (int i=0;i<100;i++) {
        if (repetitions[i]>=2) {
            return true;
        }
    }
    return false;
}
