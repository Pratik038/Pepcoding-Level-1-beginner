#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    
    // write your code here
    int low = 0,high = n-1;
    int floor=0,ceil=0;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid]==data){
            floor = arr[mid];
            ceil = arr[mid];
            break;
        }else if(arr[mid] < data){
            floor = arr[mid];
            low = mid+1;
        }else{
            ceil = arr[mid];
            high = mid-1;
        }
    }
    cout<<ceil<<endl<<floor;
}