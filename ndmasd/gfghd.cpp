#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string s;
    cin>>s;

    int a; //(
    int b; //)
    int c;  //[]
    int d;  //]
    int f; //{}
    int g;  //}

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '('){
            a++;
        }
        else if (a[i] == ')')
        {
           b++;
        }
        else if (s[i] == '[')
        {
           c++;
        }
        
    }
    
    return 0;
}
