#include <bits/stdc++.h>
using namespace std;

// user defined function to find first N prime numbers
void student_101(int n) {
    int count = 0;
    int num = 2;

    while (count < n) {
        bool isPrime = true;

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
            count++;
        }
        num++;
    }
}

int main() {
    int n;
    cout << "Enter the number n" << endl;
    cin >> n;

    student_101(n);

    return 0;
}
