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
int32_t main(){
    int n,m;cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m,1));
    vector<vector<int>> arr_old(n,vector<int>(m,0));
    looper(i,0,n){
        looper(j,0,m){
            int x;cin>>x;arr_old[i][j]=x;
            if(x==0){
                looper(k,0,m){
                    arr[i][k]=0;
                }
                looper(k,0,n){
                    arr[k][j]=0;
                }
            }
        }
    }
    bool sahi_hai=true;
    looper(i,0,n){
        looper(j,0,m){
            bool done=false;
            looper(k,0,m){
                if(arr[i][k]==1){
                    done=true;
                    break;
                }
            }
            looper(k,0,n){
                if(arr[k][j]==1){
                    done=true;
                    break;
                }
            }
            if(done){
                if(arr_old[i][j]!=1){
                    sahi_hai=false;
                    break;
                }
            }else{
                if(arr_old[i][j]==1){
                    sahi_hai=false;
                    break;
                }
            }
        }
        if(sahi_hai==false){
            break;
        }
    }
    if(sahi_hai==false){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        looper(i,0,n){
            looper(j,0,m){
                cout<<arr[i][j]<<space;
            }
            cout<<endl;
        }
    }


    return 0;
}