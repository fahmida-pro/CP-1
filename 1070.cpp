#include<iostream>
using namespace std;
int main()
{
         int X;
         cin>>X;
         if(X%2==0){
                  X=X+1;
         }
         for(int i=1;i<=6;i++)
         {
                           cout<<X<<endl;
                           X=X+2;

         }
         return 0;

}
