#include<iostream>
using namespace std;
struct Student {
    int age;
    string firstname;
    string lastname;
    int standard;
};

int main() {
    Student student;

    cin >> student.age;
    cin >> student.firstname;
    cin >> student.lastname;
    cin >> student.standard;

    cout << student.age << " ";
    cout << student.firstname << " ";
    cout << student.lastname << " ";
    cout << student.standard << " ";

}