#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int max = 0; 							 //  наибольший элемент
	int n;									 //размер массива
	cout << "Введите размер массива: ";
	cin >> n;
	
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 50;                		 //заполнение массива случайными числами и вывод массива на экран
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i =i+2) {
		if (max < arr[i]) {                        //нахождение наибольшего элемента с чётным индексом
			max = arr[i];
		}
	}
	cout << "Наибольший элемент с чётным индексом = " << max;                //вывод наибольшего элемента массива c четным индексом 
	cout << endl;
	system ("pause");
	return 0;
}