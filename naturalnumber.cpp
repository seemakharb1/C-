#include<iostream>
using namespace std;

int main() {
    int n, i, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for(i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of natural numbers: " << sum;
    return 0;
}
