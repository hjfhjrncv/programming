#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cin.ignore();
        string line;
        getline(cin, line);

        vector<int> arr;
        stringstream ss(line);
        int num;

        for (char ch : line) {
            if (ch == '0' || ch == '1') {
                arr.push_back(ch - '0'); 
            }
        }
        int ans =0;
        if(arr[0] == 1)  ans += 1;
        
        for (int i = 0; i < n -1; i++)
        {
            
            if (arr[i] != arr[i+1]) ans +=1;
            
        }
        cout<<ans<<endl;
    }
    
    return 0;
}