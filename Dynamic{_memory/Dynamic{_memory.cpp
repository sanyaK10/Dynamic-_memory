#include <iostream>

int* allocateMemory(int size) {
	return new int[size];
}
void freeMemory(int* ptr) {
	delete ptr;
}

void printArr(const int arr[], int size) {
	for (int i = 0;i < size;++i)std::cout << arr[i] << ' ';
}

int* pushBack(int* arr, int size, int elem) {
	int* temp = new int[size + 1];
	for (int i = 0;i < size;++i) {
		temp[i] = arr[i];
	}
	temp[size] = elem;
	delete[]arr;
	return temp;
}

int main()
{
	int size = 0;
	std::cin >> size;

	//int* arr = new int[size] {0};
	//int* arr = (int*)malloc(size * sizeof(int));
	int* arr = (int*)calloc(size, sizeof(int));
	printArr(arr, size);
	std::cout << '\n';
	//arr = pushBack(arr, size++, 10);
	arr = (int*)realloc(arr, (++size) * sizeof(int));
	arr[size - 1] = 15;
	printArr(arr, size);

	//delete[] arr;
	free(arr);


	//int* ptr = allocateMemory();
	//std::cout << ptr << '\n';

	//delete ptr;
	//delete ptr;

	//for (long long i = 0;i < 1000000000;++i) {
	//	int*ptr = allocateMemory();
	//	std::cout << ptr << '\n';
	//	delete ptr;
	//}


	//float* ptr = new float(10.5);

	//std::cout << ptr << ' ' << *ptr << '\n';
}