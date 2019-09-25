#include <iostream>
#include <string>
#include <cctype>

using namespace std; 

void countLetters(string inp, int &a, int &e, int &i, int &o, int &u)
{

	for (int c = 0; c < inp.size();c++)
	{
		inp.at(c) = tolower(inp.at(c)); 
                                         
		switch(inp.at(c))
		{
			case 'a': ++a; break;
			case 'e': ++e; break;
			case 'i': ++i; break;
			case 'o': ++o; break;
			case 'u': ++u; break;
		}
	}

}

int main()
{ 
	string inp;
	int a=0, e=0, i=0, o=0, u=0;
    inp="aeeoo";
	countLetters(inp, a,e,i,o,u);
     if ((a==1)&&(e==2)&&(i==0)&&(o==2)&&(u==0))
	{
        cout<<"correctly"<<endl;
    	}
    else
	{
        cout<<"uncorrectly"<<endl;
        }

    a=0, e=0, i=0, o=0, u=0; 
	inp="";
    countLetters(inp, a,e,i,o,u);  
    if (inp=="")
	{
        cout<<"correctly"<<endl;
        }
    else
	{
        cout<<"uncorrectly"<<endl; 
        }
    a=0, e=0, i=0, o=0, u=0; 
    inp="aeiu";
    countLetters(inp, a,e,i,o,u); 
    if ((a==1)&&(e==1)&&(i==1)&&(o==0)&&(u==1))
	{
        cout<<"correctly"<<endl;
    	}
    else
	{
        cout<<"uncorrectly"<<endl;
    	}

	return 0; 
}