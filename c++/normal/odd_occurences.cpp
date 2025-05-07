#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
       long n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       map<char, int> freq_map;  
       for (char ch : s) {
        freq_map[ch]++;
       }
       int odd_count = 0;
        for (const auto& entry : freq_map) {
            if (entry.second % 2 != 0) {  
                odd_count++;
            }
        }
        if (odd_count > k+1){
            cout<<"NO"<<endl;

        }
        else{
            cout<<"YES"<<endl;
        }
           

    }
    return 0;
}