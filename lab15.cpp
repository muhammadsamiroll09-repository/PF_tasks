#include <iostream>
#include <string>
using namespace std;

// Function to convert number (1-99) to text
string numToText(int num) {
    string ones[10] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string tens[10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string special[10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    if (num >= 10 && num <= 19) {
        return special[num - 10];
    }

    int ten = num / 10;
    int one = num % 10;

    if (ten == 0) {
        return ones[one];
    }

    if (one == 0) {
        return tens[ten];
    }

    return tens[ten] + ones[one];
}

int main() {
    int number;
    cout << "Enter a number (1-99): ";
    cin >> number;

    string result = numToText(number);
    cout << result;

    return 0;
}