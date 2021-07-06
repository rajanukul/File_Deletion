#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int i=5;
    char ch[10];
    cout<<"Deleting.......\n";
    FreeConsole();
    while(i>0)
    {
        Beep(500,500);
        i--;
    }
    cout<<"Do u really want to delete reply in yes or NO?\n";
    cin>>ch;
    if(ch=="y")
    {
        DeleteFile("C:/Users/lenovo/Desktop/abc.txt");
    }
    else
        cout<<"safe";
    return 0;
}
