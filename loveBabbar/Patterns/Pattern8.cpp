#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Outer loop
	int i = 1;
	while(i <= n) {

		// Inner loop
		int j = 1, value = i;
		while(j <= i) {
			// print value here!
			cout << value << " ";
			value = value + 1;
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}
