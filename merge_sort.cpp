#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &v, int left, int mid, int right) {
	
    int len1 = mid-left+1;
    int len2 = right-mid;
   
    vector<int> v1 (v.begin()+left,v.begin()+left+len1);
    vector<int> v2 (v.begin()+mid+1,v.begin()+mid+1+len2);
    
    int itr1=0,itr2=0,i=left;
    
    while(itr1 < len1 && itr2 < len2)
        (v1[itr1] < v2[itr2]) ? v[i++] = v1[itr1++] : v[i++] = v2[itr2++];
        
    while(itr1 < len1)
        v[i++] = v1[itr1++];
    while(itr2 < len2)
        v[i++] = v2[itr2++];
}

void merge_sort (vector<int> &arr, int l, int r) {
	if(l >= r) return;
	int m = l + (r - l) / 2;
	int n = arr.size();
	merge_sort(arr, l, m);
	merge_sort(arr, m + 1, r);
	merge(arr, l, m, r);
}

int main(){
    vector<int> arr = {2, 47, 12, 43, 67, 9, 3, 32};
    merge_sort(arr, 0, arr.size() - 1);
    for(auto i : arr) cout << i << " ";
}

