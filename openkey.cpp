#include "cstdio"
#include "windows.h"
using namespace std;
char k[107];
char k_all[1300];
char m[1300];
int r[1300];
int num;
int input()
{
	int i;
	gets(k);
	for(i=0;i<=107;i++)
	{
		if(k[i]<='z'&&k[i]>='a')
		{
		}else if(k[i]<='Z'&&k[i]>='A')
		{
			k[i]=k[i]-'A'+'a';
		}else
		{
			num=i;
			break;
		}
	}
	for(i=0;i<=1007;i++)
	{
		k_all[i]=k[i%num];
		//printf("%c",k_all[i-1]);
	}
	gets(m);
	for(i=0;i<=1007;i++)
	{
		if(m[i]<='z'&&m[i]>='a')
		{
		}else if(m[i]<='Z'&&m[i]>='A')
		{
			m[i]=m[i]-'A'+'a';
			r[i]=1;
		}else
		{
			num=i;
			break;
		}
	}
}
int cheak()
{
	int i;
	for(i=0;i<num;i++)
	{
		//printf("%c%c",m[i],k_all[i]);
		m[i]=m[i]-k_all[i]+'a';
		while(1)
		{
			if((m[i]<='z'&&m[i]>='a'))
			{
				break;
			}else if(m[i]>='z')
			{
				m[i]=m[i]-'z'+'a'-'B'+'A';
			}else
			{
				m[i]=m[i]+'z'-'a'+1;
			}
		}
		if(r[i]==1)
		{
			printf("%c",m[i]-'a'+'A');
		}else
		{
			printf("%c",m[i]);
		}
	}
}
int main()
{
	input();
	cheak();
	Sleep(50000); 
	return 0;
}
