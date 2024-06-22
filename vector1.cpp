//vectoe array by taking an input from user 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;

    for(int i=0;i<5;i++){
        int element;
       cin>>element;
       v.push_back(element);
       


    }
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<endl;
        
    }
    v.insert(v.begin()+2,7);

    for(int ele:v){
        cout<<ele;
    }



}