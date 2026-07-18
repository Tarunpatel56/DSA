#include <iostream>

using namespace std;
int main(){
    
    int i;
    int max =1;
    int secondmax =1;
    
    int arr[5]={5,9,6,7,4};

    for (int i=1;i<=4;i++)
    {
            if (arr[i]>max)
          {
             max= arr[i];}
           else if (arr[i]>secondmax && arr[i]!= max )
        {secondmax = arr[i];
           }

     

    }
    cout <<"first larget "<<max;
    cout <<secondmax;

  
  
    //     int n;
    // int i=1;

    // cin>>n;
    // while (i<=n)
    // {
    //     if (i%2 == 0){
    //         cout<<i<<endl;
            
    //     }
    //     i++;
    // }
    

    return 0;
}