/*

题目描述
输入两个正整数，求其最大公约数。

输入描述:
测试数据有多组，每组输入两个正整数。

输出描述:
对于每组输入,请输出其最大公约数。

示例1
输入
49 14
输出
7

*/

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b); 
    for(c = a < b ? a : b; c > 0; c--)
    {
        if(a%c == 0 && b%c == 0)
        {
            printf("%d\n", c);
            break;
        }
    }
    return 0;
}


