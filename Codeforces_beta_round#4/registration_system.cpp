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
int polynomialRollingHash(string const& str)
{
    int p = 31; //as our input contains only small latin letters
    int m = 1000000009;
    int power_of_p = 1;
    int hash_val = 0;
    for (int i = 0; i < str.length(); i++) {
        hash_val
            = (hash_val
               + (str[i] - 'a' + 1) * power_of_p)
              % m;
        power_of_p
            = (power_of_p * p) % m;
    }
    return hash_val;
} 
int32_t main(){
    // string s = "1hruv";
    int n;cin>>n;
    unordered_map<int,int> freq;
    unordered_map<int, int> suffix_no;
    looper(i,0,n){
        string s;cin>>s;
        int hash_value = polynomialRollingHash(s);
        if(freq[hash_value]){
            int curr = suffix_no[hash_value];
            curr+=1;
            suffix_no[hash_value]=curr;
            string p = to_string(curr);
            s.pb(p[0]);
            cout<<s<<endl;
            
        }else{
            cout<<"OK"<<endl;
            freq[hash_value]=1;
            suffix_no[hash_value]=0;
        }
    }

    return 0;
}