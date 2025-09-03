#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target;
    cin>>target;
    vector<int> v; 
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==target){
                cout<<i<<j<<endl;
            }
        }
    }
}
