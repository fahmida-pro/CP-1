#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
         int X,Y;
         cin>>X>>Y;

         double price;

         if(X == 1)price=4.00;
         else if(X ==2 )price=4.50;
         else if(X == 3)price=5.00;
         else if(X == 4)price=2.00;
         else if(X == 5)price=1.50;

         cout<<fixed<<setprecision(2);
         cout<<"Total:R$"<< " "<<price*Y<<endl;

         return 0;

}
