// Ahmed Al-Aqel    #MyProJourney.

#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;

//problem 1 print Multiplcation Table from 1 to 10.
void PrintHeader() {
	cout << "\n\n\t\tMultiplaction Table From 1 To 10 \n\n";
	for (int i = 1; i <= 10; i++) cout << "\t" << i;
	cout << "\n-----------------------------------------------------------------------------------\n";
}
string ColumSeprtator(int i) {
	if (i < 10)return "    | ";
	else return "   | ";
}
void PrintMultiplcationTable() {
	PrintHeader();
	for (int i = 1; i <= 10; i++) {
		cout << " " << i << ColumSeprtator(i);
		for (int j = 1; j <= 10; j++) {
			cout << i * j << "\t";
		}
		cout << endl;
	}
}

// problem 2 print prime numbers from 1 to  n
enum enprimornotprime { prime = 1, notprime = 2 };
int ReadPositiveNumber(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num < 0);
	return num;
}
enprimornotprime CheckPrime(int number) {
	// 10
	int m = round(number / 2);
	for (int i = 2; i <= m; i++) {
		if (number % i == 0)
			return notprime;
	}
	return prime;

}
void PrintPrime() {
	int num = ReadPositiveNumber("Enter A Positive Number :");
	cout << "The Prime Numbers From 1 to " << num << " are : " << endl;
	for (int i = 1; i < num; i++) {
		if (CheckPrime(i) == prime) {
			cout << i << endl;
		}
	}
}

//problem 3 check if the number is perfect or not 

bool CheckIfNumberIsPerfect(int num) {

	int sum = 0;
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0)
			sum += i;
	}
	return sum == num;
}
void PrintIsPerfectOrNot() {
	int num = ReadPositiveNumber("Enter A Positive Number :");
	if (CheckIfNumberIsPerfect(num))
		cout << num << " is a Perfect Number.";
	else
		cout << num << " is not a Perfect Number.";
}

// problem 4 print perfect numbers from 1 to N
void PrintPerfectNumbersFrom1ToN() {
	int num = ReadPositiveNumber("Enter a Positive Number ");
	for (int i = 1; i < num; i++) {
		if (CheckIfNumberIsPerfect(i)) {
			cout << i << endl;
		}
	}
}

// problem 5 print digits in reversed
int LastDigit(int n) {
	return n % 10;
}
void PrintReversedInt() {

	int num = ReadPositiveNumber("Enter The Number :");
	while (num > 0) {
		cout << LastDigit(num) << endl;;
		num /= 10;
	}

}

// problem 6 sum of digitds 

int PrintSumDigits(int num) {
	int sum = 0;
	while (num > 0) {
		sum += LastDigit(num);
		num /= 10;
	}
	return sum;
}

// problem 7  print the number in reserve form 
int ResversedNumber(int num) {
	int reservednumber = 0;
	while (num > 0) {

		reservednumber = reservednumber * 10 + LastDigit(num);
		num /= 10;
	}

	return  reservednumber;
}

// problem 8 print digit frequency
int DigitFrequency(int digit, int num) {
	int counter = 0;
	while (num > 0) {
		if (LastDigit(num) == digit) counter++;
		num /= 10;
	}
	return counter;
}

// problem 9 print all the digits frequencies 

void PrintAllDigitsFrequencies(int num) {
	int frquency = 0;
	for (int i = 0; i <= 9; i++) {
		frquency = DigitFrequency(i, num);
		if (frquency > 0) {
			cout << "Digit " << i << " Frequency is : " << frquency << endl;
		}

	}
}

// problem 10 print digits in sssorder
void PrintDigitsInOrder(int num) {
	int numbers = ResversedNumber(num);
	while (numbers > 0) {
		cout << LastDigit(numbers) << endl;
		numbers /= 10;
	}
}

// problem 11 palindrome Number
bool Ispalindrome(int num) {

	return num == ResversedNumber(num);

}

// problem 12 print inverted number
void PrintInvertedNumber(int num) {
	for (int i = num; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			cout << i;
		}
		cout << endl;
	}
}

// probelm 13 print number pattern
void PrintNumberPattern(int num) {
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}

//problem 14 print inverted letter
void PrintInvertedLetter(int num) {
	for (int i = num; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << char(64 + i);
		}
		cout << endl;
	}
}

//problem 15 print letter pattern
void PrintLetterPattern(int num) {
	for (int i = 65; i <= num + 65 - 1; i++) {
		for (int j = 1; j <= num - (num + 65 - 1 - i); j++) {
			cout << char(i);
		}
		cout << endl;
	}

}

//proble 16 print all words from AAA to ZZZ
void PrintAllWords() {
	for (char i = 'A'; i <= 'Z'; i++) {
		for (char j = 'A'; j <= 'Z'; j++) {
			for (char h = 'A'; h <= 'Z'; h++) {
				cout << i << j << h << endl;
			}
		}
	}

}

// problem 17 print  guess 3_letter password
string ReadString(string message) {
	string str = "";
	cout << message << endl;
	cin >> str;
	return str;
}
bool GuessPassword() {
	string word = "";
	string password = ReadString("Enter The Password :");
	int counter = 0;
	for (char i = 'A'; i <= 'Z'; i++) {
		for (char j = 'A'; j <= 'Z'; j++) {
			for (char h = 'A'; h <= 'Z'; h++) {
				counter++;
				word += i;
				word += j;
				word += h;
				cout << "Trial[" << counter << "] : " << word << endl;
				if (password == word) {
					cout << "\npassword is " << word << endl;
					cout << "Found after " << counter << " Trails." << endl;
					return true;
				}
				word = "";
			}

		}

	}
	return false;
}

// problem 18 encrypt and decrypt text

string encrypt(string& text) {
	string str = "";
	for (int i = 0; i < text.size(); i++) {
		str += char(text[i] + 2);
	}
	return str;
}
string decrypt(string tet) {
	string st = "";
	for (int i = 0; i < tet.size(); i++) {
		st += char(tet[i] - 2);
	}
	return st;
}

// problem 19 random numbers from 1 to 10
int RandomNumbers(int from, int to) {
	return rand() % (to - from + 1) + from;
}

//problem 20 random character
enum enCharType { capitalletter = 1, smallleter = 2, specialcharacter = 3, number = 4 };
char RandomCharacter(enCharType type) {
	if (type == capitalletter)
		return char(RandomNumbers(65, 90));
	if (type == smallleter)
		return char(RandomNumbers(97, 120));
	if (type == specialcharacter)
		return char(RandomNumbers(33, 47));
	if (type == number)
		return RandomNumbers(48, 59);
}

// problem 21 generate Keys
string RandomWord(enCharType type, short digits) {
	string word = "";
	for (int i = 0; i < digits; i++) {
		word += RandomCharacter(type);
	}
	return word;

}
string GenerateKey() {
	string word = "";
	word += RandomWord(capitalletter, 4) + "-";
	word += RandomWord(capitalletter, 4) + "-";
	word += RandomWord(capitalletter, 4) + "-";
	word += RandomWord(capitalletter, 4);
	return word;
}
void GenerateKeys(int num) {
	for (int i = 0; i < num; i++) {
		cout << "key [" << i << "] : " << GenerateKey() << endl;
	}
}

// problem 22 fill and search arrary
void ReadArray(int arr[100], int& arrlength) {
	arrlength = ReadPositiveNumber("Enter The Number Of Array : ");
	cout << "Enter Array Elements : \n";
	for (int i = 0; i < arrlength; i++) {
		arr[i] = ReadPositiveNumber("Element [" + to_string(i + 1) + "] : ");
	}

}
void PrintArray(int arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int RepeatedTimes(int checknum, int arr[100], int arrlength) {
	int counter = 0;
	for (int i = 0; i < arrlength; i++) {
		if (arr[i] == checknum)counter++;
	}
	return counter;
}

// problem 23 fill array with random number from 1 to 100
void FillArrayWithRandomValue(int arr[100], int arrlength, int from, int to) {
	for (int i = 0; i < arrlength; i++) {
		arr[i] = RandomNumbers(from, to);
	}
}

// problem 24 find the maximun number of a filled randonmaly array
int MaxNumberInArray(int arr[100], int arrlength) {
	int max = 0;
	for (int i = 0; i < arrlength; i++) {
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

// problem 25 find the minimum number of a filled randonmaly array
int MinNumberInArray(int arr[100], int arrlength) {
	int min = arr[0];
	for (int i = 0; i < arrlength; i++) {
		if (min > arr[i])min = arr[i];
	}
	return min;
}

//problem 26 sum of random array
int SumArray(int arr[100], int arrlength) {
	int sum = 0;
	for (int i = 0; i < arrlength; i++) {
		sum += arr[i];
	}
	return sum;
}

//problem 27 average of random array
float ArrayAverage(int arr[100], int arrlength) {
	return	SumArray(arr, arrlength) / arrlength;
}

//problem 28 copy an array
void CopyArray(int arr[100], int copy[100], int arrlength) {
	for (int i = 0; i < arrlength; i++) {

		copy[i] = arr[i];
	}
}

// probelm 29 copy only prime number
void CopyPrimeNumber(int arr[100], int copy[100], int arrlength, int& arr2length) {
	int counter = 0;
	for (int i = 0; i < arrlength; i++) {
		if (CheckPrime(arr[i]) == prime) {
			copy[counter] = arr[i];
			counter++;
		}

	}
	arr2length = --counter;
}

// probelm 30 sum of two array in third one
void SumTowArrays(int arr[100], int arr2[100], int arr3[100], int arrlength) {
	for (int i = 0; i < arrlength; i++) {
		arr3[i] = arr[i] + arr2[i];
	}
}

// prpblem 31 shuffle an array
void FillArrayWithOrderNumberFrom1toN(int arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++) {
		arr[i] = i + 1;
	}
}
void ShuffleArray(int arr[100], int arr2[100], int arrlength) {
	int randomnumber = 0;
	bool exist = false;
	for (int i = 0; i < arrlength; i++) {
		do {
			exist = false;
			randomnumber = RandomNumbers(arr[0], arr[arrlength - 1]);
			for (int j = 0; j < i; j++) {
				if (arr2[j] == randomnumber) {
					exist = true;
				}
			}
		} while (exist);
		arr2[i] = randomnumber;

	}

}

//problem 31-B shuffle an array using swap
void Swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;

}
void ShuffleAnArrayUsingSwap(int arr[], int arrlength) {
	for (int i = 0; i < arrlength; i++) {
		Swap(arr[RandomNumbers(1, arr[arrlength]) - 1], arr[RandomNumbers(1, arr[arrlength - 1]) - 1]);
	}
}

// problem 32 copy array in reserved order
void CopyArrayInReservedOrder(int arr[100], int arr2[100], int arrlength) {

	for (int i = 0; i < arrlength; i++) {
		arr2[i] = arr[arrlength - 1 - i];
	}
}

// problem 33 fill an array with keys
void FillArrayWithKeys(string arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++) {
		arr[i] = GenerateKey();
	}
}
void PrintStringArray(string arr[100], int arrlength) {
	for (int i = 0; i < arrlength; i++) {
		cout << "Array[" << i + 1 << "] : " << arr[i] << endl;
	}
}

// problem 34 get a number index
int GetNumberIndex(int arr[], int arrlength, int serachedfor) {
	for (int i = 0; i < arrlength; i++) {
		if (arr[i] == serachedfor)
			return i;
	}
	return -1;

}

// problem 35 check if number is exist within an array
bool CheckNumberInArray(int arr[], int arrlength, int sreach) {
	return	GetNumberIndex(arr, arrlength, sreach) != -1;
}

// problem 36 read numbers and save them in the array
void AddArrayElement(int number, int arr[], int& arrlength) {
	arr[arrlength] = number;
	arrlength++;
}
void InputArray(int arr[], int& arrlength) {
	bool more;

	do {
		AddArrayElement(ReadPositiveNumber("Enter The Number You Want to Add : "), arr, arrlength);
		more = ReadPositiveNumber("Want Add More [0]No  [1] Yes");
	} while (more);
}

// problem 37 copy arr1 to arr2 using AddArrayElement
void CopyArrayUsingAddArray(int arr[], int arr2[], int arrlength1, int& arrlength2) {
	for (int i = 0; i < arrlength1; i++) {
		AddArrayElement(arr[i], arr2, arrlength2);
	}
}

// problem 38 copy odd numbers to a new Array
void CopyOddNumber(int arr[100], int arr2[100], int& arrlegth1, int& arrlength2) {
	for (int i = 0; i < arrlegth1; i++) {
		if (arr[i] % 2 != 0)
			AddArrayElement(arr[i], arr2, arrlength2);
	}
}

// problem 39 copy prime number to a new Array
void CopyPrimeNumberToNewArray(int arr[100], int arr2[100], int arrlength1, int& arrlength2) {
	for (int i = 0; i < arrlength1; i++) {

		if (CheckPrime(arr[i]) == prime) {
			AddArrayElement(arr[i], arr2, arrlength2);
		}

	}
}

// problem 40 copy disytinct numbers
void CopyDistictNmbers(int arr[10], int arr2[10], int arrlength1, int& arrlength2) {
	for (int i = 0; i < arrlength1; i++) {
		if (!CheckNumberInArray(arr2, arrlength2, arr[i]))
		{
			AddArrayElement(arr[i], arr2, arrlength2);
		}
	}
}

// problem 41 is array plaindrome 
bool IsArrayPlindrome(int arr[], int arrlength) {
	for (int i = 0; i < arrlength; i++) {
		if (arr[i] != arr[arrlength - 1 - i])
			return 0;
	}
	return 1;
}

// problem 42 count odd numbers in array
int CountOddNumbersInArray(int arr[], int arrlength) {
	int counter = 0;
	for (int i = 0; i < arrlength; i++) {
		if (arr[i] % 2 != 0)counter++;
	}
	return counter;
}

// problem 43 count even numbers in array
int CoutnEvenNumbersInArray(int arr[], int arrlength) {
	int counter = 0;
	for (int i = 0; i < arrlength; i++) {
		if (arr[i] % 2 == 0)counter++;
	}
	return counter;
}

// problem 44 count positive numbers in array
int CountPositiveNumbersInArray(int arr[], int arrlength) {
	int counter = 0;
	for (int i = 0; i < arrlength; i++) {
		if (arr[i] >= 0)counter++;
	}
	return counter;
}

// problem 45 count negitive numbers in array
int CountNegitiveNumbersInArray(int arr[], int arrlength) {
	int counter = 0;
	for (int i = 0; i < arrlength; i++) {
		if (arr[i] < 0)counter++;
	}
	return counter;
}

// problem 46 my absloute
float MyAbsolute(float num) {
	return num >= 0 ? num : -num;
}

// problem 47 my round
float GetFractionalPart(float num) {

	return num - (int)num;
}
int MyRound(float num) {

	int inpart = num;
	float fractionalpart = GetFractionalPart(num);
	if (MyAbsolute(fractionalpart) >= .5) {
		if (inpart < 0) return --inpart;
		return ++inpart;
	}
	return inpart;
}

// problem 48 my floor
int MyFloor(float num) {
	if (MyAbsolute(GetFractionalPart(num)) >= .1) {
		if (num > 0)return num;
		else return num - 1;
	}
	return num;
}

// problem 49 my ceil
int MyCeil(float num) {
	if (MyAbsolute(GetFractionalPart(num)) >= .1) {
		if (num > 0)return num + 1;
		else return num;
	}
	return num;
}

// problem 50 my sqrt
float MySqrt(float num) {
	return pow(num, .5);
}
int main()
{


}

