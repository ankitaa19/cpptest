#include<iostream>
using namespace std;
int main(){

    int n,a=0;
    cout<<"Enter a number";
    cin>>n;
    //if number is equal to 1 or 0 it will print this
    if(n==0 || n==1)
    {
        cout<<"Number is not prime";
    }
    else
    //for number other than 0 and 1 it will check here
    {
      for(int i=2; i<n; i++)
      {
        
        if(n%i==0)
        {
        cout<<"Number is not prime";
        a=1;
        break;
        }
      }
      if(a==0)
      {
        cout<<"Number is prime";
        }

        
    }
     return 0;
}    
