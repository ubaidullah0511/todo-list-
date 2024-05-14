#include<iostream>
#include<vector>
using namespace std;

class student {
protected:
    int admissionNo;
    string name;
    string address;
    int age;

public:
    void studentdata(int admission, string N, int AGE, string ADDRESS) {
        admissionNo = admission;
        name = N;
        address = ADDRESS;
        age = AGE;
    }
};

class Grade : public student
{
protected:
    int admissionNo;
    float gpa;

public:
    Grade(int admission, float gpaa) {
        admissionNo = admission;
        gpa = gpaa;
    }

    

    
};

class ugstudent : public Grade {
private:
    string department;

public:
    void degree(string DEGREE) {
        department = DEGREE;
    }

    void display() {
        cout << "**Undergraduate student**" << endl;
        cout << "Admission No : " << admissionNo << endl;
        cout << "Student Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Address : " << address << endl;
        cout << "Degree  : " << department << endl;
        cout << "GPA  : " << gpa << endl;
    }
};

int main() {
    ugstudent undergraduate;
    undergraduate.studentdata(1, "ubaid", 19, "atd");
    undergraduate.degree("AI");
    undergraduate.display();
    grade s1;
    s1.grade();
    }


