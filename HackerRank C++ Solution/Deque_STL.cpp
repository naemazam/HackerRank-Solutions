#include<bits/stdc++.h>
#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k){
    deque<int> q;
    int step = 0;
    for(int i = 0; i < n; i++)
    {
		for(;!q.empty() && arr[i] > q.back();){
            q.pop_back();
            cout<<"step :"<<step<<endl;
            for(auto x : q){
                cout<<x<<" ";
            }
            step++;
            cout<<endl;
        }
            
		q.push_back(arr[i]);
        cout<<"step :"<<step<<endl;
        for(auto x : q){
                cout<<x<<" ";
            }
            step++;
            cout<<endl;

		if(i >= k && q.front() == arr[i-k]){
            q.pop_front();
            cout<<"step hi:"<<step<<endl;
            for(auto x : q){
                cout<<x<<" ";
            }
            step++;
            cout<<endl;
        }
		if(i >= k-1)
        printf(i < n-1 ? "%d ":"%d\n", q.front());
	}
}

int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
