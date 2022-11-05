#include <iostream>
using namespace std;

void bubbleSort(int input[], int size) {
	for(int j = 0; j < size - 1; j++) {
		for(int i = 0; i < size - 1 - j; i++) {
			if(input[i] > input[i+1]) {
				int temp = input[i];
				input[i] = input[i+1];
				input[i+1] = temp;
			}
		}
	}
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}