#include<iostream>>
using namespace std;

int main(){
    int n = 4;
    for (int i = 0; i < n; i++)
    {   
        for (int s = 0; s < i; s++)
        {
            cout<<" ";
        }// print spaces

        for (int j = n - i ; j > 0; j--)
        {
            cout<< i+1 ;
        }//print number
        cout<<endl;   
    }
    return 0;
}
// output
// 1111
//  222
//   33
//    4