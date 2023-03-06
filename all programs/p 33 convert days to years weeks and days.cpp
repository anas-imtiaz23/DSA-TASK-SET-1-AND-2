#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter number of days: ";
    cin >> days;

    int years = days / 365;
    days = days % 365;

    int months = days / 30;
    days = days % 30;

    int weeks = days / 7;
    days = days % 7;

    cout << "Years: " << years << endl;
    cout << "Months: " << months << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days << endl;

    return 0;
}
