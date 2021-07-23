#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <functional>
#include <numeric>
using namespace std;
#define int long long 
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define tester int t;cin>>t;while(t--)
#define looper(a,b,c) for(int a=b;a<c;a++)
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
vi arr;
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            // cout << p << " ";
            arr.pb(p);
}  

int32_t main(){
    int n;cin>>n;
    vi result;
    SieveOfEratosthenes(n);
    // for(int k:arr){
    //     cout<<k<<" ";
    // }
    for(auto k:arr){
        result.pb(k);
        int j=2;
        while(true){
            int x = pow(k,j);
            if(x<=n){
                result.pb(x);
            }else{
                break;
            }
            j++;
        }
    }
    // sort(result.begin(),result.end());
    cout<<result.size()<<endl;
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
}