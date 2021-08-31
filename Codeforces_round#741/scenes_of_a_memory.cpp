#include <iostream>
#include <cstdio>
#include <stack>
#include <bits/stdc++.h>
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
// #define int long long 
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
#define stc stack<char>
#define sti stack<int>
#define all(arr) arr.begin(),arr.end()
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
    
bool compare(pair<int,int> &one, pair<int,int> &two){
    return one.second < two.second;
}
vector<bool> if_prime(100,true);
void pre(){
    looper(i,2,100){
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                if_prime[i]=false;
            }
        }   
    }
}
int32_t main(){
    pre();
    tester{
        int n;cin>>n;
        string s;cin>>s;
        bool flag=false;
        looper(i,0,s.size()){
            if(s[i]=='1' | s[i]=='4' | s[i]=='6' | s[i]=='8' | s[i]=='9'){
                cout<<1<<endl;
                cout<<s[i]<<endl;
                flag=true;
                break;
            }
        }
        if(flag==false){

            // check all two digit numbers 
            looper(i,0,s.size()-1){
                if(flag==true){
                    break;
                }
                looper(j,i+1,n){
                    // string str = "" +  s[i] + s[j];
                    int curr = (s[i] - '0')*10 + (s[j] - '0');
                    if(if_prime[curr]==false){
                        cout<<2<<endl;
                        cout<<curr<<endl;
                        flag=true;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}