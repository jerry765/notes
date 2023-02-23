/**********************
单源最短路径问题。
codeblocks C++
                  2018.10.26
**********************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ // 原始带权有向图
    int a[5][5] = {{0, 10, -1, 30, 100},
                   {-1, 0, 50, -1, -1},
                   {-1, -1, 0, -1, 10},
                   {-1, -1, 20, 0, 60},
                   {-1, -1, -1, -1, 0}};
    // 单源最短路径图
    int b[5][5] = {{0, 10, -1, 30, 100},
                   {0, 0, 0, 0, 0},
                   {0, 0, 0, 0, 0},
                   {0, 0, 0, 0, 0},
                   {0, 0, 0, 0, 0}};
    // 创建数组红蓝点集
    int red[5] = {0, -1, -1, -1, -1};
    int red_N = 0;
    int blueToRed = 0;
    int blue[5] = {-1, 1, 2, 3, 4};
    int blue_N = 0;

    for (int i = 0; i < 5 - 1; i++)
    {
        // 从蓝点集中选出与源点最短路径的蓝点
        // 初始化随机蓝点
        int blue_min;
        for (int j = 0; j < 5; j++)
        {
            if (blue[j] >= 0)
                blue_min = j;
        }
        for (int j = 0; j < 5; j++)
        {
            if (blue[j] > 0 && b[i][j] >= 0 && b[i][j] < b[i][blue_min])
            {
                // blue[j]>0表示j是蓝点，a[i][j]>0表示i,j两点连通
                blue_min = j;
            }
        }
        // 将蓝点集中与源点最短路径的点加入到红点集
        red[++red_N] = blue_min;
        // 将该点从蓝点集中去除
        blue[blue_min] = -1;

        // 更改加入后的数据
        for (int j = 0; j < 5; j++)
        {
            // 判断j点是否为蓝点
            if (blue[j] >= 0)
            { // j是蓝点
                if (a[blue_min][j] > 0)
                { // 新加入的蓝点与j点连通
                    if (b[i][j] < 0)
                    { // 上一步i,j两点不连通
                        b[i + 1][j] = b[i][blue_min] + a[blue_min][j];
                    }
                    // 上一步i,j两点连通且加起来路径比原来短
                    else if (b[i][blue_min] + a[blue_min][j] < b[i][j])
                    {
                        b[i + 1][j] = b[i][blue_min] + a[blue_min][j];
                    }
                    else
                    { // 上一步i,j两点连通但加起来路径比原来长
                        b[i + 1][j] = b[i][blue_min] + a[blue_min][j];
                    }
                }
                else
                { // 新加入蓝点与j点不连通
                    b[i + 1][j] = b[i][j];
                }
            }
            else
            { // j不是蓝点
                b[i + 1][j] = b[i][j];
            }
        }
    }

    // 输出原始带权有向图的邻接矩阵图
    cout << "Original:" << endl;
    // 输出第一行
    cout << setw(3) << " ";
    for (int i = 0; i < 5; i++)
        cout << setw(3) << i;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        // 输出行号点数
        cout << setw(3) << i;
        for (int j = 0; j < 5; j++)
        {
            cout << setw(3) << a[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // 输出最终结果
    cout << "Changed:" << endl;
    // 输出第一行
    cout << setw(3) << " ";
    for (int i = 0; i < 5; i++)
        cout << setw(3) << i;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        // 输出行号点数
        cout << setw(3) << i;
        for (int j = 0; j < 5; j++)
        {
            cout << setw(3) << b[i][j];
        }
        cout << endl;
    }
    return 0;
}
