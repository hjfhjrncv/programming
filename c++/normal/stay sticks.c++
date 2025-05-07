#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        vector<int> arr(n);
        vector<int> sorted_arr(n);
 
        for (int i = 0; i < n*1; i++)
        {
            cin>>arr[i];
        }
        int d = sizeof(arr) / sizeof(arr[0]);
        int sorted = 0;
        
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                
            
                if(is_sorted(arr.begin(), arr.end())){
                    sorted += 1;
                    break;
                }
                else{
                    if(arr[i] > arr[i+1] && abs(arr[i+1] - arr[i]) ==1){
                        swap(arr[i],arr[i+1]);
                    }
 
                }
            }
            if(is_sorted(arr.begin(), arr.end())){
            break;
            }
            
        }
        if(sorted != 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
 
        
 
    }
        return 0;
    }