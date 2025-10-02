#include <iostream>
using namespace std;

int main() {
	int height; char outputChar;
	cout << "enter single digit: "; cin >> height;
	while (height < 1 || height > 9) {
		cerr << "error: input is not a single digit" << endl;
		cout << "enter single digit: "; cin >> height;
	}
	cout << endl;
	for (uint8_t i = 1; i <= height; i++) {
		for (uint8_t j = 1; j < 2 * height; j++) {
			if (j <= height - i || j >= height + i) {
				outputChar = ' ';
			}
			else {
				if (j <= height) {
					outputChar = i - height + j;
				}
				else {
					outputChar = height + i - j;
				}
				outputChar += 0x30;
			}
			cout << outputChar;
		}
		cout << endl;
	}
}
