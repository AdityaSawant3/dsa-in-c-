#include <iostream>
using namespace std;

// Time Complexity: O(n^2)
// Space Complexity: O(1)
class SelectionSort {
public:
	void sort(int* arr, int size) {
		for (int i = 0; i < size; i++) {
			int minIndex = i;
			for (int j = i+1; j < size; j++) {
				if (arr[j] < arr[minIndex]) {
					minIndex = j;
				}
			}
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
};

int main() {
	int unSortedArray[8] = {8, 6, 3, 9, 4, 2, 5, 7};
	int arrSize = sizeof(unSortedArray)/sizeof(unSortedArray[0]);

	cout << "Unsorted Array is: ";
	for (int i = 0; i < arrSize; i++) {
		cout << unSortedArray[i] << " ";
	}
	cout << endl;

	SelectionSort s;
	s.sort(unSortedArray, arrSize);

	cout << "Sorted Array is: ";
	for (int i = 0; i < arrSize; i++) {
		cout << unSortedArray[i] << " ";
	}
	cout << endl;

	return 0;
}