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
    int n;cin>>n;
    char s='C';
    int count=0;
    if(n%2==0){
        count+= n*(n/2);
    }else{
        count+= (n/2)*(n/2) + (n/2 + 1)*(n/2 + 1);
    }
    cout<<count<<endl;
    bool parity=true;
    looper(i,1,n+1){
        looper(j,1,n+1){
            if(i%2!=0){
                if(j%2!=0){
                    cout<<s;
                }else{
                    cout<<".";
                }
            }else{
                if(j%2==0){
                    cout<<s;
                }else{
                    cout<<".";
                }
            }

        }
        cout<<endl;
    }
    return 0;
}