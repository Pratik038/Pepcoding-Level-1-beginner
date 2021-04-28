#include <bits/stdc++.h>>
#include <vector>
using namespace std;

vector<int> mergeTwoSortedArrays(vector<int> &A, vector<int> &B)
{
   int i=0,j=0;
   A.push_back(INT_MAX);
   B.push_back(INT_MAX);
   vector<int> v;
   while(i<A.size()-1 and j<A.size()-1){
       if(A[i]<B[j]){
            v.push_back(A[i]);
            i++;
       }
       else{
            v.push_back(B[j]);
            j++;
       }
   }
   return v;
}

void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

void output(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> A(n, 0);
    input(A);

    cin >> m;
    vector<int> B(m, 0);
    input(B);

    vector<int> ans = mergeTwoSortedArrays(A, B);
    output(ans);
    return 0;
}