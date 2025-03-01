#include<iostream>
using namespace std;
int main(){
    int n = 4;
    
    for (int i = 0; i < n; i++) // outer loop  << iterate a i 
    {
        for (int j = 0; j < i+1; j++) // inner loop print the i value like 1. << "1 "
        {
            cout<< i+1 << " ";
        }
        cout<<endl; // new line
    }
   return 0;
}