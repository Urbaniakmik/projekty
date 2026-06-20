#include <iostream>


void HItoLO(char *text){
    while (*text){
        if ('A' <= *text && *text <= 'Z' ){
            *text += ('a' -'A');
        }
        *text++;
    }
};

void LOtoHI(char *text){
    while (*text){
        if ('a' <= *text && *text <= 'z' ){
            *text += ('A' -'a');
        }
        *text++;
    }
}

int sizer(char *text){
    int size;
    while(*text){
        size++;
        text++;

    }
    return size;
}

void clear(){
    int i = 0;
    while(i != 40){
        printf("\n");
        i++;
    }

}
void styff(char *text){
    while(*text){
        if(*text == '\n'){
            *text = '\0';
            printf("AAAAAAAAA");
        }
        *text++;
        printf("BBBBBBBBB");
    }
}

int main() {
    char text2[80];
    char text[] = "Ala ma kota";
    printf("%s \n", text);
    printf("%d \n", sizer(text));
    HItoLO(text);
    printf("%s \n", text);
    LOtoHI(text);
    printf("%s \n", text);


    while (true){
    printf("podaj tekst \n");

    if(text2[0] == '\0'){
        clear();
        return 0;
    }
    fgets(text2, 80, stdin);
    styff(text2);
    printf("%s \n", text2);
    printf("%d \n", sizer(text2));
    HItoLO(text2);
    printf("%s \n", text2);
    LOtoHI(text2);
    printf("%s \n", text2);

    }




}
