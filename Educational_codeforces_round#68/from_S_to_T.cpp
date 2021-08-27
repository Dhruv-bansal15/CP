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
bool isSubSequence(string str1, string str2,int m, int n)
{
    // Base Cases
    if (m == 0)
        return true;
    if (n == 0)
        return false;
    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);
    return isSubSequence(str1, str2, m, n - 1);
}
int32_t main(){
    tester{
        string s,t,p;cin>>s>>t>>p;
        vi char_s(26),char_t(26),char_p(26);
        int req;
        looper(i,0,s.size()){
            char_s[s[i]-'a']++;
        }
        looper(i,0,t.size()){
            char_t[t[i]-'a']++;
        }
        looper(i,0,p.size()){
            char_p[p[i]-'a']++;
        }
        bool poss=true;
        looper(i,0,26){
            if(char_s[i]>char_t[i]){
                poss=false;
                break;
            }else{
                if(char_s[i]<char_t[i]){
                    req= char_t[i] - char_s[i];
                    if(char_p[i]<req){
                        poss=false;
                        break;
                    }
                }
            }
        }
        if(poss==false){
            cout<<"NO"<<endl;
            continue;
        }
        if(!isSubSequence(s,t,s.size(),t.size())){
            poss=false;
        }
        if(poss){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        

    }   
    return 0;
}