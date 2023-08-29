#include<iostream>
#include<vector>
using namespace std;

//pivot -> last element
int partition(vector<int> &arr, int start, int end) {

  int pivot = arr[end];

  int i = (start - 1);

  for (int j = start; j < end; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  
  swap(arr[i + 1], arr[end]);
  
  return (i + 1);
}

void quick_sort(vector<int> &arr, int start, int end){
	if(start < end) {
		int partitionIndex = partition(arr, start, end); 
		quick_sort(arr, start, partitionIndex - 1);
		quick_sort(arr, partitionIndex + 1, end); 
	}
	return;
}

int main() {
    vector<int> arr = {2, 47, 12, 43, 67, 9, 3, 32};
    quick_sort(arr, 0, arr.size() - 1);
    for(auto i : arr) cout << i << " ";
}



