///vector array 
#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>varr(5);
    cout<<"size"<<varr.size()<<endl<<"capacity"<<varr.capacity()<<endl;
    varr.push_back(2);
    cout<<"size"<<varr.size()<<endl<<"capacity"<<varr.capacity()<<endl;
    varr.push_back(3);
    cout<<"size"<<varr.size()<<endl<<"capacity"<<varr.capacity()<<endl;
    varr.push_back(4);

    //for loop
    for(int i=0;i<varr.size();i++){
        cout<<varr[i]<<endl;

    }


    }



   


