#include <iostream>
#include <vector>
using namespace std;

int solve(vector<vector<int>> matrix,int n){
    int dp[n][n];
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        if(matrix[i][0] == 1){
            dp[i][0] =0;
        }
        else dp[i][0] = 1;
    }
    for (int j = 0; j < n; j++)
    {   
        if(matrix[0][j] == 1){
            dp[0][j] =0;
        }
        else dp[0][j] = 1;
        
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {   
            if(matrix[i][j] == 1){
                dp[i][j]=0;
            }
            
            else dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    
    return dp[n-1][n-1];
}



int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    int ans = solve(matrix,n);   
    cout<<ans<<endl;
    return 0;
}