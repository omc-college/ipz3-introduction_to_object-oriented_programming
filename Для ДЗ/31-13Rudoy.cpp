
#include <iostream>
#include <string>
#include <fstream>
#include "Header.h"

using namespace std;
int i, n, n2, vv;


int main() {
	setlocale(LC_ALL, "ru");

	Person inform[10];
	Person UKAinform[10];
	Student informS[10];
	Student UKAinformS[10];
	int SOTP = 1;

	while (SOTP)
	{

		cout << "\n\tВыберите режим работы:\n";
		cout << "11 - Interactive Data Input  and File Recording\n";
		cout << "12 - Interactive Data Input  and File Addition\n";
		cout << "21 - View All Data\n";
		cout << "31 - Reading All Data Only\n";
		cout << "32 - Reading data from a file and forming instances of a class\n";
		cout << "41 - Previous functionality\n";
		cout << "0 - Exit\n\t!!!ВВОД ТОЛЬКО АНГЛИЙСКИМИ БУКВАМИ!!!\n\n";
		cout << " Enter Mode Selection: "; cin >> vv; cout << "\n\n";

		switch (vv)
		{
		case 11:
			cout << "Кто? Персона - 1, студент - 2: ";
			int ZZ; cin >> ZZ;
			if (ZZ == 1) {

				cout << " Введите количество человек = "; cin >> n; cout << endl;
				for (i = 0; i < n; i++)
				{
					clean(inform[i]);
				}

				for (i = 0; i < n; i++)
				{
					cout << "\nНомер(код): ";        cin >> inform[i].kod;
					cout << "Фамилия: ";    cin >> inform[i].secondName;
					cout << "Имя: ";        cin >> inform[i].name;
					cout << "Отчество: ";   cin >> inform[i].middleName;
					cout << "Год рождния: ";        cin >> inform[i].dataR;
					cout << "Телефон: ";        cin >> inform[i].NUMEROCHEK;
					cout << "Пол: ";      cin >> inform[i].POL;

					ZAPIS(inform[i]);
				}
				for (i = 0; i < 1; i++)
				{


					cout << endl; cout << endl; cout << endl;
				}
			}
			else if (ZZ == 2) {
				cout << " Введите количество студентов = "; cin >> n2; cout << endl;

				for (i = 0; i < n2; i++)
				{
					cleanS(informS[i]);
				}
				for (i = 0; i < n2; i++)
				{
					cout << "\nНомер(код): ";        cin >> informS[i].kod;
					cout << "Фамилия: ";    cin >> informS[i].secondName;
					cout << "Имя: ";        cin >> informS[i].name;
					cout << "Отчество: ";   cin >> informS[i].middleName;
					cout << "Год рождния: ";        cin >> informS[i].dataR;
					cout << "Телефон: ";        cin >> informS[i].NUMEROCHEK;
					cout << "Пол: ";      cin >> informS[i].POL;
					cout << "Курc: ";        cin >> informS[i].nKURS;
					cout << "Специальность: ";    cin >> informS[i].kPZH;


					ZAPISs(informS[i]);
				}

			}


			break;


		case 12:
			cout << "Куда? Персона - 1, студент - 2: ";
			int ZZ2; cin >> ZZ2;
			if (ZZ2 == 1)
			{
				int t;
				cout << " Сколько людей вы хотите дописать?: "; cin >> t; cout << endl;
				for (i = 0; i < t; i++) {
					cout << "\nНомер(код): ";        cin >> UKAinform[i].kod;
					cout << "Фамилия: ";    cin >> UKAinform[i].secondName;
					cout << "Имя: ";        cin >> UKAinform[i].name;
					cout << "Отчество: ";   cin >> UKAinform[i].middleName;
					cout << "Год рождния: ";        cin >> UKAinform[i].dataR;
					cout << "Телефон: ";        cin >> UKAinform[i].NUMEROCHEK;
					cout << "Пол: ";      cin >> UKAinform[i].POL;

					ZAPIS(UKAinform[i]);

				}

			}

			else {
				int AAA;
				cout << " Введите количество студентов: "; cin >> AAA; cout << endl;
				for (i = 0; i < AAA; i++)
				{
					cout << "\nНомер(код): ";        cin >> UKAinformS[i].kod;
					cout << "Фамилия: ";    cin >> UKAinformS[i].secondName;
					cout << "Имя: ";        cin >> UKAinformS[i].name;
					cout << "Отчество: ";   cin >> UKAinformS[i].middleName;
					cout << "Год рождния: ";        cin >> UKAinformS[i].dataR;
					cout << "Телефон: ";        cin >> UKAinformS[i].NUMEROCHEK;
					cout << "Пол: ";      cin >> UKAinformS[i].POL;
					cout << "Курc: ";        cin >> UKAinformS[i].nKURS;
					cout << "Специальность: ";    cin >> UKAinformS[i].kPZH;


					readS(UKAinformS[i]);
				}

			}

			break;
		case 21:
			cout << " Not designed" << endl;
			break;
		case 31:
			PRINTUEM();
			break;
		case 32:
			vivodOMG();
			break;
		case 41:
			cout << " Previous functionality\n";
			break;
		case 0:
			SOTP = 0;
			continue;
			break;
		default:
			cout << " НеПрАвИлЬнОе значение\n";
		}
		if (SOTP == 0) {
			continue;
		};
		system("pause");
		system("cls");
	}
	return 0;
}