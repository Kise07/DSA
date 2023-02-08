#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Outer loop
	int i = 1;
	while(i <= n) {

		// Inner loop
		int j = 1;
		char ch = 'A' + n - i;
		while(j <= i) {
			// Use formula: `'A' + n - i`
			cout << ch << " ";
			ch = ch + 1;
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}
