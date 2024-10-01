#include<iostream>
#include<Windows.h>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	int i;
	int count;
	int znach;
	ifstream file_in;
	ofstream file_out;
	int C[100] = {};
	int A[100] = {};

	file_out.open("file.txt", ios_base::trunc);
	cout << "Введіть кількість членів масиву С\t";
	cin >> n;
	for (i = 0; i <= n - 1; i++)
	{
		cout << "Введіть " << i + 1 << "-ий елемент масиву С\t";
		cin >> znach;
		file_out << znach << endl;
	}
	file_out.close();

	file_in.open("file.txt");
	i = 0;
	while (!file_in.eof())
	{
		file_in >> C[i];
		i++;
	}
	file_in.close();
	cout << endl;

	for (i = 0; i <= n - 1; i++)
	{
		if (C[i] > 0)
			A[i] = C[i];
	}

	cout << endl;
	cout << "Елементи масиву С" << endl;
	for (i = 0; i <= n - 1; i++)
		cout << C[i] << " ";
	cout << endl;
	cout << "Елементи масиву A" << endl;
	for (i = 0; i <= n - 1; i++)
		cout << A[i] << " ";
	cout << endl;

	count = 0;
	for (i = 0; i <= n - 1; i++)
	{
		if ((A[i] % 2) == 1)
			count++;
	}

	cout << "Кількість непарних елементів у масиві А = " << count << endl;
	file_out.open("file.txt", ios_base::app);
	file_out << "Кількість непарних елементів у масиві А" << endl;
	file_out << count;
	file_out.close();

	return 0;
}