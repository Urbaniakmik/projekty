
#include <iostream>
#define SIZE 10



int main() {
    printf("Tablice\n");
    //int numbers[SIZE];
    int numbers[SIZE] = {54, 3, 2, 40, -5, 6, 7, 8, 9, 10};
    int sorted[SIZE] = {1, 2, 3, 40, -5, 6, 7, 8, 9, 10};
    int sorted2[SIZE] = {1, 2, 3, 40, -5, 6, 7, 8, 9, 10};
    //int max = numbers[0];
    //int min = numbers[0];
    //int check1 = 0;
    //int check2 = 0;
    int sortage = 0;
    //float sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sorted[i] = numbers[i];
        printf("%d ", sorted[i]);
    }
    printf("\n");
    //check1 = numbers[0];
    //check1 = numbers[1];
    for (int i = 0; sortage <= SIZE;) {
        if (sorted[i] > sorted[i + 1] and i+1 != SIZE) {
            int check1 = sorted[i];
            int check2 = sorted[i + 1];

            sorted[i] = check2;
            sorted[i + 1] = check1;
            sortage = 0;
            i = 0;
            //printf("%d ", sorted[i]);
            //printf("%d ", sorted[i + 1]);
            printf("-\n");
            printf("+%d+ ",i);

        }
        if (sorted[i] <= sorted[i + 1]) {
            printf("-%d- ", sortage);
            sortage = sortage + 1;
            printf("%d ", sorted[i]);
            //printf("%d ", sorted[i+1]);
            printf("__ ");
            sorted2[i] = sorted[i];
            printf("+%d+ ",i);
            //printf("%d ", sortage);

        }
        i++;
    }




    printf("\n\n");
    for (int i = 0; i < SIZE; i++) {
       // sorted[i] = numbers[i];
        printf("%d ", sorted2[i]);
    }
    printf("\n %d ", sorted[0]);
    printf("%d ", sorted[1]);
    printf("%d ", sorted[2]);
    printf("%d ", sorted[3]);
   // printf("\nmax = %d\n",max);
   // printf("\nmin = %d\n",min);
   // printf("\naverage = %.2f\n",sum / (float)SIZE );
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");



    return 0;
}