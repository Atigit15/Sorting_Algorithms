#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int> &arr) {
	int n = arr.size();
  	for (int i = 1; i < n; i++) {
    	int key = arr[i];
    	int j = i - 1;
    	while (j >= 0 && key < arr[j]) {
      		arr[j + 1] = arr[j];
      		--j;
    	}
    	arr[j + 1] = key;
  	}
}

int main() {
    vector<int> arr = {2, 47, 12, 43, 67, 9, 3, 32};
    insertion_sort(arr);
    for(auto i : arr) cout << i << " ";
}



