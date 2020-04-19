#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "Выполнила студентка группы УТН-111 Кришпенц Александра\n";
	cout << "Программа вычисления количества молока\n";

	int K, k;
	cout << "Сколько коров? ";
	cin >> K;
	cout << "Сколько коз? ";
	cin >> k;

	if (K < 2 || K > 10)
	{
		cout << "Количество коров неправильное\n";
	}
	else if (K < 2 || K > 10)
	{
		cout << "Количество коз неправильное\n";
	}
	else
	{
		double result = K * 25 + k * 2.5;
		cout << "Суммарное количество молока: " << result << "\n";
	}

	system("pause");

	return 0;
}
