//check if the given array is sortd or not 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);
    bool sortedd=true;

    for(int i=0;i<v.size();i++){
        cin>>v[i];

    }
    for(int j=1;j<v.size();j++){
        if(v[j]<=v[j-1]){
        sortedd=false;

        }
        
        
    }
    cout<<sortedd;
    
}
