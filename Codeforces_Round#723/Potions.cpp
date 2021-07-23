#include<bits/stdc++.h>
using namespace std; 
#define int_ long long int
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
int main(){
    pqs negative_potion;
    int_ n;
    cin>>n;
    vi arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.pb(x);
    }
    int_ count=0;
    int_ total=0;
    for(int i=0;i<n;i++){
        int_ x=arr[i];
        total+=x;
        count+=1;
        if(total>=0 & x<0){
            negative_potion.push(x);
        }
        if(total<0){
            if(negative_potion.size()){
                int_ temp= negative_potion.top();
                if (temp<x){
                    total+= abs(temp);
                    count--;
                    negative_potion.pop();
                    negative_potion.push(x);
                }else{
                    total-= x;
                    count--;
                }
            }else{
                total-=x; 
                count--;
            }
        }

    }
    cout<<count<<endl;

    return 0;



}