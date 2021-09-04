// Q: Write a program to create an array of subjects that you are studying in current semester.

#include <iostream>
using namespace std;

int main()
{
    const char *_3rdSem_Subjects[7] = {"Data Structure & Algorithm", "Web Development Lab-II (PHP/JSP)", "Unix and Shell Programming Lab", "Application Development using Java Programming", "Cloud Computing Project Based Learning", "Data Communication", "Discrete Structures"};

    cout << "\nThe Subjects Are:\n";

    for (int i = 0; i < 7; ++i)
    {
        cout << _3rdSem_Subjects[i] << "\n";
    }

    return 0;
}

// Umang Laad