#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) : name(n) {}
};

class Student : public Person {
protected:
    int rollNo;

public:
    Student(string n, int r)
        : Person(n), rollNo(r) {}
};

class GraduateStudent : public Student {
private:
    string specialization;

public:
    GraduateStudent(string n, int r, string s)
        : Student(n, r), specialization(s) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

int main() {
    GraduateStudent g("John", 101, "AI");
    g.display();
}
