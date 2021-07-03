#include <iostream>
#include <cmath>


using namespace std;


void quad_eq() { // ������� ����������� ���������


    int a, b, c;
    cout << "������� �����������: ";//���� ����-�
    cin >> a >> b >> c;

    int D = 0;
    D =  b*b - 4*a*c;//����������� �������������

    if (D > 0) {//������� ��������� ������
        int x1 = (-b + sqrt(D))/2*a;
        int x2 = (-b - sqrt(D))/2*a;
        cout << "X1: " << x1 << endl;
        cout << "X2: " << x2 << endl;
    }
    else if (D == 0) {
        int x  = -(b / (2 * a));
        cout << "������������ ������ X: " << x << endl;
    }
    else {
        cout << "������������ ������ ���" << endl;
    }
}


void range() {//��������� ����� � ���������
  
    int a, b;
    cout << "������� �������� ��� �����: ";//���� ���������
    cin >> a >> b;

    int r = a + rand() % (b - a + 1);
    cout << "��������� ����� � �������� ���������: " << r << endl;//��������� � ����� ����������
}


void sort() {//���������� ���������

    int arr[10];

    cout << "��������� ������: ";

    for (int i = 0; i < 10; i++) {//���������� �������
        cout << "������� " << i + 1 << " ������� �������: ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "��� ������: ";//����� �������
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    int t;
    for (int i = 0; i < 9; i++) {//���������� �������
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    cout << "��������������� ������: ";//����� ������� ����� ���������� ���������
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    quad_eq();//������ �������
    range();//������ �������
    sort();//������ �������

    return 0;
}