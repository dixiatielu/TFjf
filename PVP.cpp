#include "cstdio"
#include "conio.h"
#include "algorithm"
#include "windows.h"
#define reg register
#define IL inline
#define read(x) scanf("%d",&x)
using namespace std;
int step;
int demox[5007][5];
char demo[5007][70][70];
char mp[200][200];
int fi[200][200];
char xt1[5]={'-','X','X','-','-'};
int x1=2;
char xt2[5]={'-','X','X','-','-'};
int x2=2;
int lc1=-35,lc2=-35;
int a1,a2,b1,b2;
// $->x add
// @->player 1
// &->player 2
// .->way
// *->fire
// #->wall
//
int n,m;
IL void run()
{
	step++;
	lc1--;
	lc2--;
	register int i,j;
	for(i=1;i<=m+2;i++)
	{
		printf("N");
	}
	printf("\nN");
	demox[step][1]=x1;
	demox[step][2]=lc1;
	demox[step][3]=x2;
	demox[step][4]=lc2;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(mp[i][j]=='*')
			{
				if(fi[i][j]==1)
				{
					mp[i][j]='.';
				}
				fi[i][j]--;
			}
			printf("%c",mp[i][j]);
			demo[step][i][j]=mp[i][j];
		}
		printf("N\nN");
	}
	for(i=1;i<=m+1;i++)
	{
		printf("N");
	}
	reg char p=getch();
	if(p=='w' && a1>1)
	{
		if(mp[a1-1][b1]=='.' || mp[a1-1][b1]=='*')
		{
			mp[a1-1][b1]='@';
			mp[a1][b1]='.';
			a1--;
			return;
		}
		if(mp[a1-1][b1]=='$')
		{
			if(x1<=3)
			{
				x1++;
				xt1[x1]='X';
			}
			mp[a1-1][b1]='@';
			mp[a1][b1]='.';
			a1--;
			return;
		}
	}
	if(p=='s' && a1<n)
	{
		if(mp[a1+1][b1]=='.' || mp[a1+1][b1]=='*')
		{
			mp[a1+1][b1]='@';
			mp[a1][b1]='.';
			a1++;
			return;
		}
		if(mp[a1+1][b1]=='$')
		{
			if(x1<=3)
			{
				x1++;
				xt1[x1]='X';
			}
			mp[a1+1][b1]='@';
			mp[a1][b1]='.';
			a1++;
			return;
		}
	}
	if(p=='a' && b1>1)
	{
		if(mp[a1][b1-1]=='.' || mp[a1][b1-1]=='*')
		{
			mp[a1][b1-1]='@';
			mp[a1][b1]='.';
			b1--;
			return;
		}
		if(mp[a1][b1-1]=='$')
		{
			if(x1<=3)
			{
				x1++;
				xt1[x1]='X';
			}
			mp[a1][b1-1]='@';
			mp[a1][b1]='.';
			b1--;
			return;
		}
	}
	if(p=='d' && b1<m)
	{
		if(mp[a1][b1+1]=='.' || mp[a1][b1+1]=='*')
		{
			mp[a1][b1+1]='@';
			mp[a1][b1]='.';
			b1++;
			return;
		}
		if(mp[a1][b1+1]=='$')
		{
			if(x1<=3)
			{
				x1++;
				xt1[x1]='X';
			}
			mp[a1][b1+1]='@';
			mp[a1][b1]='.';
			b1++;
			return;
		}
	}
//************************************
//************************************
//************************************
	if(p=='8' && a2>1)
	{
		if(mp[a2-1][b2]=='.' || mp[a2-1][b2]=='*')
		{
			mp[a2-1][b2]='&';
			mp[a2][b2]='.';
			a2--;
			return;
		}
		if(mp[a2-1][b2]=='$')
		{
			if(x2<=3)
			{
				x2++;
				xt2[x2] = 'X';
			}
			mp[a2-1][b2]='&';
			mp[a2][b2]='.';
			a2--;
			return;
		}
	}
	if(p=='5' && a2<n)
	{
		if(mp[a2+1][b2]=='.' || mp[a2+1][b2]=='*')
		{
			mp[a2+1][b2]='&';
			mp[a2][b2]='.';
			a2++;
			return;
		}
		if(mp[a2+1][b2]=='$')
		{
			if(x2<=3)
			{
				x2++;
				xt2[x2] = 'X';
			}
			mp[a2+1][b2]='&';
			mp[a2][b2]='.';
			a2++;
			return;
		}
	}
	if(p=='4' && b2>1)
	{
		if(mp[a2][b2-1]=='.' || mp[a2][b2-1]=='*')
		{
			mp[a2][b2-1]='&';
			mp[a2][b2]='.';
			b2--;
			return;
		}
		if(mp[a2][b2-1]=='$')
		{
			if(x2<=3)
			{
				x2++;
				xt2[x2] = 'X';
			}
			mp[a2][b2-1]='&';
			mp[a2][b2]='.';
			b2--;
			return;
		}
	}
	if(p=='6' && b2<m)
	{
		if(mp[a2][b2+1]=='.' || mp[a2][b2+1]=='*')
		{
			mp[a2][b2+1]='&';
			mp[a2][b2]='.';
			b2++;
			return;
		}
		if(mp[a2][b2+1]=='$')
		{
			if(x2<=3)
			{
				x2++;
				xt2[x2] = 'X';
			}
			mp[a2][b2+1]='&';
			mp[a2][b2]='.';
			b2++;
			return;
		}
	}
//************************************
//************************************
//************************************
	if(p=='e' && lc1<=0)
	{
		lc1+=5;
		if((a1==a2 && (((b1-b2)==1) || ((b1-b2)==-1))) || (b1==b2 && (((a1-a1)==1) || ((a1-a2)==-1))))
		{
			x2--;
			xt2[x2+1]='-';
		}
		if(a1>1)
		{
			if(mp[a1-1][b1]!='%')
			{
				mp[a1-1][b1]='*';
				fi[a1-1][b1]=3;
			}
		}
		if(a1<n)
		{
			if(mp[a1+1][b1]!='%')
			{
				mp[a1+1][b1]='*';
				fi[a1+1][b1]=3;
			}
		}
		if(b1>1)
		{
			if(mp[a1][b1-1]!='%')
			{
				mp[a1][b1-1]='*';
				fi[a1][b1-1]=3;
			}
		}
		if(b1<m)
		{
			if(mp[a1][b1+1]!='%')
			{
				mp[a1][b1+1]='*';
				fi[a1][b1+1]=3;
			}
		}
	}
	if(p=='q' && lc1<=0)
	{
		swap(a1,a2);
		swap(b1,b2);
		mp[a1][b1]='@';
		mp[a2][b2]='&';
		lc1+=120;
	}
	if(p=='9' && lc2<=0)
	{
		swap(a1,a2);
		swap(b1,b2);
		mp[a1][b1]='@';
		mp[a2][b2]='&';
		lc2+=120;
	}
	if(p == '7' && lc2<=0)
	{
		lc2+=5;
		if((a1==a2 && (((b1-b2)==1) || ((b1-b2)==-1))) || (b1==b2 && (((a1-a1)==1) || ((a1-a2)==-1))))
		{
			x1--;
			xt1[x1+1]='-';
		}
		if(a2>1)
		{
			if(mp[a2-1][b2]!='%')
			{
				mp[a2-1][b2]='*';
				fi[a2-1][b2]=3;
			}
		}
		if(a2<n)
		{
			if(mp[a2+1][b2]!='%')
			{
				mp[a2+1][b2]='*';
				fi[a2+1][b2]=3;
			}
		}
		if(b2>1)
		{
			if(mp[a2][b2-1]!='%')
			{
				mp[a2][b2-1]='*';
				fi[a2][b2-1]=3;
			}
		}
		if(b2<m)
		{
			if(mp[a2][b2+1]!='%')
			{
				mp[a2][b2+1]='*';
				fi[a2][b2+1]=3;
			}
		}
	}
}
IL void did()
{
	while(1)
	{
		system("cls");
		printf("NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN\n");
		printf("N Player1's blood:%d NNNNNNNN Player2's blood:%d N   step:%d\n",x1,x2,step);
		printf("N      +%c%c%c%c+   %d                 +%c%c%c%c+   %d   N\n",xt1[1],xt1[2],xt1[3],xt1[4],-lc1,xt2[1],xt2[2],xt2[3],xt2[4],-lc2);
		printf("NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN\n");
		run();
		if(x2==0)
		{
			MessageBox(NULL,"Player1 wins","*",MB_OK|MB_ICONINFORMATION);
			return;
		}else if(x1==0)
		{
			MessageBox(NULL,"Player2 wins","*",MB_OK|MB_ICONINFORMATION);
			return;
		}
	}
}
IL void input()
{
	read(n);
	read(m);
	read(a1);
	read(b1);
	read(a2);
	read(b2);
	getchar();
	reg int i,j;
	reg double nowprocess;
	printf("The map is loading\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%c",&mp[i][j]);
		}
		scanf("\n");
		printf("The map is loading... %.2lf\%",i / n * 100.00);
	}
	system("cls");
    printf("NNNNNNNN\n");
    printf("NX-----N\n");
    printf("NNNNNNNN\n");
	Sleep(300);
	system("cls");
	printf("The map is loading\n");
	printf("NNNNNNNN\n");
	printf("NXX----N\n");
	printf("NNNNNNNN\n");
	Sleep(300);
	system("cls");
	printf("The map is loading\n");
	printf("NNNNNNNN\n");
	printf("NXXX---N\n");
	printf("NNNNNNNN\n");
	Sleep(300);
	system("cls");
	printf("The map is loading\n");
	printf("NNNNNNNN\n");
	printf("NXXXX--N\n");
	printf("NNNNNNNN\n");
	Sleep(300);
	system("cls");
	printf("The map is loading\n");
	printf("NNNNNNNN\n");
	printf("NXXXXX-N\n");
	printf("NNNNNNNN\n");
	Sleep(300);
	system("cls");
	printf("The map is loading\n");
	printf("NNNNNNNN\n");
	printf("NXXXXXXN\n");
	printf("NNNNNNNN\n");
	Sleep(300);
	system("cls");
	printf("The map is ready\n");
	Sleep(700);
	system("cls");
	mp[a1][b1]='@';
	mp[a2][b2]='&';
}
/*
TestMap
5 8 1 1 1 8
........
........
..###...
...$#...
....#...
.
*/
/*
*/
int main()
{
    system("start randomMap.exe");
    Sleep(1000);
	reg int pd;
	reg int i,j,k;
	freopen("pvp.nmzl","r",stdin);
	input();
	MessageBox(NULL,"地图加载完毕\n\n新手提示:\n左上角显示玩家血量及法力值（每次操作增加1）\nPlayer1:@\n	使用WASD移动\n	E使用攻击技能(消耗5法力，伤害1)\n	Q使用换位技能\nPlayer2:&\n	使用8456移动\n	7使用攻击技能(消耗5法力，伤害1)\n	9使用换位技能\n地图：\n	#代表可使用技能破坏的墙\n	%代表不可破坏的墙\n	$代表回血丸（每次回血一滴，每人最多4滴血）\n	.代表路\n","*",MB_OK|MB_ICONINFORMATION);
	did();
	reg int pppddd = MessageBox(NULL,"你想观看游戏回放吗？\nDo you want to watch demo?","*",MB_YESNO|MB_ICONQUESTION);
	if(pppddd == 7)
    {
        return 0;
    }
	freopen("mmp.demo","w",stdout);
	printf("%d %d %d\n",m,n,step);
	for(i=1;i<=step;i++)
	{
		printf("%d %d %d %d\n",demox[i][1],demox[i][2],demox[i][3],demox[i][4]);
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=m;k++)
			{
				printf("%c",demo[i][j][k]);
			}
			printf("\n");
		}
	}
	system("start demoplayer.exe");
	return 0;
}
