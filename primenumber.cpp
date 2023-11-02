#include <iostream>

using namespace std;

int main() {
    int n1, n2, i, j, num, choice;

    cout << "Do you want to find prime number from a range (1) or check if a specific number is a prime number(2)?" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter the first number: ";
        cin >> n1;
        cout << "Enter last number: ";
        cin >> n2;

        cout << "Prime numbers from" << n1 << "to" << n2 << "are: ";

        for (i = n1 + 2; i <= n2; i++) {
            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    break;
                }
            }
            if (j * j > i) {
                cout << i << " ";
            }
        }
        cout << endl;
        break;

    case 2:
        cout << "Enter a number:";
        cin >> num;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                cout << "Not prime";
                return 0;
            }
        }

        cout << "Prime";
        break;

  
    }

    return 0;
}
