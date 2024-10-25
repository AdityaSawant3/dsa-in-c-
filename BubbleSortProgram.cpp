#include <iostream>
using namespace std;

// Time Complexity: O(n^2)
// Space Complexity: O(1)
class BubbleSort {
public:
	void sort(int* arr, int size) {
		for (int i = 0; i < size-1; i++) {
			for (int j = 0; j < size-i-1; j++) {
				if (arr[j] > arr[j+1]) {
					int temp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
};


int main() {
	int array[8] = {8, 6, 3, 9, 4, 2, 5, 7};
	int size = sizeof(array) / sizeof(array[0]);

	cout << "Unsorted array is: ";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	BubbleSort s;
	s.sort(array, size);

	cout << "Sorted array is: ";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	return 0;
}