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
        int n,a,b;
        int x = 0;
        int y = 0;
        cin>>n>>a>>b;
        cin.ignore();
        string line;
        cin>>line;
        
        
        int count = 0;
        int i = 0;
            while (count <= 500)
            {
               
            
            
                if(x == a && y == b){
                    break;
                    
                }
                else{
                    if (line[i] == 'N') y+=1;
                    if (line[i] == 'E') x+=1;
                    if (line[i] == 'S') y-=1;
                    if (line[i] == 'W') x-=1;
                    
                }
                
                count += 1;
                i +=1;
                if(i > n-1) i =0;
                
            }
        if (x == a && y == b){
            cout<<"YES"<<endl;
        } 
        else
        {
            cout<<"NO"<<endl;
        }
          
            
            
        
         
        



    }
    return 0 ;
}