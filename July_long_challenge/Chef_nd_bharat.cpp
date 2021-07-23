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
vi arr(100002);
int choreal_no(int n){
    int temp=n;
    n/=10;
    while(n!=0){
        int digit= n%10;
        temp = temp*10 + digit;
        n/=10;
    }
    return temp;
}
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return (power(x, y / 2) * power(x, y / 2))%mod;
    else
        return (x * power(x, y / 2) * power(x, y / 2))%mod;
}

int32_t main(){
    // cout<<power(16,2);
    arr.pb(0);
    looper(i,1,arr.size()){
        arr[i] = choreal_no(i);
        // arr[i]= res
    }
    // cout<<arr[251]<<" "<<arr[501]<<" "<<arr[9]<<" "<<arr[51]<<endl;
    vi prefix(100002);
    looper(i,1,prefix.size()){
        prefix[i] = arr[i] + prefix[i-1];
    }
    tester{
        int a,b;cin>>a>>b;
        int guru = arr[a];
        int sum_ = prefix[b] - prefix[a];
        // cout<<sum_<<endl;
        // cout<<guru<<" "<<sum_<<endl;
        guru = power(guru,sum_);
        cout<<guru<<endl;
    }   
    return 0;
}