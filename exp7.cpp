#include <iostream>
using namespace std;

// Base class
class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudent()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class
class StudentExam : public Student
{
protected:
    int marks1, marks2, marks3;

public:
    void getMarks()
    {
        cout << "Enter marks of 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    void displayMarks()
    {
        cout << "Marks: " << marks1 << " "
             << marks2 << " " << marks3 << endl;
    }
};

// Derived class
class StudentResult : public StudentExam
{
    int total;
    float percentage;

public:
    void calculateResult()
    {
        total = marks1 + marks2 + marks3;
        percentage = total / 3.0;
    }

    void displayResult()
    {
        cout << "\n----- Student Result -----" << endl;
        displayStudent();