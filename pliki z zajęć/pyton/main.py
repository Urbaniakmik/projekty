

def printArray(numbers, size):
    i = 0
    for i in range(size):
        print("a" + str(numbers[i]))



def menu(void):
    print("1. Wpisz wartosci do tablicy\n")
    print("2. Wyswietl zawartosc tablicy\n")
    print("3. Okresl najmniejsza wartosc tablicy\n")
    print("4. Okresl najwieksza wartosc tablicy\n")
    print("5. Okresl wartosc srednia\n")
    print("0. Wyjscie\n")
    print("Wybierz opcje:\n")

def func_write(numbers, size):
    i = 1

    for i in range(size):
        printf("numbers[%d] = ", i)
        scanf_s("%d", numbers[i])


def func_min (numbers,size):
    print("aaaaaaaaa")
    i = 0
    min = numbers[0]
    for i in range(size):
        print("aaaaaaaaa")

        if (min > numbers[i]):
            print("bbbbbbbbbbb")

            min = numbers[i]
    print(min)
    return min

def finc_max (numbers,size):
    i = 0


    max = numbers[0]
    for i in range(size):

        if (max < numbers[i]):

            max = numbers[i]


    return max

def funk_aver (numbers,size):
    i = 0
    suma = 0
    for i in range(size):
        suma += numbers[i]
    wynik = suma / size
    print()
    print(wynik)
    return suma / size


SIZE = 10
numbers = [1, 2, 3, -4, 50, 6, 7, 8, 9, 10]
option = 0

print("PROSTA TABLICA\n\n")
menu(0)
printArray(numbers, 10)
func_min(numbers, 10)


    # do {
    #     menu();
    #     scanf("%d", &option);
    #
    #     switch (option) {
    #         case 0:
    #             break;
    #         case 1:
    #             funkcjawpisywanie(numbers, SIZE );
    #             break;
    #         case 2:
    #             printArray(numbers, SIZE);
    #             break;
    #         case 3:
    #             printf("Okreslanie najmniejszej wartosci\n\n");
    #             printf("min = %d\n", funkcjaminimum(numbers, SIZE));
    #             break;
    #         case 4:
    #             printf("Okreslanie najwiekszej wartosci\n\n");
    #             printf("max = %d\n",funkcjamaximum(numbers, SIZE));
    #             break;
    #         case 5:
    #             printf("Okreslanie wartosci sredniej\n\n");
    #             printf("srednia = %d\n", funkcjasrednia(numbers, SIZE));
    #             break;
    #         default:
    #             printf("Wybierz poprawna opcje...\n\n");
    #     }
    #
    # } while (option != 0);
    #
    #
    # printf("THE END!\n");

input()

