#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int array[10] = {10, 20, 30, 50, 40, 70, 80, 60, 100, 90};
	sort(array, array + 10);

	cout << "Sort" << endl;
	for (int i = 0; i < 10; i++) {
		cout << array[i] << endl;
	}

	return 0;

}
