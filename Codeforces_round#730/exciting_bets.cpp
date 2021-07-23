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
    tester{
        int a,b;cin>>a>>b;
        if(a==b){
            cout<<0<<" "<<0<<endl;
        }else{
            int gcd= abs(a-b);
            int temp = a/gcd;
            int ans1=gcd*temp + gcd,ans2 = a%gcd;
            ans1 = ans1 - a;
            if(ans1<ans2){
                cout<<gcd<<" "<<ans1<<endl;
            }else{
                cout<<gcd<<" "<<ans2<<endl;
            }

        }
    }   
    return 0;
}