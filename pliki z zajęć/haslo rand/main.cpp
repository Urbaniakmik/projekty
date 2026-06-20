#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_LENGTH 100


char ranc (const char* set) {
    int length = strlen(set);
    int ind = rand() % length;
    return set[ind];
}

int main() {
    int cap, low, num, spec;

    char* capset = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* lowset = "abcdefghijklmnopqrstuvwxyz";
    char* numset = "0123456789";
    char* specset = "!@#$%^&*()_+-=[]{}|;:,.<>?";



    printf("=== Generator hasel ===\n\n");

    printf("Podaj ilosc duzych liter: \n");
    scanf("%d", &cap);

    printf("Podaj ilosc malych liter: \n");
    scanf("%d", &low);

    printf("Podaj ilosc cyfr: \n");
    scanf("%d", &num);

    printf("Podaj ilosc znakow specjalnych: \n");
    scanf("%d", &spec);



    int length = cap + low + num + spec ;


    char password[MAX_LENGTH];
    int poz = 0;


    for (int i = 0; i < cap; i++) {
         password[poz++] = ranc(capset);
    }


    for (int i = 0; i < low; i++) {
         password[poz++] = ranc(lowset);
    }


    for (int i = 0; i < num; i++) {
         password[poz++] = ranc(numset);
    }


    for (int i = 0; i < spec; i++) {
         password[poz++] = ranc(specset);
    }



    for (int i = length - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char temp =  password[i];
         password[i] =  password[j];
         password[j] = temp;
    }


     password[length] = '\0';


    printf("\n=== Wygenerowane haslo ===\n");
    printf("%s\n",  password);
    printf("\nDlugosc hasla: %d znakow\n", length);

    return 0;
}