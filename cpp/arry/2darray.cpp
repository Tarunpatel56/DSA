#include <iostream>

using namespace std;
int main(){

    // decalre
    // int arr[3][4];
    // initialisation
    int arr[3][4]={{1,2,3,4},
                   {1,4,5,6},
                   {1,5,7,5}
};
         int row =3;
        int col =4;
        for (int row_index = 0; row_index <= row-1; row_index++)
        {
           for (int col_index = 0; col_index <=col-1; col_index++)
           {
            cout << arr[row_index][col_index]<<" ";
           }
           cout<<endl;
           
        }
        
   
    
    return 0;
}