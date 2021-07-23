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
vi factors_a,factors_b;
void printDivisors_a(int n)
{
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                factors_a.pb(i);
            else 
                factors_a.pb(i);
                factors_a.pb(n/i);
        }
    }
}
void printDivisors_b(int n)
{
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                factors_b.pb(i);
            else 
                factors_b.pb(i);
                factors_b.pb(n/i);
        }
    }
}

int32_t main(){
    int a,b,q;cin>>a>>b>>q;
    printDivisors_a(a);printDivisors_b(b);
    vi common_factors(factors_a.size() + factors_b.size());
    sort(factors_a.begin(), factors_a.end());
    sort(factors_b.begin(), factors_b.end());
    vi::iterator it;
    int j;
    it = set_intersection(factors_a.begin(),factors_a.end(),factors_b.begin(),factors_b.end(),common_factors.begin());
    looper(i,0,common_factors.size()){
        if(common_factors[i]==0){
            j = i-1;
            break;
        }
    }
    looper(i,0,q){
        int l,r;cin>>l>>r;
        int ans=INT64_MAX;
        int left=0,right=j;
        while(left<=right){
            int mid = (left+right)/2;
            if(common_factors[mid]>r){
                right=mid-1;
            }else if(common_factors[mid]<l){
                left= mid+1;
            }else{
                ans= common_factors[mid];
                left=mid+1;
            }
        }
        if(ans!=INT64_MAX){
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }

    }// 2 5 6 8 10 14 15 19 20-> 7-13

       
    return 0;
}