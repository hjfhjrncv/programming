#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;




int main() {
    long t;
    cin >> t;
    while (t--) {
       
        string a;
        cin>>a;
        

        
        int si = a.size()/2;
        
        if(si % 2 == 1){
            cout<<"DA"<<endl;
        }
        else{
        cout<<"NET"<<endl;
        }
    }
    return 0;
}