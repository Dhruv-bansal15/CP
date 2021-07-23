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
int countNeighbour(int a,int b,int n,int m){
    if(a==1 | a==n){
        if(b==1 | b==m){
            return 2;
        }else{
            return 3;
        }
    }else if(b==1 | b==m){
        if(a==1 | a==n){
            return 2;
        }else{
            return 3;
        }
    }else{
        return 4;
    }
}
int32_t main(){
    tester{
        int n,m;cin>>n>>m;
        vector<vi> arr(n+1,vector<int>(m+1));
        bool flag=true;
        looper(i,1,n+1){
            looper(j,1,m+1){
                int x;cin>>x;
                arr[i][j]=x;
                int count= countNeighbour(i,j,n,m);
                if(x>count){
                    flag=false;
                }
            }
        }
        if(flag==false){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            looper(i,1,n+1){
                looper(j,1,m+1){
                    int x= arr[i][j];
                    int count= countNeighbour(i,j,n,m);
                    if(x<count){
                        x = count;
                    }
                    cout<<x<<space;
                }
                cout<<endl;
            }

        }
    }   
    return 0;
}