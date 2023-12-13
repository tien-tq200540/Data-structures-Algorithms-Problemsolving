#include <iostream>

using namespace std;

int n = 5; //size of array
int arr[] = {1, 3, 4, 2, 5};

void swap(int &a, int &b);
void printArray(int arr[]);

//Time Complexity = O(n^2), Space Complexity = O(1)
void bubble_sort(int arr[]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
		}
	}
	
	printArray(arr);
}

//Time Complexity = O(n^2), Space Complexity = O(1), but fewer comparison operations (if any)
void bubble_sort_optimize(int arr[]) {
	for (int i = 0; i < n; i++) {
		int swapped = 0;
		for (int j = 0; j < n-1; j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				swapped = 1;
			}
		}
		
		// if this inner loop doesn't have any swapped, stop loop
		if (swapped == 0) break;
	}
	
	printArray(arr);
}

int main() {
	//bubble_sort(arr);
	bubble_sort_optimize(arr);
	return 0;
}

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void printArray(int arr[]) {
	cout << "Array: ";
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
}
