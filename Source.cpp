#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int max = 0; 							 //  ���������� �������
	int n;									 //������ �������
	cout << "������� ������ �������: ";
	cin >> n;
	
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 50;                		 //���������� ������� ���������� ������� � ����� ������� �� �����
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i =i+2) {
		if (max < arr[i]) {                        //���������� ����������� �������� � ������ ��������
			max = arr[i];
		}
	}
	cout << "���������� ������� � ������ �������� = " << max;                //����� ����������� �������� ������� c ������ �������� 
	cout << endl;
	system ("pause");
	return 0;
}