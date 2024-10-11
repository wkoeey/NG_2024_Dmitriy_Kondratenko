#include <iostream>

using namespace std;

int main()
{
    int firstnumber, secondnumber;
    int action;
    cout <<"Vvedit pershe chislo" << endl;
    cin >> firstnumber;
    cout <<"Vvedit druge chislo:" << endl;
    cin >> secondnumber;
    cout <<"Viberit matematichnu operatsiyu" << endl <<
        "1.Suma" << endl <<
            "2.Riznitsia" << endl <<
            "3.Dobutok" << endl <<
            "4.Chastka" << endl;

    cin >> action;

    switch (action)
    {
    case 1:
        cout << "Summa dorivnue " << firstnumber + secondnumber<< endl;
        break;
    case 2:
        cout << "Riznitsia dorivnue " << firstnumber - secondnumber << endl;
        break;
    case 3:
        cout << "Dobutok dorivnue " << firstnumber * secondnumber << endl;
        break;
    case 4:
        cout << "Chastka dorivnue " << firstnumber * secondnumber << endl;
        break;
    default:
        cout << "Ya ne vmiyu tsiogo robiti ";
        break;
    }
}
