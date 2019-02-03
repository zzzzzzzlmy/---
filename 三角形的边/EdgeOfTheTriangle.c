/*

题目描述
给定三个已知长度的边，确定是否能够构成一个三角形，这是一个简单的几何问题。我们都知道，
这要求两边之和大于第三边。实际上，并不需要检验所有三种可能，只需要计算最短的两个边长
之和是否大于最大那个就可以了。 这次的问题就是：给出三个正整数，计算最小的数加上次小的
数与最大的数之差。

输入描述:
每一行包括三个数据a, b, c，并且都是正整数，均小于10000。

输出描述:
对于输入的每一行，在单独一行内输出结果s。s=min(a,b,c)+mid(a,b,c)-max(a,b,c)。上式
中，min为最小值，mid为中间值，max为最大值。

示例1
输入
1 2 3
输出
0

*/

#include <stdio.h>

int min(int a, int b, int c)
{
    int temp, min;
    temp = a < b ? a : b;
    min = temp < c ? temp : c;
    return min;
}
int mid(int a, int b, int c)
{
    int mid;
    if((a<b && b<c) || (c<b && b<a)) mid = b;
    if((a<c && c<b) || (b<c && c<a)) mid = c;
    if((b<a && a<c) || (c<a && a<b)) mid = a;
    return mid;
}
int max(int a, int b, int c)
{
    int temp, max;
    temp = a > b ? a : b;
    max = temp > c ? temp : c;
    return max;
}
int main()
{
    int a, b, c, s;
    scanf("%d %d %d", &a, &b, &c);
    s = min(a,b,c) + mid(a,b,c) - max(a,b,c);
    printf("%d", s);
    return 0;
}




