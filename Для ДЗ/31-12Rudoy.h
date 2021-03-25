
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Person
{
public:
	string a = "test.txt";
	int* data;
	int code;
	string lastname, firstname, surname, year, phone;
	char gender;

	Person()
	{
		firstname = "none1";
		lastname = "none2";
		surname = "none3";
		year = "00.00.0000";
		code = 0;
		phone = "0000000000";
		gender = 'n';
	}


	Person(string c_firstname, string c_lastname, string c_surname, string c_dateOfBirth, int c_codename, string c_phone, char c_gender)
	{
		firstname = c_firstname;
		lastname = c_lastname;
		surname = c_surname;
		year = c_dateOfBirth,
		code = c_codename,
		phone = c_phone;
		gender = c_gender;
	}
	Person(const Person& other) 
	{
		this->data = other.data;
	}

	~Person() {}

	int getCode()
	{
		return code;
	}
	string getLastName()
	{
		return lastname;
	}
	string getFirstName()
	{
		return firstname;
	}
	string getSurname()
	{
		return surname;
	}
	string getYear()
	{
		return year;
	}
	string GetPhone()
	{
		return phone;
	}
	char getGender()
	{
		return gender;
	}


	int setCode()
	{
		return code;
	}
	string setLastName()
	{
		return lastname;
	}
	string setFirstName()
	{
		return firstname;
	}
	string setSurname()
	{
		return surname;
	}
	string setYear()
	{
		return year;
	}
	string setPhone()
	{
		return phone;
	}
	char setGender()
	{
		return gender;
	}
	friend void printt();
	friend void read(Person& p);
	friend void clean(Person& p);
	friend void print2();
public:

};
ostream& operator<<(ostream& os, const Person& p)
{
	os << p.code << " ;" << p.lastname << " ;" << p.firstname << " ;" << p.surname << " ;" << p.year << " ;" << p.phone << " ;" << p.gender << " # \n";
	return os;
};
void print1()
{
	ifstream fin;
	fin.open("test.txt");
	if (!fin.is_open())
	{
		cout << "error";
	}
	else
	{
		char ch;
		while (fin.get(ch))
		{
			cout << ch;
		}

	}fin.close();
};
void print2()
{
	const char ret(';'); 
	ifstream fin;
	fin.open("test.txt");
	if (!fin.is_open())
	{
		cout << "error";
	}
	else
	{
		char ch;
		while (fin.get(ch))
		{
			cout << ch;
			if (ch == ret)
			{
				cout << endl;
			}
		}

	}fin.close();
};
void read(Person& p)
{
	ofstream fout;
	fout.open(p.a, ios::app);
	fout << p.code << " ;" << p.lastname << " ;" << p.firstname << " ;" << p.surname << " ;" << p.year << " ;" << p.phone << " ;" << p.gender << " # \n";
	fout.close();
};
void clean(Person& p)
{
	string m = " ";
	ofstream fout;
	fout.open(p.a, ios::trunc);

	fout.close();
};

class Student : public Person
{

public:
	int* data;
	int course;
	string speciality;
public:
	int getCourse()
	{
		return course;
	}

	string getSpeciality()
	{
		return speciality;
	}

	void setCourse(int course)
	{
		this->course = course;
	}


	void setSpeciality(string speciality)
	{
		this->speciality = speciality;
	}



	Student(){}
	Student(int valuekyrs, string valueprof) 
	{
		course = valuekyrs;
		speciality = valueprof;

	}
	Student(const Student& other)
	{
		this->data = other.data;
	}
	~Student() { cout << "\nDestruction finished!"; }
	friend void printt();
};
ostream& operator <<(ostream& os, const Student& s)
{
	os << s.course << " ;" << s.speciality << " ;" << " # \n";
	return os;
};