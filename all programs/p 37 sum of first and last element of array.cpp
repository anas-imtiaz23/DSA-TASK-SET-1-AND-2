#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements of the array: ";
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int sum = arr[0] + arr[n-1];
  cout << "The sum of the first and last element of the array is: " << sum << endl;

  return 0;
}
