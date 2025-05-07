#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	int n = 18;
	vector<int> d = {9,3,4,2,4,5,0,9,3,2,12,1,2,23};
	stack<int> s;
  vector<int> x(d.size(),-1);
  
  for (int i = d.size() -1; i >=0; i--)
  {
      while(!s.empty() && d[s.top()] <= d[i]){
         s.pop();
      }
      if(!s.empty()){
         x[i] = d[s.top()];

      }

      s.push(i);

  }

  for (int i = 0; i < d.size(); ++i) {
    cout << "NGE of " << d[i] << " is: " << (x[i] == -1 ? "None" : to_string(x[i])) << endl;
}
  
  return 0 ;
}

