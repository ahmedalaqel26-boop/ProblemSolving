// Ahmed Al-Aqel    #MyProJourney.
#include <iostream>
#include <string>
#include <algorithm> 
#include <cmath>     
using namespace std;

int arraySize = 0;

void SwapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

bool IsOdd(int n) {
    return (n & 1);
}

string ReverseString(string str) {
    string newString = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        newString += str[i];
    }
    return newString;
}

int GetQuarter_Ceil(int month) {
    return ceil(month / 3.0);
}

int GetQuarter_Simple(int month) {
    return (month + 2) / 3;
}

string RemoveExclamationByReplacing(string str) {
    for (char& c : str) {
        if (c == '!') c = ' ';
    }
    return str;
}

string RemoveExclamationBySkipping(string str) {
    string newString = "";
    for (char c : str) {
        if (c != '!') newString += c;
    }
    return newString;
}

string RemoveExclamationByErase(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '!') {
            str.erase(i, 1);
            i--;
        }
    }
    return str;
}

int FindMinMax(int arr[], int size, string op) {
    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        else if (arr[i] > maxVal) maxVal = arr[i];
    }
    return (op == "max") ? maxVal : (op == "min") ? minVal : 0;
}

int StringToInteger(string str) {
    return stoi(str);
}

string RemoveFirstLastChar(string str) {
    string newString = "";
    for (int i = 1; i < str.length() - 1; i++) {
        newString += str[i];
    }
    return newString;
}

string RepeatString_For(string str, int repeat) {
    string result = "";
    for (int i = 0; i < repeat; i++) {
        result += str;
    }
    return result;
}

string RepeatString_While(string str, int repeat) {
    string result = "";
    while (repeat--) {
        result += str;
    }
    return result;
}

string RemoveSpaces(string str) {
    string result = "";
    for (char c : str) {
        if (c != ' ') result += c;
    }
    return result;
}

void FindTwoSumIndices(int arr[], int target) {
    bool found = false;
    for (int i = 0; i < arraySize; i++) {
        for (int j = 0; j < arraySize; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "[" << i << "," << j << "]" << endl;
                found = true;
            }
            if (found) break;
        }
        if (found) break;
    }
}

bool IsPalindromeNumber(int x) {
    string st = to_string(x), reversed = st;
    reverse(reversed.begin(), reversed.end());
    return (reversed == st);
}

int CountDigits(int x) {
    return to_string(x).length();
}

void DisplayDigits(int num) {
    string st = to_string(num);
    cout << "The digits are: ";
    for (char c : st) {
        cout << c << " ";
    }
    cout << endl;
}

int RomanToInteger(string st) {
    int result = 0;
    bool skipNext = false;
    for (int i = 0; i < st.length(); i++) {
        if (skipNext) {
            skipNext = false;
            continue;
        }
        switch (st[i]) {
        case 'I':
            if (st[i + 1] == 'V') { result += 4; skipNext = true; }
            else if (st[i + 1] == 'X') { result += 9; skipNext = true; }
            else result += 1;
            break;
        case 'V': result += 5; break;
        case 'X':
            if (st[i + 1] == 'L') { result += 40; skipNext = true; }
            else if (st[i + 1] == 'C') { result += 90; skipNext = true; }
            else result += 10;
            break;
        case 'L': result += 50; break;
        case 'C':
            if (st[i + 1] == 'D') { result += 400; skipNext = true; }
            else if (st[i + 1] == 'M') { result += 900; skipNext = true; }
            else result += 100;
            break;
        case 'D': result += 500; break;
        case 'M': result += 1000; break;
        }
    }
    return result;
}

void ReverseAndDisplayString(string st) {
    reverse(st.begin(), st.end());
    cout << st << endl;
}

void CheckLeapYear() {
    int year;
    do {
        cout << "Enter a year: ";
        cin >> year;
    } while (year < 0);

    if (year % 4 == 0) cout << "Leap year\n";
    else cout << "Not a leap year\n";
}

int CenturyFromYear_Method1(int year) {
    return (year % 100 == 0) ? year / 100 : year / 100 + 1;
}

int CenturyFromYear_Method2(int year) {
    return (year + 99) / 100;
}

bool DivisibleByXandY(int n, int x, int y) {
    return (n % x == 0) && (n % y == 0);
}

int CountLetterOccurrences_Manual(string word, char letter) {
    int count = 0;
    for (char c : word) {
        if (c == letter) count++;
    }
    return count;
}

int CountLetterOccurrences_Algorithm(string str, char letter) {
    return count(str.begin(), str.end(), letter);
}

string SwapCaseManual(string str) {
    for (char& c : str) {
        if (islower(c)) c = toupper(c);
        else if (isupper(c)) c = tolower(c);
    }
    return str;
}

string SwapCaseUsingFunctions(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) result += toupper(str[i]);
        else if (isupper(str[i])) result += tolower(str[i]);
        else result += str[i];
    }
    return result;
}

int main() {
  

    return 0;
}
