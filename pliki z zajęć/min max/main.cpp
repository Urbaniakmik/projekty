#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int Max = 10;
    int Min = 0;
    int MaxGen;
    int MinGen;
    int average;
    int total;
    int size;
    int * RandNum;
    int i = 0;


    printf("\nPodaj maksymalna wartosc ");
    scanf(" %d", &Max);
    printf("\nPodaj minimalna wartosc ");
    scanf(" %d", &Min);
    printf("\nPodaj ilosc chcianych liczb ");
    scanf(" %d", &size);

    if (Min>Max) {
        printf("zle");
        exit(1);
    }

    MinGen = Max;
    MaxGen = Min;



    RandNum = (int *) malloc(size * sizeof(int));

    if (!RandNum)
    {
        printf("Alokoawnie tablicy nieudane!\n");
        exit(1);
    }

    for (i = 0; i < size; i++)
    {
        RandNum[i] = rand() % (Max - Min + 1) + Min;
        printf("%i ",RandNum[i]);
    }

    for (i = 0; i < size; i++)
    {
        total += RandNum[i];
        if (RandNum[i] > MaxGen)
        {
            MaxGen = RandNum[i];
        }
        if (RandNum[i] < MinGen)
        {
            MinGen = RandNum[i];
        }
    }

    printf("Najwieksza liczba: %d.\n", MaxGen);
    printf("Najmniejsza liczba: %d.\n", MinGen);


    while (true){
        MinGen = Max;
        MaxGen = Min;
        printf("ile liczb tym razem? [zero aby wyjsc] ");
        scanf(" %d", &size);
        if (size == 0) {
            break;
        }
        realloc(RandNum,size);
        if (!RandNum)
        {
            printf("Alokoawnie tablicy nieudane!\n");
            exit(1);
        }
        for (i = 0; i < size; i++)
        {
            RandNum[i] = rand() % (Max - Min + 1) + Min;
            printf("%i ",RandNum[i]);
        }
        printf("\n");

        for (i = 0; i < size; i++)
        {
            total += RandNum[i];
            if (RandNum[i] > MaxGen)
            {
                MaxGen = RandNum[i];
            }
            if (RandNum[i] < MinGen)
            {
                MinGen = RandNum[i];
            }
        }
        printf("Najwieksza liczba: %d.\n", MaxGen);
        printf("Najmniejsza liczba: %d.\n", MinGen);
    }


    free(RandNum);
    return 0;
}
