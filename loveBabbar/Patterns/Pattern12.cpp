#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Outer loop
	int i = 1;
	char ch = 'A';
	while(i <= n) {

		// Inner loop
		int j = 1;
		while(j <= n) {
			// print start character here & increment it!
			cout << ch << " ";
			ch = ch + 1;
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}
