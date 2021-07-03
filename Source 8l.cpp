#include <iostream>
using namespace std;


void numbers_one() {
	//ввод пятизначного
	int number;
	cout << "Введите пятезначное число: ";
	cin >> number;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{//переворот пятизначного
		arr[i] = number % 10;
		number /= 10;
	}

	for (int i = 4; i >= 0; i--)
		cout << arr[i] << endl;
}

void number_two() {

	char bk;//ввод буквы
	cout << "Введите букву: ";
	cin >> bk;

	bk = toupper(bk);
	cout << "Верхний регистр: " << bk;//перевод в верхний регистр
	cout << endl;


}

double sr(int* arr, int sz) {//поиск среднего арифметического перебором
	double s = 0;
	for (int i = 0; i < sz; i++)
		s += arr[i];
	s /= sz;
	return s;
}

void sr_ar() {//третье задание реализация

	int sz;
	cout << "Укажите размер массива: ";
	cin >> sz;

	int* arr = new int[sz];
	for (int i = 0; i < sz; i++)
		cin >> arr[i];
	cout << "Среднее арифметическое: " << sr(arr, sz);
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "Rus");

	numbers_one();//первое задание
	number_two();//второе задание
	sr_ar();//третье задание


	return 0;
}