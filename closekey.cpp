#include "iostream"
#include "cstdio"
#include "string"
#include "windows.h" 
using namespace std;
string k,c;
void jiami(string k,string c)
{
    for(register int i = 0;i < c.length();i++)
    {
        register int t = (k[i % k.length()] & 31) - 1;
        //printf("t = %d\n",t);
        printf("%d!#%d*->",c[i],k[i]);
        c[i] = (c[i] & 31) + t < 27 ? c[i] + t : c[i] + t - 26;
    	printf("[%d]\n",c[i]);
	}
    printf("\n��������:\n");
    cout << c << endl;
    return;
}
void jiemi(string k,string c)
{
    for(register int i = 0;i < c.length();i++)
    {
        register int t = (k[i % k.length()] & 31) - 1;
        printf("%d!#%d*->",c[i],k[i]);
        c[i] = (c[i] & 31) - t > 0 ? c[i] - t : c[i] - t + 26;
        printf("[%d]\n",c[i]);
    }
    printf("\n�������:\n");
    cout << c << endl;
    return;
}
//int aaa;
int main()
{
	freopen("randkey","r",stdin);
	freopen("miwen","w",stdout);
    //printf("����������0������������1\n");
    //scanf("%d",&aaa);
    /*if(aaa)
    {
        //printf("��������Կ������\n");
        cin >> k >> c;
        jiemi(k,c);
    }
    else
    {
        //printf("��������Կ������\n");
        cin >> k >> c;
        jiami(k,c);
    }
    Sleep(50000);*/
    cin >> k >> c;
    jiami(k,c);
    printf("��Կ����\n");
    cout << k << endl;
    //system("pause");
    return 0;
}
