#include <iostream>
using namespace std;
int num(int x) {
	int y;
	y = x * x * x;
	return y;
}
int main() {
	int input, y;
	cout << "Please Insert a number = " << endl;
	cin >> input;
	cout << "your num^3 = " << num(input);
	
}