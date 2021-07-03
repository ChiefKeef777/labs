#include <iostream>
using namespace std;


double harmonic(double a, double b) {//нахождение среднего гармонического
    double one = 1 / a;//возводим числа в -1 степень
    double two = 1 / b;
    double result = 2 / (one + two);//делает расчет
    return result;
}



void change_values(double* a, double* b, double* c) {
	if ((*a) < (*b) && (*a) < (*c)) {//проверка чисел, замена значений при необходимости
		if ((*b) > (*c)) {
			swap(*b, *c);
		}
	}
	else if ((*b) < (*c) && (*b) < (*a)) {
		if ((*a) > (*c)) {
			swap(*a, *c);
		}
	}
	else if ((*c) < (*b) && (*c) < (*a)) {
		if ((*b) > (*c)) {
			swap(*b, *a);
		}
	}

	swap(*a, *c);
}


int main() {
    setlocale(LC_ALL, "RU");
	//первое задание
	cout << "Введите два числа для расчета среднего гармонического: ";//ввод чисел
	double a1, b1;
	cin >> a1 >> b1;
	cout << "Среднее гармоническое: " << harmonic(a1, b1);//расчет и вывод результата
	cout << endl;


	//второе задание
	double a, b, c;
	cout << "Введите поочередно три числа: ";//ввод чисел
	cin >> a >> b >> c;
	cout << endl;
	cout << "Ваши числа: " << a << " " << b << " " << c << endl;
	change_values(&a, &b, &c);//вывод результата
	cout << "Ваши числа после замены: " << a << " " << b << " " << c << endl;



    return 0;
}