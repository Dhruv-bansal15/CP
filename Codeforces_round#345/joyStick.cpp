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
    int a,b;cin>>a>>b;
    int count=0;
    bool i,j;
    if(a==1 & b==1){
        cout<<count;
        return 0;
    }

    if(a>b) {j=true;i=false;}
    else{
        i=true;
        j=false;
    }   
    while(true){
        count++;
        if(i==true){
            if(b==2 & a<=2){
                break;
            }else if(b==2 & a>2){
                j=true;
                i=false;
            }
        }
        if(j==true){
            if(a==2 & b<=2){
                break;
            }else if(a==2 & b>2){
                i=true;
                j=false;
            }
        }
        if(i==true){
            a+=1;
            b-=2;
        }else if(j==true){
            b+=1;
            a-=2;
        }
        if(a==0 | b==0) {break;}
        if(a==1){
            i=true;
            j=false;
        }else if(b==1){
            j=true;
            i=false;
        }
    }
    cout<<count;

    return 0;
}