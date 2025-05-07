#include <iostream>
#include <cmath>
#include<string>
#include<array>
#include<vector>
#include <bits/stdc++.h>


using namespace std;


    
int re(const array<int,10> & n,int target,int start,int end){
    if (start>end) return -1;
    int mid =(start+end)/2;
    if (n[mid] == target) return mid;
    else if (n[mid] < target) return re(n,target,mid+1,end);
    else return re(n,target,start,mid-1);
    
}    


int main(){
    
    array<int,10> n = {1,2,3,4,5,6,7,8,9,10};
    cout<<re(n,3,0,n.size() - 1)<<endl;
    
    
    





    return 0;
}

