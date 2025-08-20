#include <iostream>
#include <vector>
#include <string>
using namespace std;

int SumUniqueNumbers(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        bool found = true;
        for (int j = 0; j < numbers.size(); j++) {
            if (j == i) continue;
            if (numbers[i] == numbers[j]) found = false;
        }
        if (found) sum += numbers[i];
    }
    return sum;
}

string PrintCharactersRange(const string& str) {
    string result = "";
    for (char i = str[0]; i <= str[2]; i++) result += i;
    return result;
}

vector<int> CountAlphabetPositions(const vector<string>& arr) {
    vector<int> counts;
    int counter = 0;
    int letterPosition = 65; // ASCII 'A'

    for (const auto& word : arr) {
        for (char ch : word) {
            if ((int)toupper(ch) == letterPosition) counter++;
            letterPosition++;
        }
        counts.push_back(counter);
        counter = 0;
        letterPosition = 65;
    }
    return counts;
}

int CalculateElevatorDistance(vector<int> arr) {
    int result = 0;
    for (int i = 0; i < arr.size() - 1; i++) {
        result += abs(arr[i] - arr[i + 1]);
    }
    return result;
}

int CountMostFrequentItem(vector<int> arr) {
    int counter = 0, maxCount = 0;
    for (int num : arr) {
        for (int val : arr) {
            if (val == num) counter++;
        }
        if (counter > maxCount) maxCount = counter;
        counter = 0;
    }
    return maxCount;
}

vector<int> NumberDivisionSequence(int n) {
    vector<int> temp, result;
    while (n >= 1) {
        temp.push_back(n);
        n /= 2;
    }
    for (int i = temp.size() - 1; i >= 0; i--) result.push_back(temp[i]);
    return result;
}

vector<int> LastNEvenNumbers(vector<int> arr, int n) {
    vector<int> temp, result;
    for (int num : arr) {
        if (num % 2 == 0) temp.push_back(num);
    }
    for (int i = temp.size() - n; i < temp.size(); i++) result.push_back(temp[i]);
    return result;
}

int DifferenceEvenOddInArray(vector<string> v) {
    int result = 0;
    for (const auto& val : v) {
        if (val >= "a" && val <= "z") continue;
        (stoi(val) % 2 == 0) ? result++ : result--;
    }
    return result;
}

vector<int> AllTwoDigitSums(int num) {
    vector<int> digits, result, sums;
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
    for (int i = digits.size() - 1; i >= 0; i--) result.push_back(digits[i]);
    for (int i = 0; i < result.size() - 1; i++) {
        for (int j = i + 1; j < result.size(); j++) {
            sums.push_back(result[i] + result[j]);
        }
    }
    return sums;
}

vector<int> AllTwoDigitSumsUsingString(int num) {
    vector<int> result;
    string str = to_string(num);
    for (int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j < str.length(); j++) {
            result.push_back((str[i] - '0') + (str[j] - '0'));
        }
    }
    return result;
}

vector<int> RemoveOddOccurrenceNumbers(const vector<int> numbers) {
    vector<int> result;
    int counter = 0;
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = 0; j < numbers.size(); j++) {
            if (numbers[i] == numbers[j]) counter++;
        }
        if (counter % 2 == 0) result.push_back(numbers[i]);
        counter = 0;
    }
    return result;
}

string Convert12to24HourFormat(int hour, int minute, const string period) {
    string str;
    if (period == "am" && hour == 12) hour = 0;
    if (period == "pm" && hour < 12) hour += 12;

    if (hour >= 10) str = to_string(hour);
    else str = '0' + to_string(hour);

    if (minute >= 10) str += to_string(minute);
    else str += '0' + to_string(minute);

    return str;
}

void PasswordCheckWithThreeAttempts() {
    string password = "12345";
    string userInput = "";
    int attempts = 3;
    do {
        if (attempts == 0) {
            cout << "You are blocked.\n";
            system("color 4F");
            break;
        }
        if (attempts < 3) {
            cout << "Wrong Password. Try again (" << attempts << " tries left).\n";
        }
        cout << "Enter password:\n";
        cin >> userInput;
        attempts--;
    } while (password != userInput);
}

string ReverseStringPreserveSpaces(const string& s) {
    int counter = 0;
    string str = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[counter] == ' ') str += ' ';
        if (s[i] != ' ') str += s[i];
        counter++;
    }
    return str;
}

int main() {
    PasswordCheckWithThreeAttempts();
}


