#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void problem6() {
    int productNumber;
    int quantitySold;
    double totalValue = 0, price = 0;
    while (true) {
        cout << "Enter product number from 1 to 5 (to stop enter -1): ";
        cin >> productNumber;
        if (productNumber == -1) {
            break;
        }
        cout << "Enter quantity sold: ";;
        cin >> quantitySold;
        switch (productNumber) {
            case 1:
                price = 2.98;
                break;
            case 2:
                price = 4.50;
                break;
            case 3:
                price = 9.98;
                break;
            case 4:
                price = 4.49;
                break;
            case 5:
                price = 6.87;
                break;
            default:
                cout << "Invalid input! Please try again!\n";
                continue;
        }
        totalValue += price * quantitySold;
    }
    cout << "Total retail value of all products sold: $" << totalValue << "\n";
}

void problem7() {
    int year, month, day;
    cout << "Enter year (e.g., 2012): ";
    cin >> year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter the day of the month (1-31): ";
    cin >> day;
    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }
    const int j = year / 100;
    const int k = year % 100;
    const int h = (day + 26 * (month + 1) / 10 +k + k / 4 + j / 4 + 5 * j) % 7;
    string dayOfWeek;
    switch (h) {
        case 0:
            dayOfWeek = "Saturday";
            break;
        case 1:
            dayOfWeek = "Sunday";
            break;
        case 2:
            dayOfWeek = "Monday";
            break;
        case 3:
            dayOfWeek = "Tuesday";
            break;
        case 4:
            dayOfWeek = "Wednesday";
            break;
        case 5:
            dayOfWeek = "Thursday";
            break;
        case 6:
            dayOfWeek = "Friday";
            break;
        default:
            cout << "Invalid input! Please try again!\n";
            break;
    }
    cout << "Day of the week is " << dayOfWeek << "\n";
}

void problem8() {
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string suits[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
    srand(time(0));
    int rankIndex = rand() % 13;
    int suitIndex = rand() % 4;
    cout << "The card you picked is " << ranks[rankIndex] << " of " << suits[suitIndex] << "\n";
}

void problem9() {
    int numbers[10];
    for (int i = 0; i < 10; i++) {
        cout << "Enter a number: ";
        cin >> numbers[i];
    }
    cout << "All combinations of picking two numbers: " << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            cout << "( " << numbers[i] << ", " << numbers[j] << " )" << endl;
        }
    }
}

int main()
{
    cout << "Problem 6\n";
    problem6();
    cout << "\nProblem 7\n";
    problem7();
    cout << "\nProblem 8\n";
    problem8();
    cout << "\nProblem 9\n";
    problem9();
}
