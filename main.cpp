#include "Students.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    Students s1;

    vector<double> s1_grades = { 95.55, 89.99, 100.0, 45.5 };

    s1("Default", 100001, "English", s1_grades);

    cout << s1;

    
    return 0;
}