#include <iostream>
#include <string>
using namespace std;
class Parent
{
public:
    int m_public;
    Parent(int a = 1, int b = 2, int c = 3)
    {
        this->m_public = a; this->m_private = b;
        this->m_protected = c;
        cout << "parent's constructor\n";
    }
    ~Parent() { cout << "parent's destructor\n" << endl; };
    friend void Pprnt(Parent&);
    void print() {
        cout << m_public << "  " << m_protected << "  " << m_private << endl;
    }
private:
    int m_private;
protected:
    int m_protected;
};

class Child : protected Parent {
public:
    int pub;
    Child(int a, int b):Parent() {
        prot = a;
        priv = b;
        pub = m_public;
        cout <<"clild's constructor\n"; 
    }
    ~Child(){ cout << "clild's destructor\n"; }
    friend void Cprnt(Child&);
    void printC() {
        cout << pub << "  " << prot << "  " << priv << endl;
    }
protected:
    int prot;
private:
    int priv;
};