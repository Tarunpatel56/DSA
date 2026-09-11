#include <iostream>

using namespace std;
int main(){
    int arr[6]={5,4,8,9,10,11};
    for (int i=0;i<5;i++){
        int index =i;
        for(int j=i+1;j<6;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
    }
    return 0;
}