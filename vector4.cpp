//number of occurance 
#include<iostream>
#include<vector>

using namespace std;
int main(){
    int ele;
    cout<<"element is";
    cin>>ele;
    int last=0;

    vector<int>v(5);

    for(int i=0;i<5;i++){
        cin>>v[i];

    }
    for(int j=v.size()-1;j>=0;j++){
        if(v[j]==ele){
            last++;
            break;

        }
    }

}