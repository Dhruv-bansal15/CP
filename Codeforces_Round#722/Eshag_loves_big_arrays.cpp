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
    int_ t;
    cin>>t;
    while(t--){
        int_ n;
        cin>>n;
        vi arr;
        for(int_ i=0;i<n;i++){
            int_ x;
            cin>>x;
            arr.pb(x);
        }
        int_ count=0;
        int_ min_ele= *min_element(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]>min_ele){
                count++;
            }
        }
        cout<<count<<endl;
        



    }
    
    return 0;
}