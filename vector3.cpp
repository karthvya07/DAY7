//find the no of ccurance of element x (looping from end)
#include<iostream>
#include<vector>


using namespace std;
int main(){
    int ele;
    cout<<"element is";
    cin>>ele;
    int last;



    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];

    }
    for(int j=v.size()-1;j>=0;j--){
        if(v[j]==ele){
            last=v[j];
            break;

            



        }
    }
    cout<<"last"<<last;

}