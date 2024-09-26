#include <iostream>
using namespace std;

void problem11() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            cout << "* ";
        }
        cout << endl;
        }
}

void problem12() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

void problem13() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0) {
        cout << "The depth is 0";
    } else {
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i;
            }
            cout << endl;
        }
    }
}

void problem14() {
    int n;
    double sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += 1.0/i;
    }
    cout << sum << endl;
}

void problem15() {

}

void problem16() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        num = num * (-1);
    }else {}
    while (num != 0) {
        sum += num%10;
        num = num/10;
    }
    cout << "The sum of digits is: " << sum << endl;
}

int main() {
    cout << "\nProblem 11\n";
    problem11();
    cout << "\nProblem 12\n";
    problem12();
    cout << "\nProblem 13\n";
    problem13();
    cout << "\nProblem 14\n";
    problem14();
    cout << "\nProblem 16\n";
    problem16();
    return 0;
}
