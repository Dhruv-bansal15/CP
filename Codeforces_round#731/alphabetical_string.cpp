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
        string s;cin>>s;
        int ascii = 97;
        int n=s.size();
        if(n==1){
            if(s=="a"){
                cout<<"Yes"<<endl;
                continue;
            }else{
                cout<<"No"<<endl;
                continue;
            }
        }
        int indexx=0;
        bool done=false;
        looper(i,0,n){
            if(s[i]=='a'){
                indexx=i;
                done=true;
                break;
            }
        }
        if(done==false){
            cout<<"No"<<endl;
            continue;
        }
        int i=indexx,j=indexx+1;
        int count=0;
        done=true;
        bool hot=false;
        while(count<n){

            // cout<<i<<" "<<j<<endl;
            hot=false;
            
            char zz = char(ascii);
            // cout<<zz<<endl;
            if(i>=0){
                if(s[i]== zz){
                    count++;
                    hot=true;
                    i--;
                }
            }
            if(j<n & hot==false){
                if(s[j]==zz){
                    count++;
                    hot=true;
                    j++;
                }
            }
            if(hot==false){
                done=false;
                break;
            }
            ascii++;
            
        }  
        if(done==false){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    } 
    return 0;
}