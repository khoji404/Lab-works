#include <iostream>
using namespace std;
void problem1() {
    int count = 0, num = 0;
    while (count != 10){
        ++num;
        cout << num << " ";
        count += 1;
    }
}

void problem2() {
    int sum = 0;
    for (int i = 1; i <= 10; i++){
        cout << i << " ";
        sum += i;
    }
    cout << sum;
}

void problem3() {
    for (int i = 1; 1 <= i && i <= 100; i++){
        if (i%5 == 0){
            continue;
        } else { cout << i << " ";}
    }
}

void problem4() {
    int n;
    cout <<  "Enter n: ";
    cin >> n;
    for (int i = 1; 0 <= i && i <= n; i++){
        if (i%10 == 0){
            cout << i << " ";
        } else { continue;}
    }
}

void problem5() {
    int count = 0;
    for (int i = 65; 65 <= i && i <= 90; i++){
        cout << char(i) << " ";
        count += 1;
        if (count%5 == 0){
            cout << endl;
        } else { continue;}
    }
}

void problem6() {
    double totalGpa = 0, totalCredit = 0;
    int numClasses;
    cout << "Enter a number of classes: ";
    cin >> numClasses;
    for (int i = 0; i < numClasses; i++){
        double gpa;
        int credit;
        cout << "Enter the credits for subject " << i + 1 << ": ";
        cin >> credit;
        cout << "Enter the GPA for the subject " << i + 1 << ": ";
        cin >> gpa;
        totalGpa += gpa * credit;
        totalCredit += credit;
    }
    cout << "Your total GPA is " << totalGpa / totalCredit;
}

void problem7() {
    int num;
    bool condition = false;
    cout << "Enter a number: ";
    cin >> num;
    if (num <= 1){
        condition = false;
    } else {
        for (int i = 2; i < num; i++){
            if (num%i == 0){
                condition = true;
                break;
            }
        }
    }
    if (condition){
        cout << "Number is not prime";
    } else {cout << "Number is prime";}
}

void problem8() {
    int n, sum = 0;
    cout << "Enter a N: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        sum += i*i;
    }
    cout << "The sum of the series: " << sum;
}

void problem9() {
    double num, maxNum;
    cout << "Enter a number: ";
    cin >> num;
    maxNum = num;
    while (num != 0){
        cout << "Enter a number: ";
        cin >> num;
        if (num > maxNum){
            maxNum = num;
        } else { continue;}
    }
    cout << "Max is " << maxNum;
}

void problem10() {
    int num, numPos = 0, numNeg = 0;
    double average, total = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0){
        if (num > 0){
            numPos += 1;
        } else {numNeg += 1;}
        total += num;
        cout << "Enter a number: ";
        cin >> num;
    }
    average = total / (numPos + numNeg);
    cout << "The number of positives is " << numPos << endl;
    cout << "The number of negatives is " << numNeg << endl;
    cout << "The Total is " << total << endl;
    cout << "The average is " << average << endl;
}

int main(){
    cout << "Problem 1 \n";
    problem1();
    cout << "\nProblem 2 \n";
    problem2();
    cout << "\nProblem 3 \n";
    problem3();
    cout << "\nProblem 4 \n";
    problem4();
    cout << "\nProblem 5 \n";
    problem5();
    cout << "\nProblem 6 \n";
    problem6();
    cout << "\nProblem 7 \n";
    problem7();
    cout << "\nProblem 8 \n";
    problem8();
    cout << "\nProblem 9 \n";
    problem9();
    cout << "\nProblem 10 \n";
    problem10();
}
