#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int number[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110, 111, 112, 113, 114, 115 };

	int test[5][3];

	int index = 0;
	for (int i = 0; i < 5; i++) {
		for (int n = 0; n < 3; n++) {
			test[i][n] = number[index];
			index++;
			cout << "test[" << i << "][" << n << "] = " << test[i][n] << endl;
		}
	}

	cout << endl;
	cout << "#################" << endl;
	cout << "test[2][2] = " << test[2][2] << endl;
	cout << "test[3][0] = " << test[3][0] << endl;
	cout << "test[4][1] = " << test[4][1] << endl;
	cout << "#################";

	return 0;

}
