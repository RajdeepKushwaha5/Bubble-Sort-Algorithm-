#include<iostream>
using namespace std;


int main(){
  int arr[1000];
  int n;
 cout<<"Enter size of array: ";
 cin>>n;
 cout<<" Enter elements with space between them:";

  for(int i=0;i<n;i++){
    cin>>arr[i];
    

  }

  for(int j=n-2;j>=0;j--){
    bool swapped=0;
    for(int k=0;k<n-1;k++){
      if(arr[k]>arr[k+1]){
        swapped=1;
       swap(arr[k],arr[k+1]);
      }
      if(swapped==0){
        break;
      }
    }  
  }
  
   for(int l=0;l<n;l++){
    cout<<arr[l]<<" | ";

  }
  
  return 0;
}
