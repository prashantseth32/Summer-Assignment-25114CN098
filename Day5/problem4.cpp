#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int largestPrimeFactor = -1;

    while (n % 2 == 0) {
        largestPrimeFactor = 2;
        n = n/2;
    }

    for (int i = 3; i<= n; i += 2) {
        while (n % i == 0) {
            largestPrimeFactor = i;
            n = n/i;
        }
    }

    if (n > 2) {
        largestPrimeFactor = n;
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor << endl;

    return 0;
}