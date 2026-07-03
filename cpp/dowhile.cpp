#include <iostream>

using namespace std;
int main(){
    int i=10;
    // for (int i = 0; i < count; i++)
    // {
    //     cout<<i<<"";
    // }
    
    // do while
    // do
    // { cout<<i<<"";
    //     i=i+1;
    //     /* code */
    // } while (i<=5);
    
    // nested loop 
    for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j < 4; j++)
       {
     cout<<"i :"<<i<<" , j :"<<j<<endl;
       }
       
    }
    
    return 0;
}