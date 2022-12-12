#include <iostream>
#include <vector>

using namespace std;

int CallRecursively(int n);

int CallRecursivelyWithMemoization(int n);

int main()
{
	int input = 300;
	int result = CallRecursivelyWithMemoization(input);
	printf("Done with the function\n: %d \n", result);
	//int resul1 = CallRecursively(input);
	//printf("Done with the function\n: %d ", resul1);*/

}

int CallRecursivelyWithMemoization(int n) {
	vector<int> values(n + 1);

	values[1] = 1;

	for (int i = 2; i <= n; i++) {
		values[i] = values[i - 1] + values[ceil(double(i) / 2.0)] + i;
	}

	return values[n];
}

int CallRecursively(int n) {

	if (n == 1) {
		return 1;
	}
	else {
		return CallRecursively(n - 1) + CallRecursively(ceil(double(n) / 2.0)) + n;
	}
}