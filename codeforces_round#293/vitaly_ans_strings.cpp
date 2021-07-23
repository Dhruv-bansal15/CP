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
    
int32_t main(){
    string s1,s2;cin>>s1>>s2;
    int n=s1.size();
    string final=s1;
    final.pop_back();
    if(n>=2) {final.pop_back();}
    if(s1[n-1]!='z'){
        int x = int64_t(s1[n-1]);
        x++;
        char y = char(x);
        if(n>=2) {final.pb(s1[n-2]);}
        final.pb(y);
        if(final==s2) {cout<<"No such string";}
        else cout<<final;
    }else{
        string final_= "";
        // cout<<final_<<endl;
        int i=n-1;
        while(s1[i]=='z'){
            i--;
        }
        // cout<<final_<<endl;
        if(i<0) {cout<<"No such string";}
        looper(j,0,i){
            final_.pb(s1[j]);
        }
        // cout<<final_<<endl;
        int x = int64_t(s1[i]);
        x++;
        char y = char(x);
        final_.pb(y);
        // cout<<final_<<endl;
        while(final_.size()<s1.size()){
            final_.pb('a');
        }
        if(final_==s2) {cout<<"No such string";}
        else cout<<final_;
    }
    return 0;
}