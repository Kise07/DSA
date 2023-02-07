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
		while(j <= i) {
			// Use formula: 'i - j + 1' here!
			cout << i - j + 1 << " ";
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}
