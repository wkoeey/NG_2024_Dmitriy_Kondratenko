#include <iostream>

using namespace std;

int main()
{
    int salary;
    cout <<"Skolko ti zarabativaesh?"<< endl;
    cin >> salary;
        if(salary < 1000)
        cout <<"Tebe nuzhno bolse rabotat" << endl;
        if(salary > 1000){
            if(salary < 1000000)
                cout << "Ti molodec!" << endl;
        }
        if(salary > 1000000)
        cout <<"Ya hochu uvidet to, chto ti - millioner" << endl;
}
