#include <iostream>
using namespace std;
main()
{
int a[100],i,n,b[100]={0},c[100]={0},k=0,d=0;
cout<<"Kol-vo ocenok, kotoroe poluchil Vasya(elementov v massive):  ";
cin>>n;
cout<<"Vvedite dni(1-31):  ";
for(i=0;i<n;i++)
{
cin>>a[i];
if(a[i]%2==1){b[i]=a[i];k++;}
else {c[i]=a[i];d++;}
}
for(i=0;i<n;i++)
{if(b[i]!=0)
cout<<b[i]<<' ';}
cout<<endl;
for(i=0;i<n;i++)if(c[i]!=0)cout<<c[i]<<' ';
cout<<endl;
cout<<endl;
if(k>d) cout<<"NO";
else cout<<"YES";
}
