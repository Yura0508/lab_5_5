// lab_5_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>
using namespace std;

int level = 0;
int level2 = 0;

string Bin(int number) {
    string binaryRepresentation = "";
    if (number == 0) {
        return "";
    }
    else {
        if (number % 2 == 0) {
            binaryRepresentation = "0" + binaryRepresentation;
        }
        else {
            binaryRepresentation = "1" + binaryRepresentation;
        }
    }
    level++;
    return Bin(number / 2) + binaryRepresentation;
}

string Oct(int number) {
    string octalRepresentation = "";
    if (number == 0) {
        return "";
    }
    else {
        if (number % 8 == 0) {
            octalRepresentation = "0" + octalRepresentation;
        }
        else if (number % 8 == 1) {
            octalRepresentation = "1" + octalRepresentation;
        }
        else if (number % 8 == 2) {
            octalRepresentation = "2" + octalRepresentation;
        }
        else if (number % 8 == 3) {
            octalRepresentation = "3" + octalRepresentation;
        }
        else if (number % 8 == 4) {
            octalRepresentation = "4" + octalRepresentation;
        }
        else if (number % 8 == 5) {
            octalRepresentation = "5" + octalRepresentation;
        }
        else if (number % 8 == 6) {
            octalRepresentation = "6" + octalRepresentation;
        }
        else if (number % 8 == 7) {
            octalRepresentation = "7" + octalRepresentation;
        }
    }
    level2++;
    return Oct(number / 8) + octalRepresentation; 
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0) {
        string binaryRepresentation = Bin(number);
        string octalRepresentation = Oct(number);

        if (number == 0) {
            cout << "Binary representation: 0" << endl;
            cout << "Number of actions: 0" << endl;
            cout << "Octal representation: 0" << endl;
            cout << "Number of actions: 0" << endl;
        }
        else {
            cout << "Binary representation: " << binaryRepresentation << endl;
            cout << "Number of actions: " << level << endl;

            cout << "Octal representation: " << octalRepresentation << endl;
            cout << "Number of actions: " << level2 << endl;
        }
    }
    else { cout << "Please enter >=0" << endl;}

    return 0;
}






/*

#include <iostream>
#include <string>
using namespace std;

int level = 0;
int level2 = 0;
string Bin(int number) {
    if (number == 0) {
        return "";
    }

    level++;
    return Bin(number / 2) + to_string(number % 2);
}

string Oct(int number) {
    if (number == 0) {
        return "";
    }

    level2++;
    return Oct(number / 8) + to_string(number % 8);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0) {
        string binaryRepresentation = Bin(number);
        string octalRepresentation = Oct(number);


        if (number == 0) {
            binaryRepresentation = "0";
            octalRepresentation = "0";
        }

        cout << "Binary representation: " << binaryRepresentation << endl;
        cout << "Number of actions: " << level << endl;
        cout << "Octal representation: " << octalRepresentation << endl;
        cout << "Number of actions: " << level2 << endl;
    }
    else {
        cout << "Please enter a non-negative number." << endl;
    }

    return 0;
}

*/
