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
    int first = -1,last=-1;
    int low = 0,high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid]==data){
            first = mid;
            high = mid-1;
        }else if(arr[mid] < data){
            low =mid+1;
        }else
            high = mid-1;
    }
    low=0,high=n-1;
     while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid]==data){
            last = mid;
            low = mid + 1;
        }else if(arr[mid] < data){
            low =mid+1;
        }else
            high = mid-1;
    }
    cout<<first<<endl<<last;
}