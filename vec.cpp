#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(7);
    for(int i=0;i<7;i++){
        cin>>arr[i];

    }
    for(int i=0;i<7;i++){
        for(int j=arr[i+1];j<arr.size();j++){
            if(i!=j){
                cout<<"not repeated"<<arr[i]<<endl;
            }
          
        }
    }
}