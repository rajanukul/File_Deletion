#include<iostream>
#include<windows.h>
#include<string.h>
using namespace std;
int main()
{
    int i=5;
    string s1="yes",s2;
    cout<<"Deleting.......\n";
    while(i>0)
    {
        Beep(500,500);
        i--;
    }
    cout<<"Do u really want to delete reply in yes or NO?\n";
    cin>>s2;
    int x= s1.compare(s2);
    if(x==0)
    {
        cout<<"delete";
        //Now enter file location which u want to delete
        DeleteFile("C:/Users/lenovo/Desktop/abc.txt");
    }
    else
        cout<<"safe";
    return 0;
}
