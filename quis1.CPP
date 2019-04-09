#include <iostream.h>
#include <conio.h>

main()
{
char nama[30], jurusan[20];
float nk,nt1,nt2,nt3,nm,nq,tnt,na,nf;
cout<<"program hitung nilai akhir "<<endl;
cout<<"nama siswa :";cin>>nama;
cout<<"jurusan :";cin>>jurusan;
cout<<"nilai kehadiran :";cin>>nk;
cout<<"nilai tugas 1 :";cin>>nt1;
cout<<"nilai tugas 2 :";cin>>nt2;
cout<<"nilai tugas 3 :";cin>>nt3;
cout<<"nilai mid :";cin>>nm;
cout<<"nilai quis :";cin>>nq;
cout<<"nilai final :";cin>>nf;
tnt=(nt1+nt2+nt3)/3;
na=(0.2*nk)+(0.2*tnt)+(0.2*nm)+(0.2*nq)+(0.2*nf);
cout<<"siswa yang bernama "<<nama<<endl;
cout<<"jurusan"<<jurusan<<endl;
cout<<"memperoleh nilai akhir :"<<na<<endl;
getch();
}

