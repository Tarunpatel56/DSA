#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter your number";
    cin>>num;
    int rem , ans =0; 
    int mul=1;

    while (num>0)

    {
        rem= num%2;
        num = num/2;
        ans = rem*mul+ans;
        mul = mul*10;
    }
    cout<<ans;
 
    
    return 0;
}