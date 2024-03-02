#include <iostream>
using namespace std;

const int ARR_SIZE = 100;

void move(int arr[], int n)
{
	int tmp;
	if (arr[0] % 2 == 0) {
		tmp = arr[0];
		for (int i = 0; i < n - 1; i--) {
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = tmp;
	}
	else {
		tmp = arr[n - 1];
		for (int i = n - 1; i > 0; i--) {
			arr[i] = arr[i - 1];
		}
		arr[0] = tmp;
	}
}

void move(float arr[], int n)
{
	float tmp;
	int first = (int)(arr[0]);
	if (first % 2 == 0) {
		tmp = arr[0];
		for (int i = 0; i < n - 1; i--) {
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = tmp;
	}
	else {
		tmp = arr[n - 1];
		for (int i = n - 1; i > 0; i--) {
			arr[i] = arr[i - 1];
		}
		arr[0] = tmp;
	}
}

void move(double arr[], int n)
{
	double tmp;
	int first = (int)(arr[0]);
	if (first % 2 == 0) {
		tmp = arr[0];
		for (int i = 0; i < n - 1; i--) {
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = tmp;
	}
	else {
		tmp = arr[n - 1];
		for (int i = n - 1; i > 0; i--) {
			arr[i] = arr[i - 1];
		}
		arr[0] = tmp;
	}
}

template <typename T>
void print(T arr[], int n)
{
	cout << '[';
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}
	cout << "\b \b\b \b]" << endl;
}

template <typename T>
void fill(T arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

int main()
{
	int i_arr[ARR_SIZE], n;
	float f_arr[ARR_SIZE];
	double d_arr[ARR_SIZE];

	cout << "Enter the array size: ";
	cin >> n;
	cout << endl
		 << "Fill an array with integers:" << endl;
	fill(i_arr, n);
	cout << endl
		 << "Fill an array with floats:" << endl;
	fill(f_arr, n);
	cout << endl
		 << "Fill an array with doubles:" << endl;
	fill(d_arr, n);

	cout << endl
		 << "Given arrays before cyclic move:" << endl;
	print(i_arr, n);
	print(f_arr, n);
	print(d_arr, n);

	move(i_arr, n);
	move(f_arr, n);
	move(d_arr, n);

	cout << endl
		 << "Given arrays after cyclic move:" << endl;
	print(i_arr, n);
	print(f_arr, n);
	print(d_arr, n);
	return 0;
}