
#include "doubly-linked.h"
#include <iostream>
using namespace std;

int main() {
    List myList;

    // 测试空链表
    cout << "Initial list: ";
    myList.print();

    // 插入元素
    myList.insert(10);
    myList.insert(20);
    myList.insert(30);

    // 打印链表
    cout << "List after inserts: ";
    myList.print();

    // 反转链表
    myList.reverse();

    // 打印反转后的链表
    cout << "Reversed list: ";
    myList.print();

    return 0;
}
