#include<iostream>
using namespace std;
int main()
{
    int Hstart, Hend, duration;
    cin >> Hstart >> Hend;

    if(Hstart == Hend) {
        duration = 24;
    } else if(Hend > Hstart) {
        duration=Hend - Hstart;
    } else {
        duration=(24 - Hstart)+Hend;
    }

    cout<<"O JOGO DUROU "<<duration<<" HORA(S)"<<endl;
    return 0;
}
