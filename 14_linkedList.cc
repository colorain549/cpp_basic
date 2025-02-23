// 0. 构建的链表的长度n
// 1. k代表输入的m的个数
// 2. 第m个元素(m从1开始)
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// 自定义的链表数据结构
struct linkedList
{
    int val;
    linkedList *next;
    linkedList(int x) : val(x), next(nullptr) {}
};

int main()
{
    // 创建哑节点
    linkedList *dummyNode = new linkedList(0);
    // cur指向哑节点
    linkedList *cur = dummyNode;
    // 构建的链表的长度n
    int n;
    // 链表元素elem;
    int elem;
    // k代表输入的m的个数
    int k;
    int m;
    //
    cin >> n >> k;
    // 构建链表
    for (int i = 0; i < n; i++)
    {
        cin >> elem;
        linkedList *newNode = new linkedList(elem);
        cur->next = newNode;
        cur = cur->next;
    }
    // 打印k(测试)
    for (int i = 0; i < k; i++)
    {
        // 第m个元素
        cin >> m;
        // 判空(!!!m从1开始!!!)
        if (m < 1 || m > n)
        {
            cout << "Output position out of bounds." << endl;
        }
        else
        {
            // 重置cur的指向
            cur = dummyNode;
            for (int j = 0; j < m; j++)
            {
                cur = cur->next;
            }
            cout << cur->val << endl;
        }
    }

    return 0;
}