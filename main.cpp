#include <iostream>
using namespace std;
int liczba_testow, n, x, y;

int main()
{
    cin>>liczba_testow;
    while(liczba_testow--)
    {
        cin>>n>>x>>y;
        for (int i=0; i<n; i++)
        {
            if(i%x==0 && i%y!=0)
            {
                cout<<i<<" "<<endl;
            }
        }
    }
    return 0;
}
