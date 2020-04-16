#include <iostream>
#include "31-11-2Rudoy"
using namespace std;
int main()
{
    Student person;
    string firstname,
        lastname,
        surname,
        dateOfBirth,
        phone,
        speciality;
    int codename,
        course,
        code,
        stop = 1;
    char gender;

    cout << "For quit enter 0 on the beginning" << endl;
    while (stop) {
        cout << "Stop? "; cin >> stop;
        if (stop == 0) { continue; };

        cout << "First name: "; cin >> firstname;
        cout << "Last name: "; cin >> lastname;
        cout << "Surname: "; cin >> surname;
        cout << "Date of birth: "; cin >> dateOfBirth;
        cout << "Phone: "; cin >> phone;
        cout << "Gender: "; cin >> gender;
        cout << "Speciality: "; cin >> speciality;
        cout << "Course: "; cin >> course;
        cout << "Code: "; cin >> code;

        person.setfirstname(firstname);
        person.setlastname(lastname);
        person.setsurname(surname);
        person.setdateOfbirth(dateOfBirth);
        person.setphone(phone);
        person.setgender(gender);
        person.setcourse(course);
        person.setcode(code);
        person.setspeciality(speciality);
        person.add_file();
        person.read_file();
    }
}
