//  Inheritance Example
//       oWrite a program that implements inheritance using a base class Person and derived
//       classes Student and Teacher. Demonstrate reusability through inheritance.
//       oObjective: Learn the conceptof inheritance

#include <iostream>
using namespace std;

class Person {
    public:
       string name;
       int age;

    void setPerson(string n, int a) 
	{
        name = n;
        age = a;
    }

    void displayPerson() 
	{
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class Student : public Person {
    public:
        string course;

    void setStudent(string n, int a, string c) 
	{
        setPerson(n, a);   
        course = c;
    }

    void displayStudent() 
	{
        displayPerson();   
        cout << "Course: " << course << endl;
    }
};

class Teacher : public Person {
    public:
        double salary;

    void setTeacher(string n, int a, double s) 
	{
        setPerson(n, a);   
        salary = s;
    }

    void displayTeacher() 
	{
        displayPerson();  
        cout << "Salary: " << salary << endl;
    }
};

int main() 
{
    Student s1;
    s1.setStudent("Riya", 20, "Computer Science");
    cout << "\nStudent Details:" << endl;
    s1.displayStudent();

    Teacher t1;
    t1.setTeacher("Mr. Sharma", 40, 50000);
    cout << "\nTeacher Details:" << endl;
    t1.displayTeacher();

    return 0;
}

