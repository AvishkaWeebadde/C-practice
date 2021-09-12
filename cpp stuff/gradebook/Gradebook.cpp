#include "GradeBook.h"
#include<array>
using namespace std;

int main()
{
    const array<int, GradeBook::students> grades {87, 68, 94, 100, 93, 78, 91, 76, 87};
    string courseName{"Introduction to C++ programming"};

    GradeBook myGradeBook(courseName, grades);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
}