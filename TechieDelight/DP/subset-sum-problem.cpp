#include <iostream>
using namespace std;

// Returns true if there exists a subsequence of `arr[0…n]` with the given sum
bool subsetSum(int arr[], int n, int sum)
{
	if (sum == 0)
        return true;

    if (n<0){
        return false;
    }

    return subsetSum(arr, n-1, sum) || subsetSum(arr, n-1, sum-arr[n]);
}

// Subset Sum Problem
int main()
{
	// Input: a set of items and a sum
	int arr[] = { 7, 1, 5, 15 };
	int sum = 14;

	// total number of items
	int n = sizeof(arr) / sizeof(arr[0]);

	if (subsetSum(arr, n - 1, sum)) {
		cout << "Subsequence with the given sum exists";
	}
	else {
		cout << "Subsequence with the given sum does not exist";
	}

	return 0;
}