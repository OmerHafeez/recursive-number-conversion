#include <iostream>
using namespace std;

string toHexa(int num);

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Number in hexadecimal: " << toHexa(n) << endl;
    return 0;
}

string toHexa(int num) {
    if (num == 0) {
        return "0";
    } else {
        int rem = num % 16;
        string hex = toHexa(num / 16);
        if (rem < 10) {
            hex += (char)(rem + '0');
        } else {
            hex += (char)(rem - 10 + 'A');
        }
        return hex;
    }
}
