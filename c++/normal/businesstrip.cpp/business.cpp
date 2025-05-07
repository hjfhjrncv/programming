#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;  

        vector<int> a(m);
        vector<int> b(k);
        unordered_set<int> known_questions;

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < k; i++) {
            cin >> b[i];
            known_questions.insert(b[i]);  
        }
        string see(m,'1');
        string se(m,'0');
        string se23(m,'1');
        
        
            for (int i = 0; i < m; i++)
            {   
                
                if(known_questions.count(a[i])){
                    see[i] = '0';
                }
            }
            

            if(k<=n-2){
                cout<<se<<endl;
            }
            else{
                if(k == n){
                    cout<<se23<<endl;
                }
                else{
                    cout<<see<<endl;
                }
            }
        
    }
 
    return 0;
}
