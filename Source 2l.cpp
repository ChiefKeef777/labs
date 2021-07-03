#include <iostream>
#include <cmath>


using namespace std;


void quad_eq() { // решение квадратного уравнения


    int a, b, c;
    cout << "Введите коэфициенты: ";//ввод коэф-в
    cin >> a >> b >> c;

    int D = 0;
    D =  b*b - 4*a*c;//определение дискриминанта

    if (D > 0) {//условия получения корней
        int x1 = (-b + sqrt(D))/2*a;
        int x2 = (-b - sqrt(D))/2*a;
        cout << "X1: " << x1 << endl;
        cout << "X2: " << x2 << endl;
    }
    else if (D == 0) {
        int x  = -(b / (2 * a));
        cout << "Единственный корень X: " << x << endl;
    }
    else {
        cout << "Вещественных корней нет" << endl;
    }
}


void range() {//случайное число в диапазоне
  
    int a, b;
    cout << "Введите диапазон два числа: ";//ввод диапазона
    cin >> a >> b;

    int r = a + rand() % (b - a + 1);
    cout << "Случайное число в заданном диапазоне: " << r << endl;//получение и вывод результата
}


void sort() {//сортировка пузырьком

    int arr[10];

    cout << "Заполните массив: ";

    for (int i = 0; i < 10; i++) {//заполнение массива
        cout << "Введите " << i + 1 << " элемент массива: ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "Ваш массив: ";//вывод массива
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    int t;
    for (int i = 0; i < 9; i++) {//сортировка массива
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    cout << "Отсортированный массив: ";//вывод массива после сортировки пузырьком
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    quad_eq();//первое задание
    range();//второе задание
    sort();//третье задание

    return 0;
}