#include <bits/stdc++.h>
using namespace std;

void gnome_sort(vector<int> &arr) {
	int n = arr.size();
	int i = 0;

	while (i < n) {
		if (i == 0 || arr[i-1] <= arr[i]) i++;
		else {
			swap(arr[i-1], arr[i]);
			i--;
		}
	}
}
int main(){
    vector<int> arr = {2, 47, 12, 43, 67, 9, 3, 32};
    gnome_sort(arr);
    for(auto i : arr) cout << i << " ";
}

