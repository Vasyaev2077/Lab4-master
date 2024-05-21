#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char *str1, *str2;
    str1 = (char*) calloc(10, 100);
    str2 = (char*) calloc(10, 100);
    int dlina1(char*);
    int dlina2(char*);
    int dlina3(char*);
    char* kopir(char*, char*);
    int sravn(char*, char*);
    char* konkat(char*, char*);

    cout << "длина str1="<<dlina1(str1)<<",str2=";
    cout << dlina1(str2)<<endl;
    cout << "длина str1="<<dlina2(str1)<<",str2=";
    cout << dlina1(str2)<<endl;
    cout << "длина str1="<<dlina3(str1)<<",str2=";
    cout << dlina1(str2)<<endl;
    cout << "результат копирования: str1= " << str1;
    cout << ", str2 =" << str2 << endl;
    cout << "результат сравнения:str1 = " << str1;
    cout << " , str2=" << str2 << endl;
    cout << "результат сцепления:str1= " << str1;
    cout << ", str2=" << str2 << endl;

    free(str1);
    free(str2);
    return 0;
}

int dlina1(char* ch) {
    string str = ch;
    return str.size();
}
int dlina2(char* ch) {
    string str = ch;
    return str.length();
}
int dlina3(char* ch) {
    return strlen(ch);
}
char* kopir(char* ch1, char* ch2) {
    char* tmp = ch1;
    while (*ch2) {
        *ch1++ = *ch2++;
    }
    *ch1 = '\0';  // Добавляем завершающий нулевой символ
    return tmp;
}
int sravn(char* ch1, char* ch2) {
    while (*ch1 && (*ch1 == *ch2)) {
        ch1++;
        ch2++;
    }
    return *ch1 - *ch2;
}
char* konkat(char* ch1, const char* ch2) {
    char* tmp = ch1; // Сохраняем начальный адрес ch1

    // Находим конец строки ch1
    while (*ch1 != '\0') {
        ch1++;
    }

    // Копируем строку ch2 в конец ch1
    while (*ch2 != '\0') {
        *ch1++ = *ch2++;
    }

    // Добавляем завершающий нулевой символ
    *ch1 = '\0';

    return tmp; // Возвращаем начальный адрес ch1
}