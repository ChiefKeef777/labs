#include <iostream>
#include <string>

using namespace std;



void null_replace() // ������ ������ �� ����
{

    int arr[10];
    cout << "��������� 10 ��������� �������: "; // ���� �������
    for (int i = 0; i < 10; i++)
        cin >> arr[i];


    cout << "��� ������: "; // ����� �������
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    cout << endl;

    for (int i = 0; i < 10; i++) //�������� ������ � �����
    {
        if (arr[i] % 2 != 0)
            arr[i] = 0;
        else cout << arr[i];
    }
}


void symbol_test() // �������� ������� � ������
{
    char letter;
   
    cout << "������� ������: ";//���� �������
    cin >> letter;
    bool status = (isdigit(letter) || isalpha(letter));//�������� �� ������
    while (status)//����������� ������ � ��������� ����
    {
        cout << "������! ��������� ����: ";
        cin >> letter;
        status = (isdigit(letter) || isalpha(letter));
    }
    
    string str;
    cout << "������� ������ ��� ������: ";//���� ������
    cin >> str;

    if (str.find(letter) != str.npos)//����� ������� � ������
        cout << "������ ������ � ������ �� " << str.find(letter) + 1 << " �����";
    else
        cout << "������ � ������ �� ���������!" << endl;
}

void opredel()//������������ �������
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)//���� �������
    {
        cout << "������� " << i + 1 << " ������ �������: ";
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
        
    }

    int opredel = arr[0][0] * arr[1][1] * arr[2][2] +//����� ������������
        arr[0][1] * arr[1][2] * arr[2][0] + arr[0][2] * arr[1][0] * arr[2][1] -
        arr[0][2] * arr[1][1] * arr[2][0] - arr[0][1] * arr[1][0] * arr[2][2] -
        arr[0][0] * arr[1][2] * arr[2][1];

    cout << "������������ �������: " << opredel;//����� ����������
}



int main()
{
    setlocale(LC_ALL, "rus");

    null_replace();//������ �������
    cout << endl;
    symbol_test();//������ �������  
    cout << endl;
    opredel();//������ �������

    return 0;
}