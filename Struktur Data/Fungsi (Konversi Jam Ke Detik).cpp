#include <iostream>

using namespace std;

int kj(int j,int m,int d)
{
    int K;
    K=(j*360)+(m*60)+d;
    return K;

}
int main()
{
    int jam1,menit1,detik1;

    cout<<"Masukkan jam 1:";cin>>jam1;
    cout<<"masukkan menit 1:";cin>>menit1;
    cout<<"masukkan detik 1:";cin>>detik1;

    cout<<"Jumlah Detik1:"<<kj(jam1,menit1,detik1)<<endl;

    int jam2,menit2,detik2;

    cout<<"masukkan jam 2:";cin>>jam2;
    cout<<"masukkan menit 2:";cin>>menit2;
    cout<<"masukkan detik 2:";cin>>detik2;

    cout<<"Jumlah Detik2:"<<kj(jam2,menit2,detik2)<<endl;


    int Selisih;
    Selisih = kj(jam2,menit2,detik2)- kj(jam1,menit1,detik1);
    cout<<"hasil:"<<Selisih;
    return 0;
}
