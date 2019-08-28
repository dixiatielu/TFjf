#include <cstdio>
#include <conio.h>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;
//# -> wall
//. -> way
//$ -> money
//E -> end
char mp[107][107];
bool pt[107][107];
bool mo[107][107];
bool win;
int n,m;
int x,y;
int money,mall,nowdfs;
double score;
int step,stepmin=-1;
inline void dfs(int a,int b,int s)
{
    nowdfs++;
	if(mp[a][b]=='E')
	{
		if(stepmin>=1)
		{
			stepmin=min(stepmin,s);
		}else
		{
			stepmin=s;
		}
		return;
	}
	if(mp[a][b]=='$' && mo[a][b]==0)
	{
		mall++;
		mo[a][b]=1;
	}
	if(a>1 && mp[a-1][b]!='#' && pt[a-1][b]==0)
	{
		pt[a-1][b]=1;
		dfs(a-1,b,s+1);
	}
	if(a<n && mp[a+1][b]!='#' && pt[a+1][b]==0)
	{
		pt[a+1][b]=1;
		dfs(a+1,b,s+1);
	}
	if(b>1 && mp[a][b-1]!='#' && pt[a][b-1]==0)
	{
		pt[a][b-1]=1;
		dfs(a,b-1,s+1);
	}
	if(b<m && mp[a][b+1]!='#' && pt[a][b+1]==0)
	{
		pt[a][b+1]=1;
		dfs(a,b+1,s+1);
	}
	if(nowdfs % 100 == 0)
        printf("X");
}
inline void run()
{
	register int p=getch();
	if((p=='w')&& x>1 && mp[x-1][y]=='.')
	{
		step++;
		mp[x][y]='.';
		mp[x-1][y]='@';
		x--;
	}else if(p=='w' && x>1 && mp[x-1][y]=='$')
	{
		step++;
		mp[x][y]='.';
		mp[x-1][y]='@';
		x--;
		money++;
	}else if(p=='w' && x>1 && mp[x-1][y]=='E')
	{
		step++;
		win=1;
		system("pause");
		return;
	}
	//***********************************************
	if(p=='s' && x<n && mp[x+1][y]=='.')
	{
		step++;
		mp[x][y]='.';
		mp[x+1][y]='@';
		x++;
	}else if(p=='s' && x<n && mp[x+1][y]=='$')
	{
		step++;
		mp[x][y]='.';
		mp[x+1][y]='@';
		x++;
		money++;
	}else if(p=='s' && x<n && mp[x+1][y]=='E')
	{
		step++;
		win=1;
		return;
		x++;
	}
	//**********************************************
	if(p=='a' && y>1 && mp[x][y-1]=='.')
	{
		step++;
		mp[x][y]='.';
		mp[x][y-1]='@';
		y--;
	}else if(p=='a' && y>1 && mp[x][y-1]=='$')
	{
		step++;
		mp[x][y]='.';
		mp[x][y-1]='@';
		y--;
		money++;
	}else if(p=='a' && y>1 && mp[x][y-1]=='E')
	{
		step++;
		win=1;
		return;
	}
	//**********************************************
	if(p=='d' && y<m && mp[x][y+1]=='.')
	{
		step++;
		mp[x][y]='.';
		mp[x][y+1]='@';
		y++;
	}else if(p=='d' && y<m && mp[x][y+1]=='$')
	{
		step++;
		mp[x][y]='.';
		mp[x][y+1]='@';
		money++;
		y++;
	}else if(p=='d' && y<m && mp[x][y+1]=='E')
	{
		step++;
		win=1;
		return;
	}
}
inline void did()
{
	register int i,j;
	while(true)
	{
		run();
		system("cls");
		printf("****************************\n");
		printf(" ��ǰ����:%d\n���鲽��:%d * ��ǰǮ��:%d\n��Ǯ��%d *\n",step,stepmin,money,mall);
		printf("****************************\n");
		for(i=1;i<=m+2;i++)
		{
			printf("*");
		}
		printf("\n");
		for(i=1;i<=n;i++)
		{
			printf("*");
			for(j=1;j<=m;j++)
			{
				printf("%c",mp[i][j]);
			}
			printf("*\n");
		}
		for(i=1;i<=m+2;i++)
		{
			printf("*");
		}
		if(win==1)
		{
		    score = money * 25.0 + (stepmin - step) / 7.0;
			printf("\n��ɹ���\n����ܲ���:%d\n�����Ǯ��:%d\n����ܷ���:%.2lf\n����ܽ��õ��ķ���:%.2lf������",step,money,score,mall * 25 + stepmin / 7.0);
			return;
		}
	}
}
int main()
{
	register int i,j;
	freopen("map.nmsl","r",stdin);
	scanf("%d%d%d%d",&n,&m,&x,&y);
	getchar();
	//printf("%d",n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%c",&mp[i][j]);
		}
		scanf("\n");
	}
	printf("���ڳ�ʼ��\n������:");
	dfs(x,y,0);
	system("cls");
	if(stepmin==-1)
	{
		MessageBox(NULL,"��ͼ���󣬳����˳����������ͼ����ϵ�������޸�!","*",MB_OK|MB_ICONERROR);
		exit(0);
	}
	mp[x][y]='@';
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%c",mp[i][j]);
		}
		printf("\n");
	}
	printf("\n�����������ʼ��Ϸ");
	Sleep(1000);
	did();
	Sleep(7000);
}
