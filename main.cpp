#include <iostream>
using namespace std;

int main() {
    int height; char outputChar;
    cout << "enter single digit: "; cin >> height;
    while (height < 1 || height > 9) { // force height to be in the legal range
        if (height == 0) { 
            // special case for null pyramids because 0 is technically a single digit
            cerr << "error: pyramid of height 0 is impossible" << endl; 
            // this error message used to be a lot saltier before i decided it was best to stay 
            // relatively professional
        }
        else {
            cerr << "error: invalid input" << endl;
        }
        cout << "enter single digit: "; cin >> height;
    }
    cout << endl;
    for (int8_t i = 1; i <= height; i++) { 
        // int8's used because, let's face it, we don't need 32 bits per index
        for (int8_t j = 1; j < 2 * height; j++) {
            if (j <= height - i || j >= height + i) {
                outputChar = ' '; // if (i, j) is outside the pyramid, output a space
            }
            else {
                // otherwise, find outputChar mathematically
                if (j <= height) {
                    outputChar = i - height + j;
                }
                else {
                    outputChar = height + i - j;
                }
                outputChar += 0x30; // add ord('0') to outputChar to turn it into a printable number
            }
            cout << outputChar;
        }
        cout << endl;
    }
    return 0;
}
