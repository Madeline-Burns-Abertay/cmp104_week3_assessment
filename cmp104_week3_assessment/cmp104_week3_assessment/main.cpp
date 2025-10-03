#include <iostream>
using namespace std;

int main() {
	int height; char out;
	cout << "enter single digit: "; cin >> height;
	while (height < 1 || height > 9) {
		if (height == 0) {
			cerr << "error: pyramid of height 0 is impossible" << endl;
		}
		else {
			cerr << "error: invalid input" << endl;
		}
		cout << "enter single digit: "; cin >> height;
	}
	for (uint8_t i = 1; i <= height; i++) {
		for (uint8_t j = 1; j < 2 * height; j++) {
			if (j <= height - i || j >= height + i) {
				out = ' ';
			}
			else {
				out = j - i + 0x30;
			}
			cout << out;
		}
		cout << endl;
	}
}
