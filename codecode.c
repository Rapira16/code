#include "../geek.h"
#define ENG 26 // ASC II
int main(){
    // кодировка цезаря
    char arr[] = {'w', 'o', 'r', 'd'};//слово в массиве 
    for (int i = 0; i < 4; i++){
        if ((arr[i] + 3) > 'z'){
            arr[i] = arr[i] - 'z' + 'a' + 2;//если буква не попадает в алфавит
        } else {
            arr[i]=arr[i] + 3;// для всех других букв
        }
        printf("%c", arr[i]);
    }
    //расшифровка цезаря
    printf("\n");
    for (int i = 0; i < 4; i++){
        if ((arr[i] - 3) < 'a'){
            arr[i] = arr[i] + 'z' - 'a' - 2;//если буква не попадает в алфавит
        } else {
            arr[i]=arr[i] - 3;// для всех других букв
        }
        printf("%c", arr[i]);
    }
    return 0;
}