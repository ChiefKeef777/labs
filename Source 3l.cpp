#include <iostream>
#include <string>
using namespace std;



void neg_numbers() { //�������� ������������� ����� �� �������
    
    int N;
    cout << "������� ������ �������: ";//���� �������
    cin >> N;
    int* arr = new int[N];      

    cout << "��������� ������: " << endl;//���������� �������
    for (int i = 0; i < N; i++) {
        cout << "������� " << i + 1 << " ������� �������: ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "��� ������: " << endl;//����� �������
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "������ ��� ������������� �����: " << endl;

    for (int i = 0; i < N; i++) {//����� ������� ��� ������������� �����
        if (arr[i] >= 0)
            cout << arr[i] << " ";
    }
}


void find_vow() {//����� ������� � ������

    string str;
    cout << "������� ������: ";//���� ������
    cin >> str;
    
   
    string vow  = "AEIOUaeiou";// ������ �������          

    cout << "������� � ������: ";//����� ������ ������� �� ������
    for (int i = 0; i < str.length(); i++) {
        if (vow.find(str[i]) != vow.npos) {
            cout << str[i] << " ";
        }
    }
}


int main() {
    setlocale(LC_ALL, "RU");

    neg_numbers();//������ �������
    cout << endl;
    find_vow();//������ �������
    cout << endl;
}