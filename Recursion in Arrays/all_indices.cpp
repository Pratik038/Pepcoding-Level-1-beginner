#include<bits/stdc++.h>
using namespace std;
void print(int a[],int idx,int x,int n){
	if(idx==n)
		return;
	if(a[idx]==x)
		cout<<idx<<endl;
	print(a,idx+1,x,n);
}
int main()
{	
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int x; cin>>x;
	print(a,0,x,n);
}

								second way :-
							     ------------------

#include<bits/stdc++.h>
using namespace std;
int allIndicesRecursive(int a[],int idx,int x,int n,int output[],int fsf){
    if(idx==n){
        return fsf;
    }
    
    if(a[idx]==x){
        int size = allIndicesRecursive(a,idx+1,x,n,output,fsf+1);
        output[fsf] = idx;
        return size;
    }else{
        int size = allIndicesRecursive(a,idx+1,x,n,output,fsf);
        return size;
    }
}
void allIndices(int a[],int x,int n){
    int output[n];
    int size = allIndicesRecursive(a,0,x,n,output,0);
    if(size==0)
        cout<<endl;
    for(int i=0;i<size;i++)
        cout<<output[i]<<endl;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int x; cin>>x;
    allIndices(a,x,n);
}
