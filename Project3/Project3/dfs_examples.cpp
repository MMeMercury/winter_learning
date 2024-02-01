#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
/*1 - 9 9个数凑一个等式，其中每个数由3个数字组成,输出所有的排列可能*/
int a[10] = {1,1,1,1,1,1,1,1,1,1}, book[10] = {false};
void dfs(int cur)
{
	if (cur == 9)
	{
		if (a[1] * 100 + a[2] * 10 + a[3] + a[4] * 100 + a[5] * 10 + a[6] == a[7] * 100 + a[8] * 10 + a[9])
		{
			printf("%d%d%d+%d%d%d=%d%d%d", a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
			printf("\n");
			return;
		}
	}
	for (int i = 1; i<9; i++)
	{
		if (!book[i]) {
			book[i] = 1;
			a[cur]=i+1;
			dfs(cur + 1);
			book[i] = 0;
		}
	}
	return;
}
int main()
{
	dfs(1);
	return 0;
}