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
bool good_passcode(string s){
    int a=0,b=0,c=0;
    for(char i:s){
        if(islower(i)){
            a=1;
        }else if(isupper(i)){
            b=2;
        }else if(isdigit(i)){
            c=3;
        }
    }
    if(a+b+c==6){
        return true;
    }else {
        return false;
    }
}
int32_t main(){
    tester{
        string s;cin>>s;
        if(good_passcode(s)){
            cout<<s<<endl;
        }else{
            bool flag=false;
            looper(i,0,s.size()){
                string temp=s;
                temp[i]='d';
                if(good_passcode(temp)){
                    cout<<temp<<endl;flag=true;break;
                }
                temp[i]='D';
                if(good_passcode(temp)){
                    cout<<temp<<endl;flag=true;break;
                }
                temp[i]='5';
                if(good_passcode(temp)){
                    cout<<temp<<endl;flag=true;break;
                }

            }
            if(flag==false){
                char aa=s[2];
                if(islower(aa)){
                    s[0]='D';s[1]='5';
                }else if(isupper(aa)){
                    s[0]='d';s[1]='5';
                }else{
                    s[0]='d';s[1]='D';
                }
                cout<<s<<endl;
            }
        }
    }   
    return 0;
}