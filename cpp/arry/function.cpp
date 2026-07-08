#include <iostream>

using namespace std;
int printArray(int arr[],int size){
    for (int index = 0; index <= size; index++)
    {
        cout<<arr[index]<<"";
    }
    
}
int main(){
    int arr[]={10,50,54,12,36,36};
    int size = 6;
    printArray(arr,size);
    
    return 0;
}