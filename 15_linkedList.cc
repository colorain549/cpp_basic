// 0. 自定义的链表数据结构
// 1. 构建链表、插入元素、删除元素和输出链表元素
// 2. 构建的链表的长度k
// 3. S行输入, 第n个位置插入x(注意判空)
// 4. L行输入, 删除链表的第m个位置的元素(注意判空)
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

// 打印链表
void printList(linkedList *node)
{
    // 需传入dummyNode->next
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
    // 创建哑节点
    linkedList *dummyNode = new linkedList(0);
    // cur指向哑节点
    linkedList *cur = dummyNode;
    // 构建的链表的长度k
    int k;
    // 链表的元素elem
    int elem;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> elem;
        linkedList *newNode = new linkedList(elem);
        cur->next = newNode;
        cur = cur->next;
    }
    // S行输入, 第n个位置插入x(只有一组测试数据)
    int S;
    int n;
    int x;
    cin >> S;
    for (int i = 0; i < S; i++)
    {
        cin >> n;
        // 判空
        if (n <= 0 || n > k)
        {
            cin >> x;
            cout << "Insertion position is invalid." << endl;
        }
        else
        {
            // 第n个位置插入x
            cur = dummyNode;
            for (int j = 1; j < n; j++)
            {
                cur = cur->next;
            }
            // 保存下一元素
            linkedList *temp = cur->next;
            // 插入x
            cin >> x;
            linkedList *newNode = new linkedList(x);
            cur->next = newNode;
            newNode->next = temp;
            // 更新链表的长度k
            k++;
            // 链表为空的时候，不打印
            if (k != 0)
            {
                printList(dummyNode->next);
            }
        }
    }
    // L行输入, 删除链表的第m个位置的元素
    int L;
    int m;
    cin >> L;
    for (int i = 0; i < L; i++)
    {
        cin >> m;
        if (m <= 0 || m > k)
        {
            cout << "Deletion position is invalid." << endl;
        }
        else
        {
            // 删除链表的第m个位置的元素
            cur = dummyNode;
            for (int j = 1; j < m; j++)
            {
                cur = cur->next;
            }
            cur->next = cur->next->next;
            // 更新链表的长度k
            k--;
            // 链表为空的时候，不打印
            if (k != 0)
            {
                printList(dummyNode->next);
            }
        }
    }
    return 0;
}