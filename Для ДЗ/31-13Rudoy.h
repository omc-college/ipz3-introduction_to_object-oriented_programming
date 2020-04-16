
#pragma once
#include <iostream>
#include <string>
#include <fstream>
#ifndef coolPERSON
#define coolPERSON

using namespace std;

class Person
{
public:
	int* data;
	string a = "PERSONfile.txt";
	int kod;
	string secondName;
	string name;
	string middleName;
	string dataR;
	string NUMEROCHEK;
	string POL;

	Person()
	{
		
	}
	Person(int valuekod, string valuesecondName, string valuename, string valuemiddleName, string  valuedataR, string valueNUMEROCHEK, string valuePOL)  //in
	{

		kod = valuekod;
		secondName = valuesecondName;
		name = valuename;
		middleName = valuemiddleName;
		dataR = valuedataR;
		NUMEROCHEK = valueNUMEROCHEK;
		POL = valuePOL;
	}
	Person(const Person& other)
	{
		this->data = other.data;

	}
	~Person()
	{
		
	}

	int Getkod()
	{
		return kod;
	}
	string GetsecondName()
	{
		return secondName;
	}
	string Getname()
	{
		return name;
	}
	string GetmiddleName()
	{
		return middleName;
	}
	string GetdataR()
	{
		return dataR;
	}
	string GetNUMEROCHEK()
	{
		return NUMEROCHEK;
	}
	string GetPOL()
	{
		return POL;
	}

	int Setkod()
	{
		return kod;
	}
	string SetsecondName()
	{
		return secondName;
	}
	string Setname() {
		return name;
	}
	string SetmiddleName() {
		return middleName;
	}
	string SetdataR() {
		return dataR;
	}
	string SetNUMEROCHEK() {
		return NUMEROCHEK;
	}
	string SetPOL() {
		return POL;
	}
	friend void PRINTUEM();
	friend void ZAPIS(Person& p);
public:

};
ostream& operator<<(ostream& os, const Person& p)
{
	os << p.kod << " ;" << p.secondName << " ;" << p.name << " ;" << p.middleName << " ;" << p.dataR << " ;" << p.NUMEROCHEK << " ;" << p.POL << " # \n";
	return os;
};
void PRINTUEM() 
{
	cout << "Ïåðñîíû:\n";
	string pF = "PERSONfile.txt";
	ifstream fin1;
	fin1.open(pF);
	if (!fin1.is_open())
	{
		cout << "\nÎØÈÁÊÀ ÎÒÊÐÛÒÈß ÔÀÉËÀ\n";
	}
	else
	{
		char ch1;
		while (fin1.get(ch1))
		{
			cout << ch1;
		}

	}
	fin1.close();

	cout << "Ñòóäåíòû:\n";
	string sF = "STUDENTfile.txt";
	ifstream fin;
	fin.open(sF);
	if (!fin.is_open())
	{
		cout << "\nÎØÈÁÊÀ ÎÒÊÐÛÒÈß ÔÀÉËÀ\n";
	}
	else
	{
		char ch;
		while (fin.get(ch))
		{
			cout << ch;
		}

	}
	fin.close();
};
void vivodOMG()
{
	const char tZ(';');

	string Pf = "PERSONfile.txt";
	ifstream fin2;

	fin2.open(Pf);
	if (!fin2.is_open())
	{
		cout << "\nÎØÈÁÊÀ ÎÒÊÐÛÒÈß ÔÀÉËÀ\n";
	}
	else
	{
		char z;
		while (fin2.get(z))
		{
			cout << z;
			if (z == tZ)
			{
				cout << endl;
			}
		}

	}fin2.close();
};
void ZAPIS(Person& p) 
{
	ofstream fout;
	fout.open(p.a, ios::app);
	fout << p.kod << " ;" << p.secondName << " ;" << p.name << " ;" << p.middleName << " ;" << p.dataR << " ;" << p.NUMEROCHEK << " ;" << p.POL << " # \n";
	fout.close();
};


class Student : public Person
{

public:
	int* data;
	string b = "STUDENTfile.txt";
	int nKURS;
	string kPZH;

	int Get_nKURS()
	{
		return nKURS;
	}

	string Get_kPZH()
	{
		return kPZH;
	}

	void Set_nKURS(int nKURS)
	{
		this->nKURS = nKURS;
	}


	void Set_kPZH(string kPZH)
	{
		this->kPZH = kPZH;
	}



	Student()
	{
		
	}
	Student(int valuenKURS, string valuekPZH)
	{

		nKURS = valuenKURS;
		kPZH = valuekPZH;

	}
	Student(const Student& other)
	{
		this->data = other.data;
		
	}
	~Student()
	{
		
	}
	friend void PRINTUEM(); 
	friend void ZAPISs(Student& p); 
};
void ZAPISs(Student& p) 
{
	ofstream fout;
	fout.open(p.b, ios::app);
	fout << p.kod << " ;" << p.secondName << " ;" << p.name << " ;" << p.middleName << " ;" << p.dataR << " ;" << p.NUMEROCHEK << " ;" << p.POL << " # \n";
	fout.close();
};
void clean(Person& p) 
{
	string m = " ";
	ofstream fout;
	fout.open(p.a, ios::trunc);

	fout.close();
};
void cleanS(Student& p) 
{
	string mS = " ";
	ofstream foutCS;
	foutCS.open(p.b, ios::trunc);

	foutCS.close();
};
void readS(Student& p) 
{
	ofstream fout;
	fout.open(p.b, ios::app);
	fout << p.kod << " ;" << p.secondName << " ;" << p.name << " ;" << p.middleName << " ;" << p.dataR << " ;" << p.NUMEROCHEK << " ;" << p.POL << " # \n";
	fout.close();
};
ostream& operator <<(ostream& os, const Student& s)
{
	os << s.nKURS << " ;" << s.kPZH << " ;" << " # \n";
	return os;
};

#endif coolPERSON
#pragma once
