#include <iostream>
using namespace std;
int main() {
	int a, b, c,d;
	int count = 0;
	cin >> c;
	a = c / 10;
	b = c % 10;
	d = a + b;

	while (a + b == c) {
		
		count++;
	}
	
	return 0;
}
/*#include <iostream>
using namespace std;
int main() {
	int a, b;
	while (!cin.eof()) {
		cin >> a >> b;
		cout << a + b << "\n";

	}
	return 0;
}*/