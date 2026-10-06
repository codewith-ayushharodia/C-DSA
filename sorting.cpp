#include <bits/stdc++.h>
using namespace std;

vector<int>v1 = {23,4,65,87,68,9,5646,3,523,4,232};
void sel_sort(){  
  //selection sort
  
  for(int i = 0;i<v1.size();i++){
    int a = i;
    for(int c = i+1;c<=v1.size()-1;c++){
      if(v1[a]>v1[c]){
        a = c;
      }
    }
    swap(v1[i],v1[a]);
    
  }
  for(int x:v1){
    cout<<x<<" ";
  }
}
void bub_sort(){
  //bubble sort
  
  for(int i = v1.size()-1;i>=1;i--){
    for(int j = 0;j<=i-1;j++){
      if(v1[j]>v1[j+1]){
        swap(v1[j],v1[j+1]);
      }
    }
  }
  for(int x:v1){
    cout<<x<<" ";
  }
}
void ins_sort(){
  //insertion sort
  
  for (int i = v1.size()-1;i<=1;i--){
    int j = i;
    while(j>0 && v1[j-1]>v1[j]){
      swap(v1[j-1],v1[j]);
    }
  }
  for (int x:v1){
    cout<<x<<" ";
  }
}
int main(){
  bub_sort();
  cout<<endl;
  sel_sort();
  cout<<endl;
  ins_sort();
}

