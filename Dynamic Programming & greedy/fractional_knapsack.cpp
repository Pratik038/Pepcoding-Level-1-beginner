#include<bits/stdc++.h>
using namespace std;
struct Item{
    int value;
    int weight;
};
bool comp(Item a,Item b){
    double r1 = (double)a.value/a.weight;
    double r2 = (double)b.value/b.weight;
    return r1>r2;
}
int main(){
    int n; cin>>n;
    int vals[n];
    for(int i=0;i<n;i++) cin>>vals[i];
    int wt[n];
    for(int i=0;i<n;i++) cin>>wt[i];
    
    int cap; cin>>cap;
    
    Item item[n];
    for(int i=0;i<n;i++){
        item[i].value = vals[i];
        item[i].weight = wt[i];
    }
    
    sort(item,item+n,comp);
    
    int curWeight = 0;
    double finalPrice = 0.0;
    
    for(int i=0;i<n;i++){
        
        if(curWeight+item[i].weight <= cap){
            curWeight += item[i].weight;
            finalPrice += item[i].value;
        }else{
            int remWeight = cap - curWeight;
            finalPrice += (double)(item[i].value/(double)item[i].weight)*(double)remWeight;
            break;
        }
    }
    if(round(finalPrice)==finalPrice)
        cout<<setprecision(1)<<fixed<<finalPrice;
    else
        cout<<finalPrice;
}