#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    int age;
    string firstname;
    string lastname;
    int standard;

public:
    void set_age(int a) {
        age = a;
    }
    void set_firstname(string fn) {
        firstname = fn;
    }
    void set_lastname(string ln) {
        lastname = ln;
    }
    void set_standard(int s) {
        standard = s;
    }

    int get_age() {
        return age;
    }
    string get_firstname() {
        return firstname;
    }
    string get_lastname() {
        return lastname;
    }
    int get_standard() {
        return standard;
    }

    string to_string() {
        return std::to_string(age) + "," + firstname + ","
            + lastname + "," + std::to_string(standard);
    }
};

int main() {
    Student student;
    int age, standard;
    string firstname, lastname;

    cin >> age >> firstname >> lastname >> standard;

    student.set_age(age);
    student.set_firstname(firstname);
    student.set_lastname(lastname);
    student.set_standard(standard);

    cout << student.get_age() << endl;
    cout << student.get_lastname() << ", " << student.get_firstname() << endl;
    cout << student.get_standard() << endl;
    cout << endl;
    cout << student.to_string() << endl;

    return 0;
}