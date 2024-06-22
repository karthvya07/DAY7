//find the number of triplet whse sum is equal to the givem value x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter the value ";
    cin>>x;
    int sum=0;

    vector<int>arr(6);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];

    }
    for(int i=0;i<arr.size();i++){
        for(int j=arr[i+1];j<arr.size();j++){
            for(int k=arr[j+1];k<arr.size();k++){
                if(x==(i+j+k)){
                    cout<<i<<j<<k<<endl;
                    sum++;

                }
            }
        }
    }
    cout<<sum;

}
