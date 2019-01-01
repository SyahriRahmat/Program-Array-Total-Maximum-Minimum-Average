#include <iostream>
#include <conio.h>
using namespace std;
int array () {
    int i, bil[7],total,max,min;
    float ave;
    for (i=0;i<7;i++){
    cout<<" Masukkan Data Ke- "<<1+i<<" = "; cin>>bil[i];
    }
    cout<<" \nSeluruh Elemen Array = \n";
    total=0;
    min=bil[0];
    max=bil[0];
    for (i=0;i<7;i++){
            cout<<bil[i]<<endl;
    total=total+bil[i];
    if (bil[i] < min ){
            min=bil[i];
    }else if(bil[i] > max){
        max=bil[i];
    }
    }
    ave=total/7;
    cout<< "Jumlah Seluruh Elemen Array          = "<<total<<endl;
    cout<< "Nilai Maximum Seluruh Elemen Array   = "<<max<<endl;
    cout<< "Nilai Minimum Seluruh Elemen Array   = "<<min<<endl;
    cout<< "Nilai Rata-Rata Seluruh Elemen Array = "<<ave<<endl;
}
int main ()
{
    array ();
    getch();
    return 0;
}
