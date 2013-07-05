#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
	char cc[100];
	vector<string> vs;
	vector<string>::iterator vsi;

	while(gets(cc))
	{
		if ( *cc == '0' && strlen(cc) == 1 )
		{
			break;
		}
		else
		{
			string s(cc);
			vs.push_back(s);
		}
	}

	char *c = new char[100];    int len;    int i;
	for (vsi = vs.begin(); vsi != vs.end(); ++vsi)
	{
		strcpy(c, vsi->c_str());
		len = strlen(c);
		for(i = 0; i < len/2; ++i)
		{
			if (c[i] != c[len-i-1])
			{
				cout << "NO" << endl;
				break;
			}
			else if(i == (len-1)/2)
				cout << "YES" << endl;
		}
	}
	
	system("pause");
	return 1;
}