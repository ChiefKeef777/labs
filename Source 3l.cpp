#include <iostream>
#include <string>
using namespace std;



void neg_numbers() { //удаление отрицательных чисел из массива
    
    int N;
    cout << "Введите размер массива: ";//ввод массива
    cin >> N;
    int* arr = new int[N];      

    cout << "Заполните массив: " << endl;//заполнение массива
    for (int i = 0; i < N; i++) {
        cout << "Введите " << i + 1 << " элемент массива: ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Ваш массив: " << endl;//вывод массива
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Массив без отрицательных чисел: " << endl;

    for (int i = 0; i < N; i++) {//вывод массива без отрицательных чисел
        if (arr[i] >= 0)
            cout << arr[i] << " ";
    }
}


void find_vow() {//поиск гласных в строке

    string str;
    cout << "Введите строку: ";//ввод строки
    cin >> str;
    
   
    string vow  = "AEIOUaeiou";// список гласных          

    cout << "Гласные в строке: ";//вывод только гласных из строки
    for (int i = 0; i < str.length(); i++) {
        if (vow.find(str[i]) != vow.npos) {
            cout << str[i] << " ";
        }
    }
}


int main() {
    setlocale(LC_ALL, "RU");

    neg_numbers();//первое задание
    cout << endl;
    find_vow();//второе задание
    cout << endl;
}