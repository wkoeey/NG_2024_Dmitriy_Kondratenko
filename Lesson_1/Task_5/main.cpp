#include <iostream>

using namespace std;

int main() {
    int stars;
    cout << "Enter amount of stars: ";
    cin >> stars;

    for (int height = 0; height < stars; height ++) {
        for (int width = 0; width < stars - height - 1; width++){
            cout << " ";
        }
        for (int width = 0; width < 2 * height + 1; width++){
            cout << "*";
        }
        cout << endl;
    }

    for (int height = 0; height < stars - 1; height++){
        cout << " ";
    }
    cout << "*" << endl;
}
