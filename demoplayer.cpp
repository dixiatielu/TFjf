#include <cstdio>
#include <windows.h>
#include <conio.h>
#define reg register
#define IL inline
using namespace std;
int demox[5007][5];
char demo[5007][70][70];
int main()
{
	freopen("mmp.demo","r",stdin);
	reg int n,m,step;
	reg int i,j,k;
	scanf("%d%d%d",&m,&n,&step);
	getchar();
	for(i=1;i<=step;i++)
	{
		scanf("%d %d %d %d\n",&demox[i][1],&demox[i][2],&demox[i][3],&demox[i][4]);
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=m;k++)
			{
				scanf("%c",&demo[i][j][k]);
			}
			scanf("\n");
		}
	}
	printf("Demo is ready\npress any key to start");
	getch();
	for(i=1;i<=step;i++)
	{
		system("cls");
		printf("N Player1:%d-%d N Player2:%d-%d N step:%d\n",demox[i][1],demox[i][2],demox[i][3],demox[i][4],i);
		for(j=1;j<=m+2;j++)
		{
			printf("N");
		}
		printf("\n");
		for(j=1;j<=n;j++)
		{
			printf("N");
			for(k=1;k<=m;k++)
			{
				printf("%c",demo[i][j][k]);
			}
			printf("N\n");
		}
		for(j=1;j<=m+2;j++)
		{
			printf("N");
		}
		Sleep(250);
	}
	return 0;
}
