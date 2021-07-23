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
void printDivisors(int n)
{
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                arr.pb(i);
 
            else // Otherwise print both
                arr.pb(i);
                arr.pb(n/i);
        }
    }
}
  
int32_t main(){
    int n;cin>>n;
    vi result;
    printDivisors(n);
    sort(arr.begin(),arr.end());
    for(int i=arr.size()-1;i>=0;i--){
        result.pb(arr[i]);
        // cout<<arr[i]<<endl;
    }
    looper(i,0,result.size()-1){
        looper(j,i+1,result.size()-1){
            if(result[i]%result[j]!=0){
                result[j]=0;
            }
        }
    }
    looper(i,0,result.size()){
        if(result[i]!=0){
            cout<<result[i]<<" ";
        }
    }
    return 0;
}