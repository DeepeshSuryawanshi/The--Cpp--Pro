#include<iostream>>
using namespace std;

int main(){
    int n = 4;
    char ch ='A';
    for (int i = 0; i < n; i++)
    {   
        for (int s = 0; s < i; s++)
        {
            cout<<" ";
        }// print spaces

        for (int j = n - i ; j > 0; j--)
        {
            cout<< ch ;
        }//print number
        cout<<endl;
        ch +=1 ;
    }
    return 0;
}
