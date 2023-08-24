#include <vector>
#include <chrono>
#include <thread>
#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

void exec(int N) {  
	sleep(chrono::seconds(N));
   	cout << N << " "; 
}  

void sleep_sort(vector<int> &arr) {
	int n = arr.size();
	thread myThreads [n];
	for (int i = 0; i < n; i++) {
		myThreads[i] = thread(exec, arr[i]);
	}
	for(int i = 0; i < n; i++) {
		myThreads[i].join();
	}
}
int main(){
    vector<int> arr = {2, 1, 12, 15, 27, 9, 3, 32};
    sleep_sort(arr);
}

