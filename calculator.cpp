#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, selection;
    cout << "input two numbers" << endl;
    cin >> a >> b;

    cout << "choose mathematical operation" << endl <<
        "1. addition" << endl <<
        "2. substract" << endl <<
        "3. multiply" << endl <<
        "3. divide" << endl;

    cin >> selection;

    switch (selection) {
        case 1:
            cout << a + b;
            break;
        case 2:
            cout << a - b;
            break;
        case 3:
            cout << a * b;
            break;
        case 4:
            cout << a / b;
            break;
        default:
            cout << "wrong mathematical operation" << endl;
            break;
    }

}