#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int id;
    string name;
    string department;
    float cgpa;

public:
// Default Constructor //
    Student() {
        id = 0;
        name = "Not Assigned";
        department = "Not Assigned";
        cgpa = 0.0;
        cout << "Default Constructor Called" << endl;
        cout<<endl;
    }

    // Parameterized Constructor //
    Student(int i, string n, string dept, float cg) {
        id = i;
        name = n;
        department = dept;
        cgpa = cg;
        cout << "Parameterized Constructor Called" << endl;
        cout<<endl;
    }

    // Copy Constructor //
    Student(const Student &s) {
        id = s.id;
        name = s.name;
        department = s.department;
        cgpa = s.cgpa;
        cout << "Copy Constructor Called" << endl;
        cout<<endl;
    }

    // Member function to display student details //
    void display() {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "-------------------------------" << endl;
    }
};

int main() {
    // Object using Default Constructor
    Student s1; 
    s1.display(); 

    // Object using Parameterized Constructor
    Student s2(4545, "Josh Dey", "CSE", 3.88);
    s2.display();
    
    // Object using Copy Constructor
    Student s3(s2);
    s3.display();

    return 0;
}
