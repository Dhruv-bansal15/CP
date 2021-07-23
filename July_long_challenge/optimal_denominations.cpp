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
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(vi arr1, int n)
{
    int result = arr1[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr1[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
int curr,temp=0;
int32_t main(){
    tester{
        int n;cin>>n;
        vi arr;
        looper(i,0,n){
            int x;cin>>x;arr.pb(x);
        }
        vi left,right(n),mid;
        
        looper(i,0,n){
            if(i==0) {left.pb(0);}
            else if(i==1) {left.pb(arr[0]);curr=arr[0];}
            else{
                temp = gcd(curr,arr[i-1]);
                left.pb(temp);
                curr= temp;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(i==n-2) {right[n-2]=arr[n-1];curr=arr[n-1];}
            else{
                temp = gcd(curr,arr[i+1]);
                right[i]=temp;curr=temp;
            }
        }
        int high_gcd=INT64_MIN;
        int index_ = 0;
        looper(i,0,n){
            temp = gcd(left[i],right[i]);
            mid.pb(temp);
            if(temp>high_gcd){
                high_gcd=temp;
                index_=i;
            }else if(temp==high_gcd){
                if(arr[i]>arr[index_]){
                    index_=i;
                }
            }
        }
        int count_notes=0;
        looper(i,0,n){
            if(i!= index_){
                count_notes+= arr[i]/high_gcd;
            }else{
                count_notes+=1;
            }
        }
        cout<<count_notes<<endl;

    }   
    return 0;
}