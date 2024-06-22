//find the element bet sum of the elements at even and sum of the elements at odd
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(6);
    int even=0;
    int odd=0;

    for(int i=0;i<arr.size();i++){
        cin>>arr[i];


    }
    for(int j=0;j<arr.size();j++){
        if(j%2==0){
            even+=arr[j];


        }
        else{
            odd+=arr[j];

        }
    }
   int dif=even-odd;
   cout<<dif;


}