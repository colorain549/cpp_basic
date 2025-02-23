// 0. 初始盘子堆放区中盘子的数量为n
// 1. n个整数,代表了盘子的编号num
// 2. m次操作
// 3. 操作operation
// 4. 反思: 出栈前先判空
#include <iostream>
#include <stack>

using std::cin;
using std::cout;
using std::endl;
using std::stack;

int main()
{
    // 容器(盘子堆放区)
    stack<int> iStack;
    // 初始盘子堆放区中盘子的数量为n
    int n;
    // 盘子的编号num
    int num;
    // m次操作
    int m;
    // 操作operation
    int operation;
    // 初始盘子堆放区中盘子的数量为n
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        iStack.push(num);
    }
    // m次操作
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> operation;
        if (operation == 1)
        {
            // 先判空
            if (!iStack.empty())
            {
                iStack.pop();
            }
        }
        else if (operation == 2)
        {
            cin >> num;
            iStack.push(num);
        }
    }
    if (iStack.empty())
    {
        cout << "All the dishes have been washed." << endl;
    }
    else
    {
        cout << iStack.top() << endl;
    }
    return 0;
}