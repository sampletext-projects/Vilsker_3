#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "Выполнила студентка группы УТН-111 Кришпенц Александра\n";
	cout << "Программа вычисления количества молока\n";

	for (int K = 2; K <= 10; K++)
	{
		for (int k = 2; k <= 10; k++)
		{
			double result = K * 25 + k * 2.5;
			cout << "Коров: " << K << ", коз: " << k << ", молока: " << result << "\n";
		}
	}

	system("pause");

	return 0;
}
