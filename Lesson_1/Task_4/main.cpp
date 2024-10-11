#include <iostream>

using namespace std;

int main()
{
    int salary;
    cout <<"Skolko ti zarabativaesh?"<< endl <<
            "1. do 1000 grn" << endl <<
            "2. ot 1000 do 1mln grn" << endl <<
            "3. ot 1mln grn" << endl;
    cin >> salary;
    switch(salary)
    {
    case 1:
        cout <<"Tebe nuzhno bolse rabotat" << endl;
            break;
    case 2:
        cout << "Ti molodec!" << endl;
            break;
    case 3:
        cout <<"Ya hochu uvidet to, chto ti - millioner" << endl;
            break;
    }
}
