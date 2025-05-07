#include <iostream>
#include <vector>
using namespace std;

int solve(vector<vector<int>> matrix,int n){
    int dp[n][n];
    dp[0][0] = matrix[0][0];

    for (int j = 1; j < n; j++)
    {
        dp[0][j] = dp[0][j-1] + matrix[0][j];
    }

    for (int i = 1; i < n; i++)
    {
        dp[i][0] = dp[i-1][0] + matrix[i][0];
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + matrix[i][j];
        }  
    }
    
    return dp[n-1][n-1];
    
}


int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> matrix(n ,vector<int>(n));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    int ans = solve(matrix,n);
    cout<<ans<<endl;
    return 0;
}