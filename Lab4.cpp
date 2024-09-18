#include <iostream>
#include <cmath>
using namespace  std;
void Problem1() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a >= 0) {
        cout << "Positive";
    } else {
        cout << "Negative";
    }}
void Problem2(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a >= 0){
        if (a%2 == 0){
            cout << "Number is positive and even";
        } else {cout << "Number is positive and odd";}
    } else if (a%2 == 0){
        cout << "Number is negative and even";
    } else {cout << "Number is negative and odd";}
}

void Problem3 (){
    double a, b, c;
    cout << "Enter 3 number with space between them: ";
    cin >> a >> b >> c;
    if (a > b && a > c){
        cout << a << " is the largest";
    } else if (b > c){
        cout << b << " is the largest";
    } else {cout << c << " is the largest";}
}

void Problem4(){
    int a, b;
    cout << "Enter 2 integers: ";
    cin >> a >> b;
    if (a%b == 0){
        cout << a << " is divisible by " << b;
    } else {cout << a << " is not divisible by " << b;}
}

void Problem5(){
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year%100 == 0 && year%400 == 0){
        cout << year << " is a leap year";
    } else {cout << year << " is not a leap year";}
}

void Problem6(){
    double a, b, c, x1, x2;
    cout << "Enter a, b, c with space between them: ";
    cin >> a >> b >> c;
    x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    cout << "x1=" << x1 << endl;
    cout << "x2=" << x2 << endl;
}

void Problem7(){
    double a, b, c;
    cout << "Enter angles of triangle with space between them: ";
    cin >> a >> b >> c;
    if (a+b+c == 180){
        cout << "The triangle is valid";
    } else {
        cout << "The triangle is not valid";
    }
}

void Problem8(){
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    if (65 <= int(letter) && int(letter) <= 90){
        cout << "Uppercase alphabet";
    } else if (97 <= int(letter) && int(letter) <= 122){
        cout << "Lowercase alphabet";
    } else {
        cout << "It is not an alphabet";
    }
}

void Problem9(){
    const int x1= 0.0;
    const int y1 = 0.0;
    double x2, y2;
    cout << "Enter points with space between them: ";
    cin >> x2 >> y2;
    if (sqrt(pow((x2-x1), 2)+pow((y2-y1), 2)) <= 10){
        cout << "Point" << "( " << x2 << "," << y2 << " ) is in circle";
    } else {cout << "Point" << "( " << x2 << "," << y2 << " ) is not in circle";}
}

void Problem10(){
    double price1, weight1, price2, weight2;
    cout << "Enter weight and price for package 1: ";
    cin >> weight1 >> price1;
    cout << "Enter weight and price for package 2: ";
    cin >> weight2 >> price2;
    if (price1/weight1 > price2/weight2){
        cout << "Package 2 has a better price";
    } else if (price1/weight1 < price2/weight2){
        cout << "Package 1 has a better price";
    } else {cout << "Two packages have the same price";}
}

int main(){
    cout << "Problem 1\n";
    Problem1();

    cout << "Problem 2\n";
    Problem2();

    cout << "Problem 3\n";
    Problem3();

    cout << "Problem 4\n";
    Problem4();

    cout << "Problem 5\n";
    Problem5();

    cout << "Problem 6\n";
    Problem6();

    cout << "Problem 7\n";
    Problem7();

    cout << "Problem 8\n";
    Problem8();

    cout << "Problem 9\n";
    Problem9();

    cout << "problem10\n";
    Problem10();
}
