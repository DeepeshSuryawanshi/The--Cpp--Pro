#include<iostream>>
using namespace std;

int main(){
    int n = 5 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i+1; k++)
        {
            cout<<k;
        }
        for (int re = i; re > 0; re--)
        {
            cout<<re;
        }   
        cout<<endl;
    }
    
}
