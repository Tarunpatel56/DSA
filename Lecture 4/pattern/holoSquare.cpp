#include <iostream>

using namespace std;
int main(){
    int r=10;
    int c=7;
    
    for (int i=0;i<r;i=i+1)
    {
        for(int j=0; j<c; j=j+1)
        {
            if (i==0||i==r-1){
                cout<<"* ";
            }else{
                if(j==0||j==c-1){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }

        }
        cout<<endl;
    }
    return 0;
}