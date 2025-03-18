#include<iostream>
#include<climits>
using namespace std;
int printArray(int arr[],int n,int index,int min){
    if(index == n){
        return min;
    }
    if(min>arr[index]) min = arr[index];
    return printArray(arr,n,index+1,min);
}
int main(){
    int arr[5] = {877,1,105,0,2};
    int n=5;
    int min = INT_MAX;
    min = printArray(arr,n,0,min);
    cout<<min;
}
