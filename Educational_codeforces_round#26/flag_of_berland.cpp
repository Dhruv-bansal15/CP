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
#define invi(n) vi arr(n); for(int i=0; i<n; i++) cin >> arr[i];
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

bool ifHorizontal(int x, int y, vector<string> arr){
    if(x%3!=0){
        return false;
    }else{
        char a,b,c;
        char curr = arr[0][0];
        a=curr;
        int temp = x/3;
        looper(i,0,temp){
            looper(j,0,y){
                if(arr[i][j]!=curr){
                    return false;
                }
            }
        }
        curr = arr[temp][0];
        b=curr;
        looper(i,temp,temp+temp){
            looper(j,0,y){
                if(arr[i][j]!=curr){
                    return false;
                }
            }
        }
        curr = arr[x-1][0];
        c=curr;
        looper(i,x-temp,x){
            looper(j,0,y){
                if(arr[i][j]!=curr){
                    return false;
                }
            }
        }
        if(a==b | b==c | a==c){
            return false;
        }
        return true;
    }
}
bool ifVertical(int x, int y, vector<string> arr){
    if(y%3!=0){
        return false; // 4 3
    }else{
        char a,b,c;
        char curr = arr[0][0];
        a=curr;
        int temp = y/3;
        looper(i,0,x){
            looper(j,0,temp){
                if(arr[i][j]!=curr){
                    return false;
                }
            }
        }
        curr = arr[0][temp];
        b=curr;
        looper(i,0,x){
            looper(j,temp,2*temp){
                if(arr[i][j]!=curr){
                    return false;
                }
            }
        }
        curr = arr[0][y-1];
        c=curr;
        looper(i,0,x){
            looper(j,y-temp,y){
                if(arr[i][j]!=curr){
                    return false;
                }
            }
        }
        if(a==b | b==c | a==c){
            return false;
        }
        return true;
    }
}
    
int32_t main(){
    int x,y;cin>>x>>y;
    vector<string> arr;
    looper(i,0,x){
        string s;cin>>s;
        arr.pb(s);
    }
    bool ans1 = ifHorizontal(x,y,arr);
    if(ans1){
        cout<<"YES"<<endl;
    }else{
        ans1 = ifVertical(x,y,arr);
        if(ans1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}