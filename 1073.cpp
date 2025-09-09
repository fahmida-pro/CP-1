#include<iostream>
#include<cmath>
using namespace std;
int main()
{
         int N;
         cin>>N;
         for(int i=2; i<=N; i+=2)
         {
            int r=i*i;
            cout<<i<<" ^2 = "<< r<<endl;
         }
         return 0;
}
