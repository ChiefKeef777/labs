#include <iostream>
using namespace std;


double harmonic(double a, double b) {//���������� �������� ��������������
    double one = 1 / a;//�������� ����� � -1 �������
    double two = 1 / b;
    double result = 2 / (one + two);//������ ������
    return result;
}



void change_values(double* a, double* b, double* c) {
	if ((*a) < (*b) && (*a) < (*c)) {//�������� �����, ������ �������� ��� �������������
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
	//������ �������
	cout << "������� ��� ����� ��� ������� �������� ��������������: ";//���� �����
	double a1, b1;
	cin >> a1 >> b1;
	cout << "������� �������������: " << harmonic(a1, b1);//������ � ����� ����������
	cout << endl;


	//������ �������
	double a, b, c;
	cout << "������� ���������� ��� �����: ";//���� �����
	cin >> a >> b >> c;
	cout << endl;
	cout << "���� �����: " << a << " " << b << " " << c << endl;
	change_values(&a, &b, &c);//����� ����������
	cout << "���� ����� ����� ������: " << a << " " << b << " " << c << endl;



    return 0;
}