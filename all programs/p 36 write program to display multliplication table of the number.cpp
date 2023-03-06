#include <iostream>
using namespace std;

int main() {
    int num, i, table;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Table of " << num << ":" << endl;
    for(i=1; i<=10; i++) {
        table = num * i;
        cout << num << " x " << i << " = " << table << endl;
    }
    return 0;
}
