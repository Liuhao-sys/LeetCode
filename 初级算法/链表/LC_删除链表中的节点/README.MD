思路：

后浪逐个覆盖前浪

将后面的数循环覆盖前面的数，这样时间复杂度为0（n)

<hr>

其实复杂度可以直接降低到0（1)

注意看：每个链表都有特点，我们删除的此节点，就相当于把后面的值覆盖node然后我们把node的next指向其-next.next;

还有要定义两个指针：

ListNode* prev,after;// 这是完全错误的示范

ListNode* prev,*after;// 正确

