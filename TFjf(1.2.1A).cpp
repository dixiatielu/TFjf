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
	printf("####   ��ʽ��    #�Զ�AC��#    1.2.1A   ####\n");
	printf("############################################\n�������쳣������ϵ�����X�m\nQQ:1198517275/1397749594\n\n\n");
}
void tj()
{
	register char tnum[20];
	printf("\n��������ĿPID(Ŀǰֻ֧�������Ŀ)\n(PID��P1000,UVA100,AT25,SP1,CF1A��)\n");
	cin>>tnum;
	MessageBox(NULL, "ȷ�������������ú���", "TFjf-1.2.1A", MB_OK|MB_ICONINFORMATION);
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
		MessageBox(NULL,"   >.<\nû����һҳ����\n x.x | qwq","TFjf-1.2.1A",MB_OK|MB_ICONWARNING);
		return 1;
	}else if(x==1)
	{
		fanye = MessageBox(NULL, "page 1\n�˱�Ϊ�������\n���Ǻ� -> 1001\n���� -> 1002\n��˼�� -> 1003\n����� ->1004\n�Ż�  -> 1005\n�������ϵ������\n����Ƿ�����һҳ\n����񷭵���һҳ\n���ȡ���˳��˱�", "TFjf-1.2.1A", MB_YESNOCANCEL|MB_ICONINFORMATION);
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
		fanye = MessageBox(NULL, "page 2\n�˱�Ϊ�������\n���ǳ� -> 1006(��δ��ͨ)\n��پ�� -> 1007\nФ���� -> 1008\n����� -> 1009\n������ -> 1010\n�������ϵ������\n����Ƿ�����һҳ\n����񷭵���һҳ\n���ȡ���˳��˱�", "TFjf-1.2.1A", MB_YESNOCANCEL|MB_ICONINFORMATION);
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
		MessageBox(NULL,"   >.<\nû����һҳ����\n x.x | qwq","TFjf-1.2.1A",MB_OK|MB_ICONWARNING);
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
	printf("��������ת�루��ת�����������0)\n");
	read(tz);
	while(true)
	{
		tou();
		if(tz==0)
		{
			blogsee();
			printf("��������ת��(��ת�����������0)\n");
			read(tz);
		}else
		{
			break;
		}
	}
	MessageBox(NULL, "ȷ�������������ú�����ȷ��\n\n\n\n����Ѿ���Ĭ�������������Ĭ��������в鿴", "TFjf-1.2.1A", MB_OK);
	Blog(blog[tz]);
}
void start()
{
	system("mode con cols=44 lines=20");
	system("color db");
	tou();
	MessageBox(NULL,"��ӭ����TFjf-JKF\n\n������ԱΪ���X�m\n���治�����½�\n","TFjf-1.2.1A",MB_OK|MB_ICONINFORMATION);
	register int pdnml;
	register int pd;
	pd=MessageBox(NULL,"Do you want to join our oi team->Tfjf?","TFjf-1.2.1A",MB_YESNO|MB_ICONQUESTION);
	if(pd==6)
	{
		add_into_us();
	}
	pdnml=MessageBox(NULL,"�Ƿ���ת����\n","TFjf-1.2.1A",MB_YESNO|MB_ICONQUESTION);
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
	MessageBox(NULL, "���ڼ���ԭ������Ĳ������ܻ᷵�ؿ���̨����\n������ֲ��ܼ��������뷵�ؿ���̨����", "TFjf-1.2.1A", MB_OK|MB_ICONINFORMATION);
	while(true)
	{
		register int pdd;
		pdd=MessageBox(NULL, "�Ƿ���ת��⣨���������ת���ͣ�", "TFjf-1.2.1A", MB_YESNO|MB_ICONQUESTION);
		if(pdd!=7)
		{
			tj();
		}else
		{
			bk();
		}
		MessageBox(NULL, "������ҳ�������ȷ��", "TFjf-1.2.1A", MB_OK|MB_ICONINFORMATION);
		register int pddd;
		pddd=MessageBox(NULL, "������ѯ��YES��/��������NO��", "TFjf-1.2.1A", MB_YESNO|MB_ICONQUESTION);
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
