#include <iostream>

using namespace std;

int main()
{
int a;
cin>>a;
int i;
bool b=true;
for (i=2; i<a;i++)
{
    if (a%i==0){
        b=false;
        break;
}
}
cout<<b;
return 0;
}
