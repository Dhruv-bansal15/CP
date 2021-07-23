#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include<iostream>
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
    vector<string> arr;
    int n,m,limit;cin>>n>>m>>limit;
    looper(i,0,n){
        string s;cin>>s;
        arr.pb(s);
    }
    map<char, int> freq_of_letters;
    vector<pii> shift_keys;
    looper(i,0,n){
        looper(j,0,m){
            char ch = arr[i][j];
            freq_of_letters[ch]+=1;
            if(ch=='S'){
                shift_keys.pb({i,j});
            }
        }
    }
    // vector<pii> coordinatess;
    int q;cin>>q;
    bool piroty=true;
    string req_made;cin>>req_made;
    string left="";
    looper(i,0,req_made.size()){
        char x = req_made[i];
        if(!freq_of_letters[x]){
            if(islower(x)){
                cout<<-1;
                break;
                piroty=false;
            }else{
                left.pb(x);
            }
        }
    }
    int count=0;
    if(piroty){
        if(shift_keys.size()){
            if(left.size()){
                looper(i,0,left.size()){
                    if(freq_of_letters[tolower(left[i])]){
                        bool milgya=false;
                        looper(j,0,n){
                            looper(k,0,m){
                                char x = arr[j][k];
                                char y = tolower(left[i]);
                                if(x==y){
                                    int diff= INT64_MAX;
                                    int u=0;
                                    bool dhruv=false;
                                    while(u<shift_keys.size()){
                                        double temp = pow(abs(shift_keys[u].ff - j),2) + pow(abs(shift_keys[u].ss - k),2);
                                        temp = sqrt(temp);
                                        if(temp<=limit){
                                            dhruv=true;
                                            break;
                                        } 
                                    }
                                    if(dhruv==false){
                                        count++;
                                    }
                                }
                            }
                        }
                    }else{
                        cout<<-1;
                        return 0;
                    }
                }
                cout<<count;
            }else{
                cout<<0;
            }
        }else if(left.size()){
            cout<<-1;
        }else{
            cout<<0;
        }
    }

    return 0;
}