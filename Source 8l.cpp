#include <iostream>
using namespace std;


void numbers_one() {
	//���� ������������
	int number;
	cout << "������� ����������� �����: ";
	cin >> number;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{//��������� ������������
		arr[i] = number % 10;
		number /= 10;
	}

	for (int i = 4; i >= 0; i--)
		cout << arr[i] << endl;
}

void number_two() {

	char bk;//���� �����
	cout << "������� �����: ";
	cin >> bk;

	bk = toupper(bk);
	cout << "������� �������: " << bk;//������� � ������� �������
	cout << endl;


}

double sr(int* arr, int sz) {//����� �������� ��������������� ���������
	double s = 0;
	for (int i = 0; i < sz; i++)
		s += arr[i];
	s /= sz;
	return s;
}

void sr_ar() {//������ ������� ����������

	int sz;
	cout << "������� ������ �������: ";
	cin >> sz;

	int* arr = new int[sz];
	for (int i = 0; i < sz; i++)
		cin >> arr[i];
	cout << "������� ��������������: " << sr(arr, sz);
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "Rus");

	numbers_one();//������ �������
	number_two();//������ �������
	sr_ar();//������ �������


	return 0;
}