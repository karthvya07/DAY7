//find the unique no in array whrer all the  no repeated twice
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    for(int i=0;i<6;i++){
        cin>>arr[i];

    }
    for(int i=0;i<arr.size();i++){
        for(int j=arr[i+1];j<arr.size();j++){
            if(i==j){
                cout<<"repeated no"<<i;

            }
            else{
                cout<<"nonrepeated no"<<i;
            }
        }
    }
}