//find the las occurance of an element x in an array (looping from start)
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>array(7);
    int ele;
    cout<<"ele";

    cin>>ele;
    int last;

    for(int i=0;i<7;i++){
        cin>>array[i];


    }
    for(int num=0;num<array.size();num++)
    {
      if(array[num]==ele){
        last=num;

      }
     


        

    }
 cout<<"last occurance"<<last<<" "<<endl;
  

}