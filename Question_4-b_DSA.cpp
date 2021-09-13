// Q: A C++ Program Discover Your Real Estate Using Array of Structures.

                             //OR
                             
// Q: Program to Store and Display Information Using Structure.

#include <iostream>
#include <sstream>
using namespace std;

// Umang Laad

struct Location_Infrastructure
{
    char SchemeNo[25];
    char City[25];
    char PinCode[25];
};

struct Possession_Apartment
{
    int UnitType;
    char Name[25];
    float Super_BuiltUp_Area;
    struct Location_Infrastructure locinf;
};

int main()
{

    int i;

    Possession_Apartment E;

    cout << "\n\tEnter Unit Type [BHK] : ";
    cin >> E.UnitType;

    cout << "\n\tEnter Name Of Property : ";
    cin >> E.Name;

    cout << "\n\tEnter Super BuiltUp Area : ";
    cin >> E.Super_BuiltUp_Area;

    cout << "\n\tEnter Scheme Number : ";
    cin >> E.locinf.SchemeNo;

    cout << "\n\tEnter City : ";
    cin >> E.locinf.City;

    cout << "\n\tEnter PinCode : ";
    cin >> E.locinf.PinCode;

    cout << "\nDetails Of Your Real Estate";

    cout << "\n\tUnit Type [BHK] : " << E.UnitType;
    cout << "\n\tName Of Property : " << E.Name;
    cout << "\n\tSuper BuiltUp Area : " << E.Super_BuiltUp_Area;
    cout << "\n\tScheme Number : " << E.locinf.SchemeNo;
    cout << "\n\tCity : " << E.locinf.City;
    cout << "\n\tPinCode : " << E.locinf.PinCode;

    return 0;
}

// Umang Laad