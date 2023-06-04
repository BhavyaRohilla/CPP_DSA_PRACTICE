#include <iostream>
using namespace std;

class Student {
    static int totalStudent; // total number of students present

    public:
    int rollNumber;
    int age;

    

    Student(){
        totalStudent++;
    }

    int getRollNumber(){
        return rollNumber;
    }

    static int getTotalStudent(){
        return totalStudent;
    }
};

int Student::totalStudent = 0;

int main() {
    Student s1,s2,s3,s4,s5;
    // cout<< s1.rollNumber << " "<<s1.age << endl;
    // s1.totalStudent = 20;
    // cout<<Student::totalStudent <<endl;
    cout<<Student::getTotalStudent() <<endl;
}