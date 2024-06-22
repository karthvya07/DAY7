//count the no ofelements strictly greater than value x
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int ele;
    cout<<"element is";
    cin>>ele;
    int count=0;
    vector<int>v(5);

    for(int i=0;i<v.size();i++){
        cin>>v[i];

    }
    for(int j=0;j<v.size();j++){
        if(v[j]>ele){
            count++;

        }
    }
    cout<<count;


}