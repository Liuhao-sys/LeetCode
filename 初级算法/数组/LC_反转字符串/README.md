思路：

利用双指针before（指向当前位置）,after（before的下一个）；

如果当前迭代器before和after指向的值相同，则删除before。

注意：

当测试数据vector为空时，nums.begin()和nums.end()指向的是同一个

​	vector<int>::iterator  after=nums.begin()+1;

这行代码会造成空指针

