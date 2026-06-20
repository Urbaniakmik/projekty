#include <iostream>
#define SIZE 10



int main() {
    printf("Tablice\n");
    //int numbers[SIZE];
    int numbers[SIZE] = {1, 2, 3, 40, -5, 6, 7, 8, 9, 10};
    int max = numbers[0];
    int min = numbers[0];
    float sum = 0;
    for (int i = 0; i < SIZE; i++){

        if (numbers[i] > max){
            max = numbers[i];
        }
        if (numbers[i] < min){
            min = numbers[i];
        }
        sum = sum + numbers[i];

        printf("%d ", numbers[i]);
    }
    printf("\nmax = %d\n",max);
    printf("\nmin = %d\n",min);
    printf("\naverage = %.2f\n",sum / (float)SIZE );
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");



    return 0;
}