#include "IPZ-31_12Rudoy.h"
#include <iostream>
using namespace std;
int i, n, num = 1;

int main(){
	system("color D");
	Person inform[10];
	Person i2[10];
	Student two;
	while (num != 0) {
		cout << "\nChoose Mode Selection" << endl;
		cout << "11 - Interactive Data Input  and File Recording" << endl;
		cout << "12 - Interactive Data Input  and File Addition" << endl;
		cout << "21 - View All Data" << endl;
		cout << "31 - Reading All Data Only" << endl;
		cout << "32 - Reading data from a file and forming instances of a class" << endl;
		cout << "41 - Previous functionality" << endl;
		cout << "0 - Exit" << endl; cout << endl;
		cout << " Enter Mode Selection - "; cin >> num; cout << endl; cout << endl;
		switch (num) {
		case 11:
			cout << "Choose how many people= "; cin >> n;
			cout << endl;
			for (i = 0; i < n; i++) {
				cout << "Code= "; cin >> inform[i].code;
				cout << "Lastname= "; cin >> inform[i].lastname;
				cout << "Firstname= "; cin >> inform[i].firstname;
				cout << "Surname= "; cin >> inform[i].surname;
				cout << "Year= "; cin >> inform[i].year;
				cout << "Phone= "; cin >> inform[i].phone;
				cout << "Gender= "; cin >> inform[i].gender;
				read(inform[i]);
			}
			cout << endl;
			break;
		case 12:
			int p;
			cout << "How many people you want to write= "; cin >> p; cout << endl;
			for (i = 0; i < p; i++) {
				cout << "Code= "; cin >> i2[i].code;
				cout << "Lastname= "; cin >> i2[i].lastname;
				cout << "Firstname= "; cin >> i2[i].firstname;
				cout << "Surname= "; cin >> i2[i].surname;
				cout << "Year= "; cin >> i2[i].year;
				cout << "Phone= "; cin >> i2[i].phone;
				cout << "Gender= "; cin >> i2[i].gender;
				read(i2[i]);
			}
			for (i = 0; i < p; i++) {
				print1();
				clean(i2[i]);
			}
			break;
		case 21:
			cout << " Not designed." << endl;
			break;
		case 31:
			print1();
			break;
		case 32:
			print2();
			break;
		case 41:
			two.setCourse(8);
			two.setSpeciality("programmer");
			break;
		case 0:
			return 0;
			break;
		default:
			cout << "Unknown number!";
		}
	}
}