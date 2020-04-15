//Студент Римарук Павло ІПЗ-32

#include <fstream>
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	string i_cod;//код
	string s_pr;//прізвище
	string s_name;//ім'я
	string s_pb;//побатькові
	string i_year;//рік народження
	string i_tel;//телефон
	string s_Stat;//стать персони
public:
	Person();//конструктор без параметрів
	~Person() //destrucktor
	{
		cout << "activation destrucktor Person" << endl;
		//delete this;
	}
	Person(string cod, string pr, string name, string pb, string year, string tel, string stat);//конструктор з параметрами
	Person(const Person & other);
	string GetCod();
	void NewCod(string cod);
	string GetPr();
	void NewPr(string pr);
	string GetName();
	void NewName(string name);
	string GetPb();
	void NewPb(string pb);
	string GetYear();
	void NewYear(string year);
	string GetTel();
	void NewTel(string tel);
	string GetStat();
	void NewStat(string stat);


	friend void Vivod(Person &);//функція  виведення
	void Vvod(void);//метод введення
	friend void ZapisF(Person &);// функція запису в файл
	friend void ChitanyaF(Person &);//функція читання з файлу
	void NewfilePerson(void);
	void SAF(string st);

};



string Person::GetCod()
{
	cout << i_cod << endl;
	return i_cod;
}
void Person::NewCod(string cod)
{
	i_cod = cod;
}
string Person::GetPr()
{
	cout << s_pr << endl;
	return s_pr;
}
void Person::NewPr(string pr)
{
	s_pr = pr;
}
string Person::GetName()
{
	cout << s_name << endl;
	return s_name;
}
void Person::NewName(string name)
{
	s_name = name;
}
string Person::GetPb()
{
	cout << s_pb << endl;
	return s_pb;
}
void Person::NewPb(string pb)
{
	s_pb = pb;
}
string Person::GetYear()
{
	cout << i_year << endl;
	return i_year;
}
void Person::NewYear(string year)
{
	i_year = year;
}
string Person::GetTel()
{
	cout << i_tel << endl;
	return i_tel;
}
void Person::NewTel(string tel)
{
	i_tel = tel;
}
string Person::GetStat()
{
	cout << s_Stat << endl;
	return s_Stat;
}
void Person::NewStat(string stat)
{
	s_Stat = stat;
}
Person::Person(const Person &other)
{
	cout << "activation copy construcktor Person" << endl;
	this->i_cod = other.i_cod;
	this->s_pr = other.s_pr;
	this->s_name = other.s_name;
	this->s_pb = other.s_pb;
	this->i_year = other.i_year;
	this->i_tel = other.i_tel;
	this->s_Stat = other.s_Stat;
}
Person::Person()
{//стандартні пареаметри
	cout << "activation standart construcktor Person" << endl;
	i_cod = "1";
	s_pr = "Paradigma";
	s_name = "Jack";
	s_pb = "Jabson";
	i_year = "1989";
	i_tel = "380564321789";
	s_Stat = "Man";
}

Person::Person(string cod, string pr, string name, string pb, string year, string tel, string stat)
{//присвоюєм параметри
	cout << "activation initialization construcktor Person" << endl;
	i_cod = cod;
	s_pr = pr;
	s_name = name;
	s_pb = pb;
	i_year = year;
	i_tel = tel;
	s_Stat = stat;
}

void Vivod(Person & object)
{
	cout << object.i_cod << endl << "Fio: " << object.s_pr << " " << object.s_name << " " << object.s_pb << endl << "gender: " << object.s_Stat << endl << "year of birth: " << object.i_year << endl << "phone number: " << object.i_tel << endl << endl;
}
void Person::Vvod(void)
{//вводим свої параметри
	cout << "Kod ";
	cin >> i_cod;
	cout << "Prizvische ";
	cin >> s_pr;
	cout << "Imya ";
	cin >> s_name;
	cout << "Pobatkovi ";
	cin >> s_pb;
	cout << "Stat ";
	cin >> s_Stat;
	cout << "Rik ";
	cin >> i_year;
	cout << "telephon ";
	cin >> i_tel;
	cout << endl << endl;
}
void ZapisF(Person & object)// функцыя запису в файл
{
	ofstream fout;
	fout.open("32(10-2)-Rymaruck-Person.txt", ios::app);
	fout << object.i_cod << ";" << object.s_pr << ";" << object.s_name << ";" << object.s_pb << ";" << object.s_Stat << ";" << object.i_year << ";" << object.i_tel << "#" << endl;
	fout.close();
	cout << "Reading in C++ for help" << endl;
}
void ChitanyaF(Person & object)
{
	cout << "V fayle... " << endl;
	string inptLine;
	ifstream finpt;
	finpt.open("32(10-2)-Rymaruck-Person.txt", ios::in);
	if (!finpt.is_open())
		cout << "Palundra fayl ukrali!!!" << "File not be opened!\n";
	else
	{
		while (!finpt.eof())
		{

			finpt >> inptLine;
			cout << inptLine << endl;
		}
		finpt.close();
	}
	system("pause");
}
void Person::NewfilePerson(void)
{
	cout << endl;
	string inptLine;
	ifstream finpt;
	int jtr = 1;
	string lol = "";
	finpt.open("32(10-2)-Rymaruck-Person.txt", ios::in);

	while (!finpt.eof())
	{
		finpt >> inptLine;
	}
	finpt.close();
	int size = inptLine.size();
	char *ch = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		ch[i] = inptLine[i];
		if (ch[i] = !"#")
		{
			if (ch[i] = !";")
			{
				lol = lol + ch[i];
			}
			else
			{
				switch (jtr)
				{
				case 1:
					i_cod = lol;
					jtr++;
					lol = "";
				case 2:
					s_pr = lol;
					jtr++;
					lol = "";
				case 3:
					s_name = lol;
					jtr++;
					lol = "";
				case 4:
					s_pb = lol;
					jtr++;
					lol = "";
				case 5:
					i_year = lol;
					jtr++;
					lol = "";
				case 6:
					i_tel = lol;
					jtr++;
					lol = "";
				case 7:
					s_Stat = lol;
					jtr++;
					lol = "";
				default:
					break;
				}
			}
		}
	}
}
void Person::SAF(string st) {
	ofstream fout;
	fout.open("Person.txt");
	fout << st << endl;
	fout.close();
}

class Student : protected Person
{
public:
	string GetKurs()
	{
		cout << "Kurs of student: " << kurs << endl;
		return kurs;
	}
	void NewKurs(string Kurs)
	{
		kurs = Kurs;
	}
	string GetSpec()
	{
		cout << "Specialization of student : " << spec << endl;
		return spec;
	}
	void NewSpec(string Spec)
	{
		spec = Spec;
	}
	string kurs;
	string spec;
	Student()
	{
		cout << "activation standart construcktor Student" << endl;
		kurs = "3";
		spec = "IPZ";
	}
	Student(string iK, string mSpec)
	{
		cout << "activation initialization construcktor Student" << endl;
		kurs = iK;
		spec = mSpec;
	}
	Student(const Student &other)
	{
		cout << "activation copy construcktor Student" << endl;
		this->kurs = other.kurs;
		this->spec = other.spec;
	}
	~Student()
	{
		cout << "activation destrucktor Student" << endl;
		//delete this ;
	}
	friend void Vivod(Student &);//функція  виведення
	void SVvod(void) //метод введення
	{
		cout << "Kurs of studen: ";
		cin >> kurs;
		cout << "Specialasation of studen: ";
		cin >> spec;
	}
protected:
private:
};
void Vivod(Student & object)
{
	cout << "Kurs " << object.kurs << endl << "Specialisation" << object.spec << endl << endl;
}

void fstring(string f)
{
	string inptLine;
	string raf;
	ifstream finpt;
	int y=0,i = 1,z=0;
	char symb = '#', Symb = ';';
	f = f + ".txt";
	finpt.open(f, ios::in);
	if (!finpt.is_open())
		cout << "File not be opened!\n";
	else
	{
		while (!finpt.eof())
		{
			finpt >> inptLine;
			raf = inptLine;
			
		}
		int j = size(raf);
		for (i = y; i < j; i++) {
			if (raf[i] == Symb) {
				for (z; z < i + 1; z++)
				{
					cout << raf[z];
				}
				cout << " ";
			}
			if (raf[i] == symb)
			{
				for (z; z < i + 1; z++)
				{
					cout << raf[z];
				}
				cout << endl;
			}
		}
		finpt.close();
	}	
	
	
}
void PF(void)
{
	cout << "Mode variant" << endl << "11 - Interactive Data Input  and File Recording" << endl;
	cout << "12 - Interactive Data Input  and File Addition" << endl;
	cout << "21 - View All Data" << endl;
	cout << "31 - Reading All Data Only" << endl;
	cout << "32 - Reading data from a file and forming instances of a class" << endl;
	cout << "41 - Previous functionality" << endl ;
	cout << "0 - Exit" << endl << endl;
}
void IDIafr(void)
{
	int n = 1;
	string ic;//код
	string sr;//прізвище
	string sn;//ім'я
	string sp;//побатькові
	string iy;//рік народження
	string it;//телефон
	string sS;//стать персони
	string f1Str;
	string nameF;
	cout << "Name fayl(.txt ne vvodit) :"; cin >> nameF;
	ofstream fout1;
	nameF = nameF + ".txt";
		fout1.open(nameF,ios::app);
		
			cout << "Kod ";
			cin >> ic;
			fout1 << ic << ";";
			cout << endl << "Prizvische ";
			cin >> sr;
			fout1 << sr << ";";
			cout << endl << "Imya ";
			cin >> sn;
			fout1 << sn << ";";
			cout << endl << "Pobatkovi ";
			cin >> sp;
			fout1 << sp << ";";
			cout << endl << "Stat ";
			cin >> sS;
			fout1 << sS << ";";
			cout << endl << "Rik ";
			cin >> iy;
			fout1 << iy << ";";
			cout << endl << "telephon ";
			cin >> it;
			fout1 << it << "#" << endl;
		fout1.close();
}
void IDIafa(void)
{
	string nameF;
	cout << "Name fayl(.txt ne vvodit) :"; cin >> nameF;
	ofstream fout1;
	nameF = nameF + ".txt";
	fout1.open(nameF, ios_base::app);
	int n = 1;
	string ic;//код
	string sr;//прізвище
	string sn;//ім'я
	string sp;//побатькові
	string iy;//рік народження
	string it;//телефон
	string sS;//стать персони
	string f1Str;
	
		cout << endl << "Kod ";
		cin >> ic;
		fout1 << ic << ";";
		cout << endl << "Prizvische ";
		cin >> sr;
		fout1 << sr << ";";
		cout << endl << "Imya ";
		cin >> sn;
		fout1 << sn << ";";
		cout << endl << "Pobatkovi ";
		cin >> sp;
		fout1 << sp << ";";
		cout << endl << "Stat ";
		cin >> sS;
		fout1 << sS << ";";
		cout << endl << "Rik ";
		cin >> iy;
		fout1 << iy << ";";
		cout << endl << "telephon ";
		cin >> it;
		fout1 << it << "#" << endl;
}
void Rado(string sfayl)
{
	string inptLine;
	ifstream finpt;
	int i = 1;
	sfayl = sfayl + ".txt";
	finpt.open(sfayl, ios::in);
	if (!finpt.is_open())
		cout << "File not be opened!\n";
	else
	{
		while (!finpt.eof())
		{
			finpt >> inptLine;
			cout << inptLine << endl;
		}
		finpt.close();
	}
	
	system("pause");
}

#pragma once
