#ifndef STUDENTS_HPP
#define STUDENTS_HPP

//libraries
#include <iostream>
#include <string>
#include <vector>
// #include "BTree.hpp"

using namespace std;

class Students{

    //attributes
    private:
        string name;
        long id;
        string major;
        vector<double> grades;
    
    public:

        //Constructor
        Students() : name(""), id(0), major(""), grades(vector<double>(5,0)) {}

        //Overloaded constructor
        Students(string name, long id, string major, vector<double> grades) : name(name), id(id), major(major), grades(grades) {}

        //getter functions
        string getName() { return name; }
        long getId() { return id; }
        string getMajor() { return major; }
        vector<double> getGrades() { return grades; }
        double getGradeIndex(int i) { return grades[i]; }

        friend ostream& operator<<(Students this_Student,ostream& os);
        // friend istream& operator>>(ostream& is);
};

ostream& operator<<(Students this_Student, ostream& os) {
    int i;
    os << "STUDENT INFORMATION: " << endl;
    os << "Name: " << this_Student.getName() << endl;
    os << "ID: " << this_Student.getId() << endl;
    os << "Major: " << this_Student.getId() << endl;
    os << "Grades: "; 
    for (i = 0; i < (this_Student.getGrades().size()) - 1; i++) {
        os << this_Student.getGradeIndex(i) << " ";
    }

    return os << this_Student.getGradeIndex(i) << endl;
}



#endif