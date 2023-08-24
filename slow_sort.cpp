#include<iostream>
#include<vector>
using namespace std;

void slow_sort_util(vector<int> &arr, int start, int end) {
	if(start >= end) return;
	int mid = ( start + end ) / 2;
	slow_sort_util(arr, start, mid);
	slow_sort_util(arr, mid + 1, end);
	if(arr[mid] > arr[end]) swap(arr[mid], arr[end]);
	slow_sort_util(arr, start, end - 1);
}

void slow_sort (vector<int> &arr) {
	int n = arr.size();
	slow_sort_util(arr, 0, n - 1);
}

int main(){
    vector<int> arr = {2, 47, 12, 43, 67, 9, 3, 32};
    slow_sort(arr);
    for(auto i : arr) cout << i << " ";
}

