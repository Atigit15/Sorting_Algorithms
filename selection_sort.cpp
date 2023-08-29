#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector<int> &arr) {
	int n = arr.size();
	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		swap(arr[min_idx], arr[i]);
	}
}


int main() {
    vector<int> arr = {2, 47, 12, 43, 67, 9, 3, 32};
    selection_sort(arr);
    for(auto i : arr) cout << i << " ";
}



