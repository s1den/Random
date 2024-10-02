#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));

	int random_diap[10];
	int users_diap[10];


	for (int i = 0; i < 10; ++i) {
		random_diap[i] = rand() % 11;
	}

	cout << "Введите 10 чисел от 0 до 10:\n";

	for (int i = 0; i < 10; ++i) {
		int enter;
		do {
			cout << "Число " << i + 1 << ": ";
			cin >> enter;
			if (enter < 0 || enter > 10) {
				cout << "Неверный ввод. Введите число от 0 до 10.\n";
			}
		} while (enter < 0 || enter > 10);
		users_diap[i] = enter;
	}

	cout << "\nРезультаты:\n";
	for (int i = 0; i < 10; ++i) {
		cout << "Ячейка " << i + 1 << ": ";
		if (random_diap[i] == users_diap[i]) {
			cout << "Попадание! (" << random_diap[i] << ")\n";
		}
		else {
			cout << "Промах. (" << random_diap[i] << ")\n";
		}
	}

	return 0;
}