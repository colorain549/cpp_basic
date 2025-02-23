// 0. 多组测试数据(while)
// 1. 使用自定义的链表数据结构
// 2. 构建的链表的长度n
// 3. 链表中的元素elem
// 4. 构建链表
// 5. 自定义"链表的输出方法"将所有元素打印出来printList
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// 使用自定义的链表数据结构
struct linkedList
{
    int val;
    linkedList *next;
    linkedList(int x) : val(x), next(nullptr) {}
};

void printList(linkedList *node)
{
    linkedList *cur = node;
    while (cur)
    {
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << endl;
}

int main()
{
    // 哑节点
    linkedList *dummyNode = new linkedList(0);
    // cur指向哑节点
    linkedList *cur = dummyNode;
    // 构建的链表的长度n
    int n;
    // 链表中的元素elem
    int elem;
    // 多组测试数据(while)
    while (cin >> n)
    {
        // 重置cur的指向
        cur = dummyNode;
        for (int i = 0; i < n; i++)
        {
            cin >> elem;
            // 创建新节点
            linkedList *newNode = new linkedList(elem);
            // 加入新节点
            cur->next = newNode;
            // 更新cur的指向
            cur = cur->next;
        }
        // 打印链表
        printList(dummyNode->next);
    }

    return 0;
}