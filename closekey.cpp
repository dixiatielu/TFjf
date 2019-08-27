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
    printf("\n密文如下:\n");
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
    printf("\n结果如下:\n");
    cout << c << endl;
    return;
}
//int aaa;
int main()
{
	freopen("randkey","r",stdin);
	freopen("miwen","w",stdout);
    //printf("加密请输入0，解密请输入1\n");
    //scanf("%d",&aaa);
    /*if(aaa)
    {
        //printf("请输入密钥和密文\n");
        cin >> k >> c;
        jiemi(k,c);
    }
    else
    {
        //printf("请输入密钥和明文\n");
        cin >> k >> c;
        jiami(k,c);
    }
    Sleep(50000);*/
    cin >> k >> c;
    jiami(k,c);
    printf("密钥如下\n");
    cout << k << endl;
    //system("pause");
    return 0;
}
