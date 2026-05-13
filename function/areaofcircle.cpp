#include <iostream>

using namespace std;
void displayAreaOfCircle(float radius){
    float area = 3.14*radius*radius;
    cout<<"Area of circle ="<<area<<endl;
}
int main(){
    float r;
    cout<<"enter radius";
    cin>>r;
    displayAreaOfCircle(r);
    
    return 0;
}