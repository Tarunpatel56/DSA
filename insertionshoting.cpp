#include <iostream>


using namespace std;
int main(){
  // int arr [5]={5,8,4,9,7};
  int arr[1000];
  int n;
  cout<<"enter your array number ";
  cin>>n;
  cout<<"element in arry";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

for (int i=1 ;i<n;i++)
  {   
    for (int j=i; j>0; j--){
    if(arr[j]<arr[j-1]){
        
        swap(arr[j],arr[j-1]);

    }else break;
  }
 }
  cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
  return 0;

}