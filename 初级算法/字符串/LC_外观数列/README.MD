思路：

利用递归的思路，主要是统计字符串中字符出现情况的函数

这其中涉及到了string的拼接

注意：

遍历string 字符串的for循环的终止条件for(;i<=s.length();)

因为只有走到某个字符之后，才能统计他出现的情况，所以要统计最后一个的话我们要走到'\'