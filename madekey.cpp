#include "cstdio"
#include "windows.h"
#include "ctime" 
#include "cstdlib"
#include "iostream"
using namespace std;
int main()
{
	freopen("randkey","w",stdout);
	system("mode con cols=25 lines=8");
	srand((int)time(0));
	int i;
	int n;
	int p;
	n=rand()%7+1;
	for(i=1;i<=n;i++)
	{
		p=rand()%51;
		if(p<25)
		{
			printf("%c",p+'a');
		}else
		{
			printf("%c",p-25+'A');
		}
	}
	printf("\n");
	n=rand()%14+1;
	for(i=1;i<=n;i++)
	{
		p=rand()%51;
		if(p<25)
		{
			printf("%c",p+'a');
		}else
		{
			printf("%c",p-25+'A');
		}
	}
	printf("\n");
	system("start closekey.exe");
	return 0;
}
