//1110 더하기 사이클
#include <iostream>
using namespace std;
int main() {
	int n;
	int a, b;
	int next=100;
	int start;
	int count = 0;
	cin >> n;
	start = n;
	while (start != next) {
		a = n / 10;
		b = n % 10;
		next = b *10 + ((a + b)%10);
		n = next;
		count++;
		
	}
	cout << count;
	return 0;
}
