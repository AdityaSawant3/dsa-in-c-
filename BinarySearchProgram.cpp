#include <iostream>
#include <algorithm>

// Iterative method
// Time Complexity: O(log n)
// Space Complexity: O(1)
int binarySearch1(int* array, int size, int target) {
	int left = 0;
	int right = size-1;

	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (array[mid] == target) {
			return mid;
		} else if (array[mid] < target) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	return -1;
}

// Recursive method
// Time Complexity: O(n(log(n))
// Space Complexity: O(1)
int binarySearch2(int* array, int left, int right, int target) {
	if (left >= right) {
		return -1;
	}

	int mid = left + (right - left) / 2;
	if (array[mid] == target) {
		return mid;
	} else if (array[mid] < target) {
		return binarySearch2(array, mid+1, right, target);
	} else {
		return binarySearch2(array, left, mid-1, target);
	}
}

int main() {
	int arr[7] = {34, 12, 67, 13, 9, 98};
	int size = sizeof(arr)/sizeof(arr[0]);
	const int target = 67;
	std::sort(arr, arr+size);

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	int result1 = binarySearch1(arr, size, target);
	if (result1 != -1) {
		std::cout << "Number present at index: " << result1;
	} else {
		std::cout << "Number not present";
	}
	std::cout << std::endl;

	int result2 = binarySearch2(arr, 0, size-1, target);
	if (result2 != -1) {
		std::cout << "Number present at index: " << result2;
	} else {
		std::cout << "Number not present";
	}
	std::cout << std::endl;

	return 0;
}