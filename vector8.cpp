///total no of pairs whose sum equal to given value x
#include<iostream>
#include<vector>

using namespace std;
int main(){
    int x;
    cout<<"enter the no";
    cin>>x;
    int sum=0;
    vector<int>arr(5);
    for(int i=0;i<5;i++){
        cin>>arr[i];

    }
    for(int j=0;j<arr.size();j++){
        for(int k=arr[j+1];k<arr.size();k++){
            if(x==(arr[j]+k)){
                cout<<k<<arr[j]<<endl;
                sum++;

            }
        }
    }
    cout<<sum;
    
}
