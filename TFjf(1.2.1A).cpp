#include "cstdio"
#include "cstdlib"
#include "cstring"
#include "cmath"
#include "queue"
#include "iostream"
#include "algorithm"
#include "windows.h"
#include "ctime"
#define read(x) scanf("%d",&x)
using namespace std;
const int N=1e4+4;
char blog[2000][20];
void sT(char *url)
{
	register char buffer[100]={0};
	sprintf(buffer,"start www.luogu.org/problemnew/solution/%s",url);
	system(buffer);
}
void Blog(char *bl)
{
	register char buffer[100]={0};
	sprintf(buffer,"start www.luogu.org/blog/%s/#",bl);
	system(buffer);
}
void tou()
{
	system("cls");
	printf("############################################\n");
	printf("####   正式版    #自动AC机#    1.2.1A   ####\n");
	printf("############################################\n若发现异常，请联系开发蒟蒻\nQQ:1198517275/1397749594\n\n\n");
}
void tj()
{
	register char tnum[20];
	printf("\n请输入题目PID(目前只支持洛谷题目)\n(PID如P1000,UVA100,AT25,SP1,CF1A等)\n");
	cin>>tnum;
	MessageBox(NULL, "确定网络连接良好后点击", "TFjf-1.2.1A", MB_OK|MB_ICONINFORMATION);
	sT(tnum);
}
void add_into_us()
{
	MessageBox(NULL,"Welcome to Team_TFjf","TFjf-1.2.1A",MB_OK|MB_ICONINFORMATION);
	system("start https://www.luogu.org/team/show?teamid=19332");
}
void remainn()
{
	//strcpy(blog[1000],"");
	strcpy(blog[1001], "Wa-derfulAnswer");
	strcpy(blog[1002],"dxtl");
	strcpy(blog[1003],"WDNMDZZGK");
	strcpy(blog[1004],"SeiyuYuri");
	strcpy(blog[1005],"zhanghuaiNB");
	//strcpy(blog[1006],"");
	strcpy(blog[1007],"f1647736291");
	strcpy(blog[1008],"2077-0");
	strcpy(blog[1009],"user32328");
	strcpy(blog[1010],"juruo1111");
	//strcpy(,"");
	//strcpy(,"");
	//strcpy(,"");
	//strcpy(,"");
	//strcpy(,"");
}
int bloglist(int x)
{
	register int fanye;
	if(x==0)
	{
		MessageBox(NULL,"   >.<\n没有上一页啦！\n x.x | qwq","TFjf-1.2.1A",MB_OK|MB_ICONWARNING);
		return 1;
	}else if(x==1)
	{
		fanye = MessageBox(NULL, "page 1\n此表为随机排序\n侯智航 -> 1001\n彭春林 -> 1002\n廖思齐 -> 1003\n骆益辉 ->1004\n张淮  -> 1005\n填加请联系开发者\n点击是翻到上一页\n点击否翻到下一页\n点击取消退出此表", "TFjf-1.2.1A", MB_YESNOCANCEL|MB_ICONINFORMATION);
		if(fanye==6)
		{
			return -1;
		}else if(fanye==7)
		{
			return 1;
		}else
		{
			return 0;
		}
	}else if(x==2)
	{
		fanye = MessageBox(NULL, "page 2\n此表为随机排序\n胡星池 -> 1006(暂未开通)\n许倬钒 -> 1007\n肖经炟 -> 1008\n蔡昊洋 -> 1009\n汪瑞祥 -> 1010\n填加请联系开发者\n点击是翻到上一页\n点击否翻到下一页\n点击取消退出此表", "TFjf-1.2.1A", MB_YESNOCANCEL|MB_ICONINFORMATION);
		if(fanye==6)
		{
			return -1;
		}else if(fanye==7)
		{
			return 1;
		}else
		{
			return 0;
		}
	}else
	{
		MessageBox(NULL,"   >.<\n没有下一页啦！\n x.x | qwq","TFjf-1.2.1A",MB_OK|MB_ICONWARNING);
		return -1;
	}
}
void blogsee()
{
	register int page=1;
	while(1)
	{
		register int rem;
		rem=page;
		page+=bloglist(page);
		if(rem==page)
		{
			return;
		}
	}
}
void bk()
{
	register int tz;
	printf("请输入跳转码（跳转码帮助请输入0)\n");
	read(tz);
	while(true)
	{
		tou();
		if(tz==0)
		{
			blogsee();
			printf("请输入跳转码(跳转码帮助请输入0)\n");
			read(tz);
		}else
		{
			break;
		}
	}
	MessageBox(NULL, "确定网络连接良好后请点击确定\n\n\n\n如果已经打开默认浏览器，请在默认浏览器中查看", "TFjf-1.2.1A", MB_OK);
	Blog(blog[tz]);
}
void start()
{
	system("mode con cols=44 lines=20");
	system("color db");
	tou();
	MessageBox(NULL,"欢迎来到TFjf-JKF\n\n开发人员为俩蒟蒻\n界面不好请谅解\n","TFjf-1.2.1A",MB_OK|MB_ICONINFORMATION);
	register int pdnml;
	register int pd;
	pd=MessageBox(NULL,"Do you want to join our oi team->Tfjf?","TFjf-1.2.1A",MB_YESNO|MB_ICONQUESTION);
	if(pd==6)
	{
		add_into_us();
	}
	pdnml=MessageBox(NULL,"是否跳转官网\n","TFjf-1.2.1A",MB_YESNO|MB_ICONQUESTION);
	if(pdnml==6)
	{
		system("start https://limonhans.github.io");
	}
}
void close_it()
{
	register int pdddd;
	pdddd=MessageBox(NULL, "Do you want to exit the program?\n(Click cancel to enter a special game)", "TFjf-1.2.1A", MB_YESNOCANCEL|MB_ICONQUESTION);
	if(pdddd==6)
	{
		MessageBox(NULL, "Good bye", "TFjf-1.2.1A", MB_OK|MB_ICONINFORMATION);
		exit(0);
	}else if(pdddd==2)
	{
		system("start TCS.exe");
		close_it();
	}
}
void mmain()
{
	MessageBox(NULL, "由于技术原因，下面的操作可能会返回控制台进行\n如果发现不能继续程序，请返回控制台看看", "TFjf-1.2.1A", MB_OK|MB_ICONINFORMATION);
	while(true)
	{
		register int pdd;
		pdd=MessageBox(NULL, "是否跳转题解（点击否则跳转博客）", "TFjf-1.2.1A", MB_YESNO|MB_ICONQUESTION);
		if(pdd!=7)
		{
			tj();
		}else
		{
			bk();
		}
		MessageBox(NULL, "浏览完此页面后请点击确定", "TFjf-1.2.1A", MB_OK|MB_ICONINFORMATION);
		register int pddd;
		pddd=MessageBox(NULL, "继续查询（YES）/结束程序（NO）", "TFjf-1.2.1A", MB_YESNO|MB_ICONQUESTION);
		if(pddd==7)
		{
			close_it();
		}
	}
}
int main()
{
	start();
	remainn();
	mmain();
	return 0;
}
