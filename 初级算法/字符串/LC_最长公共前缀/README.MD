思路： 

截取两个string的字串进行判断，（substr+循环遍历)

选取vector中的第一个元素，通过划分此元素，得到的序列和其他的vector中的元素来进行比较

在遍历的时候尽量少使用substr,可以再比较的时候用下标，最后返回结果时候再使用substr

<hr>

横向比较：

横向比较是前两个的结果和后一个进行比较，得出新的结果，如此迭代

<hr>



纵向比较：

直接看图，文字反而不好表述

l e e t

l e s

l e

走到下标为1的位置结束返回最大字串

注意：测试数据中有vector为空的情况，这时候利用下标来访问（v[0]) 会使得程序报错
