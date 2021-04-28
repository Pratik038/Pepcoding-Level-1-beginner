#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int s,int mid,int e){
    int n1 = mid-s+1;
    int n2 = e-mid;
    int L[n1],R[n2];
	cout<<"Merging these two arrays\n";
	cout<<"left array -> ";
	for(int i=0;i<n1;i++)
	    L[i] = a[i+s];
	for(int i=0;i<n1;i++)
	    cout<<L[i]<<" ";
	cout<<endl;
	cout<<"right array -> ";
	for(int i=0;i<n2;i++)
	    R[i] = a[mid+1+i];
	for(int i=0;i<n2;i++)
	    cout<<R[i]<<" ";
	cout<<endl;
	int i = 0;
    int j = 0;
    int k = s;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k++] = L[i++];
        }
        else {
            a[k++] = R[j++];
        }
    }
 
    while (i < n1) {
        a[k++] = L[i++];
    }
 
    while (j < n2) {
        a[k++] = R[j++];
    }
}
void mergesort(int a[],int s,int e){
	if(s>=e)
		return ;
	int mid=(s+e)/2;
	mergesort(a,s,mid);
	mergesort(a,mid+1,e);
	merge(a,s,mid,e);
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    mergesort(a,0,n-1);
    cout<<"Sorted Array -> ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}