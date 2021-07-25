#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int max_calouries(vector<vector<int>> arr, int n, int m){
    vector<vector<int>> dp1(1005, vector<int>(1005,0));
    vector<vector<int>> dp2(1005, vector<int>(1005,0));
    vector<vector<int>> dp3(1005, vector<int>(1005,0));
    vector<vector<int>> dp4(1005, vector<int>(1005,0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp1[i][j] = arr[i][j] + max(dp1[i-1][j], dp1[i][j-1]);
        }
        
    }
    for (int i = n; i <= 1; i++)
    {
        for (int j = m; j <= 1; j--)
        {
            dp2[i][j] = arr[i][j] + max(dp2[i+1][j], dp2[i][j+1]);
        }
        
    }
    for (int i = n; i <= 1; i--)
    {
        for (int j = 1; j <= m; j++)
        {
            dp3[i][j] = arr[i][j] + max(dp3[i+1][j], dp3[i][j-1]);
        }
        
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j <= 1; j--)
        {
            dp4[i][j] = arr[i][j] + max(dp4[i-1][j], dp4[i][j+1]);
        }
        
    }
    int ans=0;
    for (int i = 2; i <= n; i++)
    {
        /* code */
        for (int j = 2; i <= m; j++)
        {
            /* code */
            int ans1= dp1[i-1][j] + dp2[i+1][j] + dp3[i][j-1] + dp4[i][j+1];
            int ans2= dp1[i][j-1] + dp2[i][j+1] + dp3[i+1][j] + dp4[i-1][j];
            ans = max(ans,ans1,ans2);
        }
        
    }
    return ans;

}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(1005, vector<int>(1005,0));
    for (int i = 1; i <=n  ; i++)
    {
        for (int j = 1; i <= m; i++)
        {
            cin>> arr[i][j];
        }
        
    }
    int x= max_calouries(arr, n,m);
    cout<<x;
}