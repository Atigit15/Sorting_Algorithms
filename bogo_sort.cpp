#include <bits/stdc++.h>
using namespace std;

void bogo_sort (vector<int> &arr) {
	while(!is_sorted(arr.begin(), arr.end())) {
		next_permutation(arr.begin(), arr.end());
	}
}

int main(){
    vector<int> arr = {2, 47, 12, 43, 67, 9, 3, 32};
    bogo_sort(arr);
    for(auto i : arr) cout << i << " ";
}
n
