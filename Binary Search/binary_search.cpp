#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<endl<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<endl<<"Enter the target value : "<<endl;
    cin>>target;
    int low = 0;
    int high = n-1;
    int mid;
    bool flag = false;
    while(low<=high){
        mid = low+(high-low)/2;
        if(arr[mid] == target){
            flag = true;
            break;
        }
        else if(arr[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(flag){
        cout<<"Element found at "<<mid<<" Index"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}
