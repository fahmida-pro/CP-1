#include<iostream>
using namespace std;
int main()
{
         float A,B,C;
         cin>>A>>B>>C;

         float min=((A<B && A<C)?A:(B<A&&B<C)?B:C);
         float max=((A>B&&A>C)?A:(B>A&&B>C)?B:C);
         float mid=(A+B+C)-(max+min);
         float p=mid+ min;

         if(p>max)cout<<"Perimetro = "<<float (max+mid+min)<<endl;
         else cout<<"Area = "<<float (.5*(A+B)*C)<<endl;


         return 0;

}
