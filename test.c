#include<stdio.h>
#include<windows.h>

int fun(int n, int k)
{
    if(k == 0)
    {
	return 1;
    }
    else
    {
	return n * fun(n, k-1);
    }
}

int main()
{
    int n = 0;
    int k = 0;
    int ret = 0;
    printf("请输入：n = ");
    scanf("%d", &n);
    printf("请输入：k = ");
    scanf("%d", &k);
    ret = fun(n, k);
    printf("n^k = %d\n", ret);
    system("pause");
    return;
}