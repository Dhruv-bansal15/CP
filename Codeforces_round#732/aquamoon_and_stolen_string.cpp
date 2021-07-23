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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define pb push_back
#define ff first
#define tester int t;cin>>t;while(t--)
#define looper(a,b,c) for(int a=b;a<c;a++)
#define ss second
#define pqmax priority_queue<int>
#define pqmin priority_queue<int,vi,greater<int> >
#define mod 1000000007
#define vs vector<string>
#define mp map<int,int>
#define ump unordered_map<int,int>
#define space ' '
#define looprev(i,a,b) for(int i=a;i>=(b);i--)
#define logarr(arr,a,b) for(int z=(a);z<=(b);z++) std::cout<<(arr[z])<<space;std::cout<<std::endl;
#define si set<int>
int gCd(int a,int b){
    if(b==0)
        return a;
    return gCd(b,a%b);
}
int fact(int n){
    int res=1;
    for(int i=2;i<=n;i++)
        res = (res*i)%mod;
    return res;
}
int nCr(int n,int r){
    return fact(n)/ (fact(r)*fact(n-r));
}
    
int32_t main(){
    tester{
        int n,m;cin>>n>>m;
        vector<vector<char> > arr(m);
        // arr[0].pb('a');
        // cout<<arr[0][0];
        looper(i,0,2*n-1){
            string s;cin>>s;
            looper(j,0,m){
                char aa= s[j];
                arr[j].pb(aa);
            }
        }
        vi freq(26);
        string result="";
        looper(i,0,m){
            vi freq(26);
            vector<char> temp = arr[i];
            looper(j,0,2*n-1){
                char aa= temp[j];
                freq[aa - 'a']+=1;
            }
            // cout<<"hehe"<<endl;
            looper(j,0,26){
                if(freq[j]%2 != 0){
                    result.pb((char)('a' + j));
                    break;
                }
            }

        }
        cout<<result<<endl;

    }   
    return 0;
}