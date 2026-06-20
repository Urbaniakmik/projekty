#include <iostream>


void clear_buf(void)
{
    while (getchar() != '\n');
}


int main() {
    int first = 0;
    int second = 0;
    char input;
    bool repeat = false;

    printf("to jest prosty kalkulator\n");
    printf("wybiez opreacje [+,-,*,/]\n");



    do {

        if (repeat == true){
            printf("wybiez opreacje [+,-,*,/]\n");

        }

        repeat = true;

        input = getchar();
        clear_buf();


        printf("podaj pierwsza liczba\n");
        scanf("%d",&first);

        if (first == 0){

            printf("koniec programu");
            return 0;

        }
        // printf("pierwsza liczba = %d \n", first);

        printf("podaj druga liczba\n");
        scanf("%d", &second);
        // printf("druga liczba = %d \n", second);


        if (input == '+'){
            printf("suma %d i %d wynosi %d\n", first, second, first + second);
        } else if (input == '-'){

            printf("roznica %d i %d wynosi %d\n", first, second, first - second);
        } else if (input == '*'){

            printf("iloczyn %d i %d wynosi %d\n", first, second, first * second);
        }else if (input == '/'){
            if (second != 0){
                printf("iloraz %d i %d wynosi %d z reszta %d\n", first, second, first / second, first % second);
            } else{
                printf("niedziel przez zero\n");
            }
        }

        // output = first + second;
        //printf("suma %d i %d wynosi %d\n", first, second, first + second);
        //printf("roznica %d i %d wynosi %d\n", first, second, first - second);
        //printf("iloczyn %d i %d wynosi %d\n", first, second, first * second);
        //if (second != 0){
        //     printf("iloraz %d i %d wynosi %d z reszta %d\n", first, second, first / second, first % second);
        // } else{
        //      printf("niedziel przez zero\n");
        //  }

    } while (first != 0);




    return 0;
}
