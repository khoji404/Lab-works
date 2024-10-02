#include <iostream>
#include <cmath>
using namespace std;
void problem1() {
    double temp = 0, wSpeed = 0;
    cout << "Enter the temperature  in Fahrenheit between -58°F and 41°F: ";
    cin >> temp;
    while (!(temp <= 41 && temp >= -58)){
        cout << "Invalid input. Please enter the temperature in Fahrenheit between -58°F and 41°F: ";
        cin >> temp;
    }
    cout << "Enter the wind speed (>=2) in miles per hour: ";
    cin >> wSpeed;
    while (wSpeed < 2){
        cout << "Invalid input. Please enter the wind speed (>=2) in miles per hour: ";
        cin >> wSpeed;
    }
    double twc = 35.74 + 0.6215 * temp - 35.75 * pow(wSpeed, 0.16) + 0.4275 * temp * pow(wSpeed, 0.16);
    cout << "The wind chill index speed is " << twc;
}

void problem2(){
    int a, b, c;
    cout << "Enter a 3 numbers: ";
    cin >> a >> b >> c;
    if (c % a == 0){
        cout << a << " is factor of " << c << endl;
    } else {cout << a << " is not factor of " << c << endl;}
    if (c % b == 0){
        cout << b << " is factor of " << c;
    } else {cout << b << " is not factor of " << c;}
}

void problem3(){
    int n, first = 0, second = 1, next;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; i <= n; i++){
        if (i == 0){
            cout << first << ", ";
        } else if (i == 1){
            cout << second << ", ";
        }else{
            next = first + second;
            first = second;
            second = next;
            if (i == n){
                cout << next;
            } else {
                cout << next << ", ";
            }
        }
    }
}

int encrypt (int num){
    int d1 = (num / 1000) %10;
    int d2 = (num / 100) %10;
    int d3 = (num / 10) %10;
    int d4 = num%10;
    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;
    int encryptedNum = d3 * 1000 + d4 * 100 + d1 * 10 + d2;
    return encryptedNum;
}

int decrypt (int num){
    int d1 = (num / 1000) %10;
    int d2 = (num / 100) %10;
    int d3 = (num / 10) %10;
    int d4 = num%10;
    int temp1 = d1, temp2 = d2;
    d1 = d3;
    d2 = d4;
    d3 = temp1;
    d4 = temp2;
    d1 = (d1 + 3) % 10;
    d2 = (d2 + 3) % 10;
    d3 = (d3 + 3) % 10;
    d4 = (d4 + 3) % 10;
    int decryptedNum = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
    return decryptedNum;
}

void problem4(){
    int num;
    char ans;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Do you want to encrypt or decrypt (e or d): ";
    cin >> ans;
    if (ans == 'e'){
        int encryptedNumber = encrypt(num);
        cout << "Encrypted number: " << encryptedNumber;
    } else if (ans == 'd'){
        int decryptedNumber = decrypt(num);
        cout << "Decrypted number: " << decryptedNumber;
    }
}

void problem5(){
    int n, temp1, temp2;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a number: ";
    cin >> temp1;
    temp2 = temp1;
    for (int i=0; i<n-1; i++){
        cout << "Enter a number: ";
        cin >> temp1;
        if (temp1 < temp2){
            temp2 = temp1;
        } else{ continue;}
    }
    cout << "Smallest: " << temp2;
}

int main(){
//    cout << "Problem 1\n";
//    problem1();
//    cout << "\nProblem 2\n";
//    problem2();
//    cout << "\nProblem 3\n";
//    problem3();
//    cout << "\nProblem 4\n";
//    problem4();
    cout << "\nProblem 5\n";
    problem5();
}
