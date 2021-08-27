#include <iostream>
#include <cstdio>
#include <stack>
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
void solve() {
    int n; cin >> n;
    string s; cin >> s;
    s.pb('B');
    int i = 0;
    while(i < n and s[i] == '?')
        i++;
    for(int j = i+1; j < n; j++) {
        if(s[j] != '?') continue;
        if(s[j-1] == 'R')s[j] = 'B';
        if(s[j-1] == 'B')s[j] = 'R';
    }
    for(int j = i-1; j >= 0; j--) {
        if(s[j+1] == 'R')s[j] = 'B';
        else s[j] = 'R';
    }
    cout << s.substr(0, n) << endl;
}
int32_t main(){
    tester{
        int n;cin>>n;
        string s;cin>>s;
        int st=0;
        while(st<n & s[st]=='?'){
            st++;
        }        
        looper(i,st+1,n){
            if(s[i]!='?'){
                continue;
            }else if(s[i-1]=='B'){
                s[i]='R';
            }else{
                s[i]='B';
            }
        }    
        for(int i=st-1;i>=0;i--){
            if(s[i+1]=='R'){
                s[i]='B';
            }else{
                s[i]='R';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}