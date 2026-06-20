#include <iostream>
#define  SIZE 10
//prd menu konsolowe
int findMax(int numbers[], int size){
    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("fucn1 \n");
    return max;
}

int findMin(int numbers[], int size){
    int min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("fucn2 \n");
    return min;
}

int calcSum(int numbers[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    printf("func3 \n");
    return sum;
}
int main() {
    printf("Tablice\n");
    int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < SIZE; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    //int max = numbers[0];
    // for (int i = 1; i < SIZE; i++) {
    //    if (numbers[i] > max) {
    //        max = numbers[i];
    //   }
    // }
    printf("Max number: %d\n", findMax(numbers, SIZE));
    // int min = numbers[0];
    // for (int i = 1; i < SIZE; i++) {
    //     if (numbers[i] < min) {
    //         min = numbers[i];
    //     }
    // }
    printf("Min number: %d\n", findMin(numbers,SIZE));
    //int sum = 0;
    //for(int i = 0; i< SIZE; i++) {
    //    sum += numbers[i];
    //}
    printf("Sum: %d\n", calcSum(numbers,SIZE));
    float average = (float) calcSum(numbers,SIZE)/ SIZE;
    printf("Average: %.2f\n", average);
}