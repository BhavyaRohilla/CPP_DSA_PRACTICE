#include <iostream>
using namespace std;

class Student {
    public:

    int age;
    const int rollNumber;
    int &x; // age reference variable

    Student(int r, int age) : rollNumber(r), age(age), x(this -> age) {}
};

int main(){
  Student s1(101, 200);  
  cout << s1.age << endl;
  cout << s1.rollNumber << endl;
  cout << s1.x << endl;
}