#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Person {
protected:
    string firstname, lastname, surname, dateOfBirth, phone, speciality;
    int codename, course;
    char gender;
public:
    Person() {
        firstname = "none1";
        lastname = "none2";
        surname = "none3";
        dateOfBirth = "00.00.0000";
        codename = 0;
        phone = "0000000000";
        gender = 'n';
    }
    Person(string c_firstname, string c_lastname, string c_surname, string c_dateOfBirth, int c_codename, string c_phone, char c_gender) {
        firstname = c_firstname; lastname = c_lastname; surname = c_surname; dateOfBirth = c_dateOfBirth, codename = c_codename, phone = c_phone; gender = c_gender;
    }
    Person(const Person& person) :
        firstname(person.firstname), lastname(person.lastname), surname(person.surname), dateOfBirth(person.dateOfBirth), codename(person.codename), phone(person.phone), gender(person.gender)
    {}
    ~Person() { cout << "\nDestruction finished!"; }
    void add_file()
    {
        ofstream F;
        F.open("test.txt", ios::app);
        F << codename << "; " << firstname << "; " << lastname << "; " << surname << "; " << dateOfBirth << "; " << phone << "; " << gender << "; " << speciality << "; "<< course << ".\n";
        F.close();
    }
    void read_file()
    {
        ifstream F2; F2.open("test.txt", ios::in);
        while (!F2.eof()) {
            string VIVOD;
            F2 >> VIVOD;
            cout << VIVOD << "\n";
        }
        F2.close();
    }

    int getcodename() {return codename;}
    string getfirstname() { return firstname;}
    string getlastname() {return lastname;}
    string getsurname() {return surname;}
    string getdateOfbirth() {return dateOfBirth;}
    string getphone() {return phone;}
    char getgender() { return gender; }

    void setcode(int c) { codename = c; }
    void setfirstname(string first_name) { firstname = first_name; }
    void setlastname(string last_name) { lastname = last_name; }
    void setsurname(string surnames) { surname = surnames; }
    void setdateOfbirth(string date_of_birth) { dateOfBirth = date_of_birth; }
    void setphone(string phones) { phone = phones; }
    void setgender(int genders) {gender = genders;}
};

class Student : public Person {
public:
    Student(int inp_c = 0, string inp_s = "none") {
        course = inp_c; speciality = inp_s;
    }
    ~Student() { cout << "\nDestruction 2 finished!"; }
    int getcourse() {return course;}
    string getspeciality() {return speciality;}

    void setcourse(int c) { course = c; }
    void setspeciality(string s) {speciality = s;}
};