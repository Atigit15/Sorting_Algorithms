#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> &arr){
	int n = arr.size();
	for (int i = 0; i < n; i ++) {
		for (int j = i + 1; j < n; j ++) {
			if(arr[i] > arr[j]){
				swap(arr[i], arr[j]);
			}
		}
	}
}

int main() {
    vector<int> arr = {2, 47, 12, 43, 67, 9, 3, 32};
    bubble_sort(arr);
    for(auto i : arr) cout << i << " ";
}



