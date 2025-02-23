// 0. 打印一个正方形的框(使用循环控制)
// 1. 输入只有一行, 为正方形的边长n
// 2. 内部为空白，外部是由 "*" 字符组成的框
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // 正方形的边长n
    int n;
    cin >> n;
    // 打印正方形
    // i控制行
    for (int i = 0; i < n; i++)
    {
        // j控制列
        for (int j = 0; j < n; j++)
        {
            // 逐行打印
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}