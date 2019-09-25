#include <iostream>
#include <string>
using namespace std;
 
string Replace (string &s)
{
    int i=0;
    while(s[i])
    {        
        if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') s[i]+=32;        
        i++;
        } 
    return s;
}
 
int main()
{
    string s;
    s="LOREM ipsum DOLOR sit AmeT" ;
    Replace(s);
    if (s=="LoReM ipsum DoLoR sit ameT")
    {
        cout<<"correctly"<<endl;
        }
    else
    {
        cout<<"uncorectly"<<endl;
        }

    s="" ;
    Replace(s);
    if (s=="")
    {
        cout<<"correctly"<<endl;
        }
    else
    {
        cout<<"uncorectly"<<endl;
        }

    s="LOREM ipsum DOLOR sit AmeT" ;
    Replace(s);
    if (s=="LoReM ipsum DoLoR sit ameT")
    {
        cout<<"correctly"<<endl;
        }
    else
    {
        cout<<"uncorectly"<<endl;
        }

system("pause");
return 0;
}