#include<iostream>
using namespace std;
int main(){
    int n = 4;

    for (int i = 0; i < n;  i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {// spaces
            cout<<" ";
        }
        //star print 
        cout<<"*";
        
       //star print 
       if (i != 0)
       {
        for (int k = 0; k < 2*i-1; k++)
        {
           cout<<" ";
        }
        cout<<"*";
       }
       
        cout<<endl;
    }
    
}