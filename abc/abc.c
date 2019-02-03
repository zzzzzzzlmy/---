/*

题目描述
设a、b、c均是0到9之间的数字，abc、bcc是两个三位数，且有：abc+bcc=532。求满足条件的所有a、b、c的值。

输入描述:
题目没有任何输入。

输出描述:
请输出所有满足题目条件的a、b、c的值。
a、b、c之间用空格隔开。
每个输出占一行。

*/

#include <stdio.h>
 
int main()
{
    int a, b, c, i;
    for(i = 0; i < 1000; i++)
    {
        a = i / 100;
        b = (i - a*100) / 10;
        c = i - a*100 - b*10;
        if(i + b*100 + c*10 + c == 532)
        {
            printf("%d %d %d", a, b, c);
        }
    }  
    return 0;
}

