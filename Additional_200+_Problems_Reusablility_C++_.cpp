#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int SumOfDigits(int n) {

    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool IsPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

string ToUppercase(string str) {
    for (char& c : str) {
        c = toupper(c);
    }
    return str;
}

string ToLowercase(string str) {
    for (char& c : str) {
        c = tolower(c);
    }
    return str;
}

int Factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int Factorial1(int n) {

    if (n == 1) return 1;

    return n * Factorial1(n - 1);
}


bool IsEven(int n) {
    return (n % 2 == 0);
}

int Power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

string ReplaceSpacesWithDashes(string str) {
    for (char& c : str) {
        if (c == ' ') c = '-';
    }
    return str;
}

int CountVowels(string str) {
    int count = 0;
    for (char c : str) {
        if (string("aeiouAEIOU").find(c) != string::npos) count++;
    }
    return count;
}

int SumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int ProductArray(int arr[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }
    return product;
}

string RemoveVowels(string str) {
    string result = "";
    for (char c : str) {
        if (string("aeiouAEIOU").find(c) == string::npos) result += c;
    }
    return result;
}

bool IsPositive(int n) {
    return (n > 0);
}

bool IsNegative(int n) {
    return (n < 0);
}

bool IsPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}

bool IsPerfectCube(int n) {
    int root = round(cbrt(n));
    return root * root * root == n;
}

string TrimFirstAndLast(string str) {
    if (str.length() <= 2) return "";
    return str.substr(1, str.length() - 2);
}

string RemoveDigits(string str) {
    string result = "";
    for (char c : str) {
        if (!isdigit(c)) result += c;
    }
    return result;
}

int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}

bool ContainsOnlyLetters(string str) {
    for (char c : str) {
        if (!isalpha(c)) return false;
    }
    return true;
}

bool ContainsOnlyDigits(string str) {
    for (char c : str) {
        if (!isdigit(c)) return false;
    }
    return true;
}

string ReverseWordsInString(string str) {
    reverse(str.begin(), str.end());
    return str;
}

int FindMaxInArray(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}

int FindMinInArray(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
    }
    return minVal;
}

void DisplayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void DisplayEvenNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) cout << arr[i] << " ";
    }
    cout << endl;
}

void DisplayOddNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) cout << arr[i] << " ";
    }
    cout << endl;
}

string AddExclamationMarks(string str) {
    return "!" + str + "!";
}

bool IsPalindromeString(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return (rev == str);
}

bool IsMultiple(int a, int b) {
    return (a % b == 0);
}

bool IsArmstrongNumber(int n) {
    int sum = 0, temp = n, digits = 0;
    while (temp) {
        temp /= 10;
        digits++;
    }
    temp = n;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int CountWords(string str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isspace(c)) inWord = false;
        else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

int SumEvenNumbers(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) sum += arr[i];
    }
    return sum;
}

int SumOddNumbers(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) sum += arr[i];
    }
    return sum;
}

bool IsCharVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool IsCharDigit(char c) {
    return (c >= '0' && c <= '9');
}

int LastDigit(int n) {
    return n % 10;
}

int FirstDigit(int n) {
    while (n >= 10) n /= 10;
    return n;
}

bool IsPalindromeArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) return false;
    }
    return true;
}

int FindSecondLargest(int arr[], int size) {
    int largest = arr[0], second = INT_MIN;
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    return second;
}

int FindSecondSmallest(int arr[], int size) {
    int smallest = arr[0], second = INT_MAX;
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second && arr[i] != smallest) {
            second = arr[i];
        }
    }
    return second;
}

int AbsoluteValue(int n) {
    return (n < 0) ? -n : n;
}

bool EndsWith(string str, char c) {
    return str.back() == c;
}

bool StartsWith(string str, char c) {
    return str.front() == c;
}

int FindIndexOfChar(string str, char c) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == c) return i;
    }
    return -1;
}

string ReplaceChar(string str, char oldChar, char newChar) {
    for (char& c : str) {
        if (c == oldChar) c = newChar;
    }
    return str;
}

int MultiplyDigits(int n) {
    int product = 1;
    while (n) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

bool IsLeapYear(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

int FindMaxDigit(int n) {
    int maxDigit = 0;
    while (n) {
        int d = n % 10;
        if (d > maxDigit) maxDigit = d;
        n /= 10;
    }
    return maxDigit;
}

int FindMinDigit(int n) {
    int minDigit = 9;
    while (n) {
        int d = n % 10;
        if (d < minDigit) minDigit = d;
        n /= 10;
    }
    return minDigit;
}

bool ContainsSpace(string str) {
    for (char c : str) {
        if (c == ' ') return true;
    }
    return false;
}

string RemoveFirstWord(string str) {
    size_t pos = str.find(' ');
    return (pos != string::npos) ? str.substr(pos + 1) : "";
}

string RemoveLastWord(string str) {
    size_t pos = str.rfind(' ');
    return (pos != string::npos) ? str.substr(0, pos) : "";
}

int FindArraySumRecursive(int arr[], int size) {
    if (size == 0) return 0;
    return arr[size - 1] + FindArraySumRecursive(arr, size - 1);
}

int FibonacciRecursive(int n) {
    if (n <= 1) return n;
    return FibonacciRecursive(n - 1) + FibonacciRecursive(n - 2);
}

string ToggleCase(string str) {
    for (char& c : str) {
        if (isupper(c)) c = tolower(c);
        else if (islower(c)) c = toupper(c);
    }
    return str;
}

bool ContainsSubstring(string str, string sub) {
    return (str.find(sub) != string::npos);
}

bool IsSortedAscending(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}

bool IsSortedDescending(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i - 1]) return false;
    }
    return true;
}

void BubbleSortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {

}