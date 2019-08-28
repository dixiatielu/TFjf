#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;
int n,m,a,b,c,d;
int main()
{
    freopen("pvp.nmzl","w",stdout);
	srand(time(NULL));
	n = rand() % 70 + 1;
	m = rand() % 70 + 1;
	a = rand() % n + 1;
	b = rand() % m + 1;
	c = rand() % n + 1;
	d = rand() % m + 1;
	printf("%d %d\n",n,m);
	printf("%d %d %d %d\n",a,b,c,d);
	for(register int i = 1;i <= n;i++)
    {
        for(register int j = 1;j <= m;j++)
        {
            if((i == a && j == b) || (i == c && j == d))
            {
                printf(".");
                continue;
            }
            register int r = rand();
            if(2 == r % 50 + 1)
            {
                printf("$");
            }
            else if(2 == r % 10 + 1)
            {
                printf("%c",'%');
            }
            else if(2 == r % 3 + 1)
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
    printf(".\n");
	return 0;
}
