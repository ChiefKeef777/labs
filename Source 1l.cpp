#include <iostream>
#include <string>

using namespace std;



void null_replace() // замена четных на нули
{

    int arr[10];
    cout << "Заполните 10 элементов массива: "; // ввод массива
    for (int i = 0; i < 10; i++)
        cin >> arr[i];


    cout << "Ваш массив: "; // вывод массива
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    cout << endl;

    for (int i = 0; i < 10; i++) //операция замены и вывод
    {
        if (arr[i] % 2 != 0)
            arr[i] = 0;
        else cout << arr[i];
    }
}


void symbol_test() // проверка символа в строке
{
    char letter;
   
    cout << "Введите символ: ";//ввод символа
    cin >> letter;
    bool status = (isdigit(letter) || isalpha(letter));//проверка на символ
    while (status)//определение ошибки и повторный ввод
    {
        cout << "Ошибка! Повторите ввод: ";
        cin >> letter;
        status = (isdigit(letter) || isalpha(letter));
    }
    
    string str;
    cout << "Введите строку для поиска: ";//ввод строки
    cin >> str;

    if (str.find(letter) != str.npos)//поиск символа в строке
        cout << "Найден символ в строке на " << str.find(letter) + 1 << " месте";
    else
        cout << "Символ в строке не обнаружен!" << endl;
}

void opredel()//определитель матрицы
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)//ввод массива
    {
        cout << "Введите " << i + 1 << " строку матрицы: ";
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
        
    }

    int opredel = arr[0][0] * arr[1][1] * arr[2][2] +//поиск определителя
        arr[0][1] * arr[1][2] * arr[2][0] + arr[0][2] * arr[1][0] * arr[2][1] -
        arr[0][2] * arr[1][1] * arr[2][0] - arr[0][1] * arr[1][0] * arr[2][2] -
        arr[0][0] * arr[1][2] * arr[2][1];

    cout << "Определитель матрицы: " << opredel;//вывод результата
}



int main()
{
    setlocale(LC_ALL, "rus");

    null_replace();//первое задание
    cout << endl;
    symbol_test();//второе задание  
    cout << endl;
    opredel();//третье задание

    return 0;
}