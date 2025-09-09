#include<iostream>
using namespace std;
int main()
{
         int x,y,z;
         cin>>x>>y>>z;

         int smallest=((x<y && x<z)?x:(y<x&&y<z)?y:z);
         int largest=((x>y&&x>z)?x:(y>x&&y>z)?y:z);
         int mid=(x+y+z)-(largest+smallest);

         cout<<smallest<<endl<<mid<<endl<<largest<<endl<<" "<<endl<<x<<endl<<y<<endl<<z;

         return 0;

}
