// 0. 初始队列有n个人
// 1. 字符串name, 代表当前奶茶队列中的人
// 2. m次操作
// 3. 操作operation
// 4. 反思: 出队前先判空
#include <iostream>
#include <queue>

using std::cin;
using std::cout;
using std::endl;
using std::queue;
using std::string;

int main()
{
    queue<string> iQueue;
    int n;
    string name;
    int m;
    int operation;
    //
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        iQueue.push(name);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> operation;
        if (operation == 1)
        {
            // 出队前最好先判空
            iQueue.pop();
        }
        else if (operation == 2)
        {
            cin >> name;
            iQueue.push(name);
        }
    }
    if (iQueue.empty())
    {
        cout << "There are no more people in the queue." << endl;
    }
    else
    {
        cout << iQueue.front() << endl;
    }

    return 0;
}