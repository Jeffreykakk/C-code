# C-code
---
> 前言
> 
> Code written during learning C language
> 
> > 以下是我在学完c语言后对写过代码的一些整理
> > 
> > 我有每天写完代码都push到github仓库的习惯
> > 
> > 我从其中挑选了每个知识点的典型例题,并通过知识点将这些代码分成不同的版块,也算是我对学完知识的一种巩固
> > 
> > 你也可以通过以下例题来巩固你的从语言
> 
> 
> 以下代码来自我的github仓库，想要的可以自取
>
> [点击跳转到我的github仓库](https://github.com/Jeffreykakk/C-code)
> 
> 
---
> 引用
> 
> 键盘敲烂，月薪过万
>
---

<!-- vscode-markdown-toc -->文章目录
* 1. [分支和循环语句](#-1)
	* 1.1. [比较大小](#-1.1)
		* 1.1.1. [输入三个数并从小到大输出](#-1.1.1)
		* 1.1.2. [从n个数中找最值](#-1.1.2)
	* 1.2. [根据字母判断星期几](#-1.2)
	* 1.3. [图形打印](#-1.3)
		* 1.3.1. [打印金字塔](#-1.3.1)
		* 1.3.2. [打印菱形](#-1.3.2)
	* 1.4. [循环提取一个数的各个位](#-1.4)
	* 1.5. [判断素数](#-1.5)
	* 1.6. [判断回文数](#-1.6)
	* 1.7. [判断Armstrong数](#-1.7)
	* 1.8. [斐波那契数列之循环的迭代](#-1.8)
* 2. [数组和指针](#-2)
	* 2.1. [逆置数组](#-2.1)
	* 2.2. [查找数组元素](#-2.2)
		* 2.2.1. [二分法从有序数组中查找元素](#-2.2.1)
		* 2.2.2. [查找杨氏矩阵中的元素](#-2.2.2)
	* 2.3. [排序数组](#-2.3)
		* 2.3.1. [用qsort排序整型数组](#-2.3.1)
		* 2.3.2. [用qsort排序结构体数组](#-2.3.2)
		* 2.3.3. [用qsort排序字符串数组](#-2.3.3)
	* 2.4. [循环右移数组](#-2.4)
		* 2.4.1. [滚动法](#-2.4.1)
		* 2.4.2. [三步翻转法](#-2.4.2)
	* 2.5. [模拟实现memcpy](#-2.5)
	* 2.6. [模拟实现memmove](#-2.6)
	* 2.7. [模拟实现memcmp](#-2.7)
	* 2.8. [统计单词个数](#-2.8)
	* 2.9. [判断编译器的字节序](#-2.9)
* 3. [函数](#-3)
	* 3.1. [递归](#-3.1)
		* 3.1.1. [递归计算字符串长度](#-3.1.1)
		* 3.1.2. [用递归计算阶乘)](#-3.1.2)
		* 3.1.3. [用递归计算斐波那契数列](#-3.1.3)
		* 3.1.4. [用递归解决猴子分桃问题](#-3.1.4)
		* 3.1.5. [用递归打印出一个数的各个位](#-3.1.5)
		* 3.1.6. [用递归解决青蛙跳台阶问题](#-3.1.6)
		* 3.1.7. [用递归解决汉诺塔问题](#-3.1.7)
	* 3.2. [函数指针](#-3.2)
		* 3.2.1. [用函数指针优化计算器](#-3.2.1)
	* 3.3. [回调函数](#-3.3)
		* 3.3.1. [用回调函数优化计算器](#-3.3.1)
		* 3.3.2. [模仿qsort实现一个冒泡排序的通用法](#-3.3.2)
* 4. [字符串](#-4)
	* 4.1. [字符串逆序打印](#-4.1)
		* 4.1.1. [递归求解](#-4.1.1)
		* 4.1.2. [逆置数组求解](#-4.1.2)
	* 4.2. [左旋字符串](#-4.2)
		* 4.2.1. [左移求解](#-4.2.1)
		* 4.2.2. [交换求解](#-4.2.2)
		* 4.2.3. [三步翻转法求解](#-4.2.3)
	* 4.3. [判断一个字符串是否为另一个字符串旋转得到](#-4.3)
		* 4.3.1. [穷举法](#-4.3.1)
		* 4.3.2. [运用strncat和strstr](#-4.3.2)
	* 4.4. [模拟实现strlen函数](#-4.4)
		* 4.4.1. [循环求解](#-4.4.1)
		* 4.4.2. [指针相减求解](#-4.4.2)
		* 4.4.3. [递归求解](#-4.4.3)
	* 4.5. [模拟实现strcpy](#-4.5)
	* 4.6. [模拟实现strncpy](#-4.6)
	* 4.7. [模拟实现strcmp](#-4.7)
	* 4.8. [模拟实现strncmp](#-4.8)
	* 4.9. [模拟实现strcat](#-4.9)
	* 4.10. [模拟实现strncat](#-4.10)
	* 4.11. [模拟实现strstr](#-4.11)
		* 4.11.1. [逐步比较法](#-4.11.1)
		* 4.11.2. [运用strncmp](#-4.11.2)
	* 4.12. [删除字符串中特定字符](#-4.12)
	* 4.13. [计算字符串中子串出现的次数](#-4.13)
		* 4.13.1. [逐步比较法](#-4.13.1)
		* 4.13.2. [运用strstr](#-4.13.2)
	* 4.14. [判断回文字符串](#-4.14)
	* 4.15. [字符串与数字的转换](#-4.15)
		* 4.15.1. [运用sprintf和sscanf](#-4.15.1)
		* 4.15.2. [运用atoi并模拟实现](#-4.15.2)
* 5. [自定义类型](#-5)
	* 5.1. [结构体](#-5.1)
		* 5.1.1. [日期处理](#-5.1.1)
		* 5.1.2. [静态版本通讯录](#-5.1.2)
		* 5.1.3. [柔性数组](#-5.1.3)
	* 5.2. [枚举](#-5.2)
	* 5.3. [联合体](#-5.3)
		* 5.3.1. [判断编译器的字节序](#-5.3.1)
* 6. [动态内存管理](#-6)
	* 6.1. [使用动态内存函数动态开辟内存](#-6.1)
		* 6.1.1. [动态版本通讯录](#-6.1.1)
* 7. [文件操作](#-7)
	* 7.1. [字符串与格式化数据的转换](#-7.1)
	* 7.2. [使用文件函数读写文件](#-7.2)
		* 7.2.1. [用fseek和ftell计算一个文件的字节大小](#7.2.1)
		* 7.2.2. [可保存版本的通讯录](#-7.2.2)
* 8. [宏](#-8)
	* 8.1. [用宏实现带参数的打印](#-8.1)
	* 8.2. [宏连接标识符](#-8.2)
	* 8.3. [模拟实现宏offsetof计算结构体成员偏移量](#-8.3)
* 9. [算法总结](#-9)
	* 9.1. [排序算法](#-9.1)
		* 9.1.1. [直接插入排序法](#-9.1.1)
		* 9.1.2. [选择排序法](#-9.1.2)
		* 9.1.3. [冒泡排序法](#-9.1.3)
		* 9.1.4. [快速排序法](#-9.1.4)
		* 9.1.5. [希尔排序法](#-9.1.5)
		* 9.1.6. [归并排序法](#-9.1.6)
	* 9.2. [公约数与公倍数](#-9.2)
		* 9.2.1. [循环穷举法](#-9.2.1)
		* 9.2.2. [辗转相除法](#-9.2.2)
	* 9.3. [查找算法](#-9.3)
		* 9.3.1. [暴力查找法](#-9.3.1)
		* 9.3.2. [二分查找法](#-9.3.2)
		* 9.3.3. [分块查找法](#-9.3.3)
	* 9.4. [位运算相关算法](#-9.4)
		* 9.4.1. [判断一个数的二进制序列有几个1](#-9.4.1)
		* 9.4.2. [判断一个数是不是2的n次方](#-9.4.2)
		* 9.4.3. [两个数二进制序列不同位的个数](#-9.4.3)
		* 9.4.4. [从数组中找到一只单身狗](#-9.4.4)
		* 9.4.5. [从数组中找到两只单身狗](#-9.4.5)
		* 9.4.6. [将一个数的二进制位的奇数位和偶数位交换](#-9.4.6)
	* 9.5. [进制转换](#-9.5)
		* 9.5.1. [二进制转十进制](#-9.5.1)
		* 9.5.2. [二进制转八进制](#-9.5.2)
		* 9.5.3. [八进制转二进制](#-9.5.3)
		* 9.5.4. [八进制转十进制](#-9.5.4)
		* 9.5.5. [十进制转二进制](#-9.5.5)
		* 9.5.6. [十进制转八进制](#-9.5.6)
	* 9.6. [三步翻转法](#-9.6)
		* 9.6.1. [将一句话的单词倒置](#-9.6.1)
		* 9.6.2. [左旋字符串](#-9.6.2)
* 10. [自制游戏](#-10)
	* 10.1. [猜数字游戏](#-10.1)
	* 10.2. [三子棋游戏](#-10.2)
	* 10.3. [扫雷游戏](#-10.3)

<!-- vscode-markdown-toc-config
	numbering=true
	autoSave=true
	/vscode-markdown-toc-config -->
<!-- /vscode-markdown-toc -->


---


##  1. <a name='-1'></a>分支和循环语句
---
- if,else语句
- switch,case语句
- whlie语句
- for语句
- do,while语句
- go to语句
---


###  1.1. <a name='-1.1'></a>比较大小
---
####  1.1.1. <a name='-1.1.1'></a>输入三个数并从小到大输出
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E8%BE%93%E5%85%A5%E4%B8%89%E4%B8%AA%E6%95%B0%E5%B9%B6%E4%BB%8E%E5%B0%8F%E5%88%B0%E5%A4%A7%E8%BE%93%E5%87%BA/main.c)

---

####  1.1.2. <a name='-1.1.2'></a>从n个数中找最值
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%9C%A8n%E4%B8%AA%E6%95%B0%E4%B8%AD%E6%89%BE%E5%87%BA%E6%9C%80%E5%B0%8F%E5%80%BC/main.c)

---
###  1.2. <a name='-1.2'></a>根据字母判断星期几
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%A0%B9%E6%8D%AE%E5%AD%97%E6%AF%8D%E5%88%A4%E6%96%AD%E6%98%AF%E6%98%9F%E6%9C%9F%E5%87%A0/main.c)

---
###  1.3. <a name='-1.3'></a>图形打印



---

####  1.3.1. <a name='-1.3.1'></a>打印金字塔
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%89%93%E5%8D%B0%E9%87%91%E5%AD%97%E5%A1%94/main.c)

---
####  1.3.2. <a name='-1.3.2'></a>打印菱形
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%89%93%E5%8D%B0%E8%8F%B1%E5%BD%A2/main.c)

---
###  1.4. <a name='-1.4'></a>循环提取一个数的各个位
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%BE%AA%E7%8E%AF%E9%80%86%E5%BA%8F%E6%89%93%E5%8D%B0%E4%B8%80%E4%B8%AA%E6%95%B0%E7%9A%84%E5%90%84%E4%B8%AA%E4%BD%8D/main.c)

---
###  1.5. <a name='-1.5'></a>判断素数
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%88%A4%E6%96%AD%E7%B4%A0%E6%95%B0/main.c)

---
###  1.6. <a name='-1.6'></a>判断回文数
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%88%A4%E6%96%AD%E5%9B%9E%E6%96%87%E6%95%B02.0/main.c)

---
###  1.7. <a name='-1.7'></a>判断Armstrong数
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%88%A4%E6%96%ADArmstrong%E6%95%B0/main.c)

---
###  1.8. <a name='-1.8'></a>斐波那契数列之循环的迭代
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E5%BE%AA%E7%8E%AF%E8%AE%A1%E7%AE%97%E6%96%90%E6%B3%A2%E9%82%A3%E5%A5%91%E6%95%B0%E5%88%97/main.c)

---


##  2. <a name='-2'></a>数组和指针


---
###  2.1. <a name='-2.1'></a>逆置数组
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%B0%86%E6%95%B0%E7%BB%84%E5%85%83%E7%B4%A0%E9%80%86%E7%BD%AE/main.c)

---
###  2.2. <a name='-2.2'></a>查找数组元素


---
####  2.2.1. <a name='-2.2.1'></a>二分法从有序数组中查找元素
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E4%BA%8C%E5%88%86%E6%B3%95%E4%BB%8E%E6%9C%89%E5%BA%8F%E6%95%B0%E7%BB%84%E4%B8%AD%E6%9F%A5%E6%89%BE%E5%85%83%E7%B4%A0/main.c)

---
####  2.2.2. <a name='-2.2.2'></a>查找杨氏矩阵中的元素
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%9F%A5%E6%89%BE%E6%9D%A8%E6%B0%8F%E7%9F%A9%E9%98%B5%E4%B8%AD%E7%9A%84%E5%85%83%E7%B4%A0/main.c)

---
###  2.3. <a name='-2.3'></a>排序数组


---
####  2.3.1. <a name='-2.3.1'></a>用qsort排序整型数组
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8qsort%E6%8E%92%E5%BA%8F%E6%95%B4%E5%9E%8B%E6%95%B0%E7%BB%84/main.c)

---
####  2.3.2. <a name='-2.3.2'></a>用qsort排序结构体数组
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8qsort%E6%8E%92%E5%BA%8F%E7%BB%93%E6%9E%84%E4%BD%93%E6%95%B0%E7%BB%84/main.c)

---
####  2.3.3. <a name='-2.3.3'></a>用qsort排序字符串数组
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%8C%89%E5%AD%97%E7%AC%A6%E4%B8%B2%E5%A4%A7%E5%B0%8F%E7%94%A8qsort%E6%8E%92%E5%BA%8F%E5%AD%97%E7%AC%A6%E4%B8%B2%E6%95%B0%E7%BB%84/main.c)

---
###  2.4. <a name='-2.4'></a>循环右移数组


---
####  2.4.1. <a name='-2.4.1'></a>滚动法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%9C%89%20n%E4%B8%AA%E6%95%B4%E6%95%B0%EF%BC%8C%E4%BD%BF%E5%85%B6%E5%89%8D%E9%9D%A2%E5%90%84%E6%95%B0%E9%A1%BA%E5%BA%8F%E5%90%91%E5%90%8E%E7%A7%BB%20m%20%E4%B8%AA%E4%BD%8D%E7%BD%AE%EF%BC%8C%E6%9C%80%E5%90%8Em%E4%B8%AA%E6%95%B0%E5%8F%98%E6%88%90%E6%9C%80%E5%89%8D%E9%9D%A2%E7%9A%84%20m%20%E4%B8%AA%E6%95%B0%EF%BC%88%E6%BB%9A%E5%8A%A8%E6%B3%95%EF%BC%89/main.c)

---
####  2.4.2. <a name='-2.4.2'></a>三步翻转法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%9C%89%20n%E4%B8%AA%E6%95%B4%E6%95%B0%EF%BC%8C%E4%BD%BF%E5%85%B6%E5%89%8D%E9%9D%A2%E5%90%84%E6%95%B0%E9%A1%BA%E5%BA%8F%E5%90%91%E5%90%8E%E7%A7%BB%20m%20%E4%B8%AA%E4%BD%8D%E7%BD%AE%EF%BC%8C%E6%9C%80%E5%90%8Em%E4%B8%AA%E6%95%B0%E5%8F%98%E6%88%90%E6%9C%80%E5%89%8D%E9%9D%A2%E7%9A%84%20m%20%E4%B8%AA%E6%95%B0%EF%BC%88%E4%B8%89%E6%AD%A5%E7%BF%BB%E8%BD%AC%E6%B3%95%EF%BC%89/main.c)

---
###  2.5. <a name='-2.5'></a>模拟实现memcpy
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%A8%A1%E6%8B%9F%E5%AE%9E%E7%8E%B0memcpy/main.c)

---
###  2.6. <a name='-2.6'></a>模拟实现memmove
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%A8%A1%E6%8B%9F%E5%AE%9E%E7%8E%B0memmove/main.c)

---
###  2.7. <a name='-2.7'></a>模拟实现memcmp
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%A8%A1%E6%8B%9F%E5%AE%9E%E7%8E%B0memcmp/main.c)

---
###  2.8. <a name='-2.8'></a>统计单词个数
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%BB%9F%E8%AE%A1%E5%8D%95%E8%AF%8D%E4%B8%AA%E6%95%B0/main.c)

---
###  2.9. <a name='-2.9'></a>判断编译器的字节序
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%88%A4%E6%96%AD%E7%BC%96%E8%AF%91%E5%99%A8%E7%9A%84%E5%AD%97%E8%8A%82%E5%BA%8F/main.c)

---



##  3. <a name='-3'></a>函数


---
###  3.1. <a name='-3.1'></a>递归


---
####  3.1.1. <a name='-3.1.1'></a>递归计算字符串长度
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E9%80%92%E5%BD%92%E8%AE%A1%E7%AE%97%E5%AD%97%E7%AC%A6%E4%B8%B2%E9%95%BF%E5%BA%A6/main.c)

---
####  3.1.2. <a name='-3.1.2'></a>用递归计算阶乘
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E9%80%92%E5%BD%92%E8%AE%A1%E7%AE%97%E9%98%B6%E4%B9%98/main.c)


---
####  3.1.3. <a name='-3.1.3'></a>用递归计算斐波那契数列
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E9%80%92%E5%BD%92%E8%AE%A1%E7%AE%97%E6%96%90%E6%B3%A2%E9%82%A3%E5%A5%91%E6%95%B0%E5%88%97/main.c)

---
####  3.1.4. <a name='-3.1.4'></a>用递归解决猴子分桃问题
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%8C%B4%E5%AD%90%E5%88%86%E6%A1%83/main.c)

---

####  3.1.5. <a name='-3.1.5'></a>用递归打印出一个数的各个位
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E9%80%92%E5%BD%92%E6%89%93%E5%8D%B0%E5%87%BA%E4%B8%80%E4%B8%AA%E6%95%B0%E7%9A%84%E5%90%84%E4%B8%AA%E4%BD%8D/main.c)

---
####  3.1.6. <a name='-3.1.6'></a>用递归解决青蛙跳台阶问题
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E9%80%92%E5%BD%92%E8%A7%A3%E5%86%B3%E9%9D%92%E8%9B%99%E8%B7%B3%E5%8F%B0%E9%98%B6/main.c)

---
####  3.1.7. <a name='-3.1.7'></a>用递归解决汉诺塔问题
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%B1%89%E8%AF%BA%E5%A1%94/main.c)

---
###  3.2. <a name='-3.2'></a>函数指针


---
####  3.2.1. <a name='-3.2.1'></a>用函数指针优化计算器
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E5%87%BD%E6%95%B0%E6%8C%87%E9%92%88%E4%BC%98%E5%8C%96%E8%AE%A1%E7%AE%97%E5%99%A8/main.c)

---
###  3.3. <a name='-3.3'></a>回调函数


---
####  3.3.1. <a name='-3.3.1'></a>用回调函数优化计算器
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E5%9B%9E%E8%B0%83%E5%87%BD%E6%95%B0%E4%BC%98%E5%8C%96%E8%AE%A1%E7%AE%97%E5%99%A8/main.c)

---
####  3.3.2. <a name='-3.3.2'></a>模仿qsort实现一个冒泡排序的通用法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%A8%A1%E4%BB%BFqsort%E5%AE%9E%E7%8E%B0%E4%B8%80%E4%B8%AA%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F%E7%9A%84%E9%80%9A%E7%94%A8%E6%B3%95/main.c)

---





##  4. <a name='-4'></a>字符串


---
###  4.1. <a name='-4.1'></a>字符串逆序打印


---
####  4.1.1. <a name='-4.1.1'></a>递归求解
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%AD%97%E7%AC%A6%E4%B8%B2%E9%80%86%E5%BA%8F%E6%89%93%E5%8D%B02.0/main.c)

---
####  4.1.2. <a name='-4.1.2'></a>逆置数组求解
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%AD%97%E7%AC%A6%E4%B8%B2%E9%80%86%E5%BA%8F%E6%89%93%E5%8D%B0/main.c)

---
###  4.2. <a name='-4.2'></a>左旋字符串


---
####  4.2.1. <a name='-4.2.1'></a>左移求解

[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E5%B7%A6%E7%A7%BB%E5%B7%A6%E6%97%8B%E5%AD%97%E7%AC%A6%E4%B8%B2/main.c)

---
####  4.2.2. <a name='-4.2.2'></a>交换求解
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E4%BA%A4%E6%8D%A2%E5%B7%A6%E7%A7%BB%E5%AD%97%E7%AC%A6%E4%B8%B2/main.c)

---
####  4.2.3. <a name='-4.2.3'></a>三步翻转法求解

[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E4%B8%89%E6%AD%A5%E7%BF%BB%E8%BD%AC%E6%B3%95%E5%B7%A6%E6%97%8B%E5%AD%97%E7%AC%A6%E4%B8%B2/main.c)

---
###  4.3. <a name='-4.3'></a>判断一个字符串是否为另一个字符串旋转得到


---
####  4.3.1. <a name='-4.3.1'></a>穷举法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E7%A9%B7%E4%B8%BE%E6%B3%95%E5%88%A4%E6%96%AD%E4%B8%80%E4%B8%AA%E5%AD%97%E7%AC%A6%E4%B8%B2%E6%98%AF%E5%90%A6%E4%B8%BA%E5%8F%A6%E4%B8%80%E4%B8%AA%E5%AD%97%E7%AC%A6%E4%B8%B2%E6%97%8B%E8%BD%AC%E5%BE%97%E5%88%B0/main.c)


---
####  4.3.2. <a name='-4.3.2'></a>运用strncat和strstr
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8strncat%E5%92%8Cstrstr%E5%88%A4%E6%96%AD%E4%B8%80%E4%B8%AA%E5%AD%97%E7%AC%A6%E4%B8%B2%E6%98%AF%E5%90%A6%E4%B8%BA%E5%8F%A6%E4%B8%80%E4%B8%AA%E5%AD%97%E7%AC%A6%E4%B8%B2%E6%97%8B%E8%BD%AC%E5%BE%97%E5%88%B0/main.c)

---
###  4.4. <a name='-4.4'></a>模拟实现strlen函数


---
####  4.4.1. <a name='-4.4.1'></a>循环求解
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%BE%AA%E7%8E%AF%E8%AE%A1%E7%AE%97%E5%AD%97%E7%AC%A6%E4%B8%B2%E9%95%BF%E5%BA%A6/main.c)

---
####  4.4.2. <a name='-4.4.2'></a>指针相减求解
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E6%8C%87%E9%92%88%E7%9B%B8%E5%87%8F%E6%B1%82%E5%AD%97%E7%AC%A6%E4%B8%B2%E9%95%BF%E5%BA%A6/main.c)

---
####  4.4.3. <a name='-4.4.3'></a>递归求解
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E9%80%92%E5%BD%92%E8%AE%A1%E7%AE%97%E5%AD%97%E7%AC%A6%E4%B8%B2%E9%95%BF%E5%BA%A6/main.c)

---
###  4.5. <a name='-4.5'></a>模拟实现strcpy
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%A8%A1%E6%8B%9F%E5%AE%9E%E7%8E%B0strcpy/main.o)

---
###  4.6. <a name='-4.6'></a>模拟实现strncpy
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%A8%A1%E6%8B%9F%E5%AE%9E%E7%8E%B0strncpy/main.c)

---
###  4.7. <a name='-4.7'></a>模拟实现strcmp
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%A8%A1%E6%8B%9F%E5%AE%9E%E7%8E%B0strcmp/main.c)

---
###  4.8. <a name='-4.8'></a>模拟实现strncmp
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%A8%A1%E6%8B%9F%E5%AE%9E%E7%8E%B0strncmp/main.c)

---
###  4.9. <a name='-4.9'></a>模拟实现strcat
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%A8%A1%E6%8B%9F%E5%AE%9E%E7%8E%B0strcat/main.c)

---
###  4.10. <a name='-4.10'></a>模拟实现strncat
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%A8%A1%E6%8B%9F%E5%AE%9E%E7%8E%B0strncat/main.c)

---
###  4.11. <a name='-4.11'></a>模拟实现strstr


---
####  4.11.1. <a name='-4.11.1'></a>逐步比较法

[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%A8%A1%E6%8B%9F%E5%AE%9E%E7%8E%B0strstr/main.c)


---
####  4.11.2. <a name='-4.11.2'></a>运用strncmp
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8strncmp%E6%A8%A1%E6%8B%9F%E5%AE%9E%E7%8E%B0strstr/main.c)

---
###  4.12. <a name='-4.12'></a>删除字符串中特定字符
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%88%A0%E9%99%A4%E5%AD%97%E7%AC%A6%E4%B8%B2%E4%B8%AD%E7%89%B9%E5%AE%9A%E5%AD%97%E7%AC%A6/main.c)

---
###  4.13. <a name='-4.13'></a>计算字符串中子串出现的次数


---
####  4.13.1. <a name='-4.13.1'></a>逐步比较法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E8%AE%A1%E7%AE%97%E5%AD%97%E7%AC%A6%E4%B8%B2%E4%B8%AD%E5%AD%90%E4%B8%B2%E5%87%BA%E7%8E%B0%E7%9A%84%E6%AC%A1%E6%95%B02.0/main.c)

---
####  4.13.2. <a name='-4.13.2'></a>运用strstr
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E8%AE%A1%E7%AE%97%E5%AD%97%E7%AC%A6%E4%B8%B2%E4%B8%AD%E5%AD%90%E4%B8%B2%E5%87%BA%E7%8E%B0%E7%9A%84%E4%B8%AA%E6%95%B0/main.c)

---
###  4.14. <a name='-4.14'></a>判断回文字符串
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E6%8B%B7%E8%B4%9D%E7%BF%BB%E8%BD%AC%E5%88%A4%E6%96%AD%E5%9B%9E%E6%96%87%E5%AD%97%E7%AC%A6/main.c)

---
###  4.15. <a name='-4.15'></a>字符串与数字的转换


---
####  4.15.1. <a name='-4.15.1'></a>运用sprintf和sscanf
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%B0%86%E6%95%B0%E5%AD%97%E5%AD%97%E7%AC%A6%E4%B8%B2%E8%BD%AC%E6%8D%A2%E6%88%90%E6%95%B0%E5%AD%97/main.c)

---
####  4.15.2. <a name='-4.15.2'></a>运用atoi并模拟实现
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/my_atoi/main.c)

---


##  5. <a name='-5'></a>自定义类型


---
###  5.1. <a name='-5.1'></a>结构体


---
####  5.1.1. <a name='-5.1.1'></a>日期处理
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%AE%9A%E4%B9%89%E7%BB%93%E6%9E%84%E4%BD%93%E5%A4%84%E7%90%86%E6%97%A5%E6%9C%9F/main.c)

---
####  5.1.2. <a name='-5.1.2'></a>静态版本通讯录
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E9%80%9A%E8%AE%AF%E5%BD%95/main.c)
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E9%80%9A%E8%AE%AF%E5%BD%95/contact.c)
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E9%80%9A%E8%AE%AF%E5%BD%95/contact.h)

---
####  5.1.3. <a name='-5.1.3'></a>柔性数组
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E7%BB%93%E6%9E%84%E4%BD%93%E5%88%9B%E5%BB%BA%E6%9F%94%E6%80%A7%E6%95%B0%E7%BB%84/main.c)

---
###  5.2. <a name='-5.2'></a>枚举


---
###  5.3. <a name='-5.3'></a>联合体


---
####  5.3.1. <a name='-5.3.1'></a>判断编译器的字节序
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E8%81%94%E5%90%88%E4%BD%93%E5%88%A4%E6%96%AD%E7%BC%96%E8%AF%91%E5%99%A8%E7%9A%84%E5%AD%97%E8%8A%82%E5%BA%8F/main.c)

---


##  6. <a name='-6'></a>动态内存管理


---
###  6.1. <a name='-6.1'></a>使用动态内存函数动态开辟内存


---
####  6.1.1. <a name='-6.1.1'></a>动态版本通讯录
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%8A%A8%E6%80%81%E5%86%85%E5%AD%98%E4%BC%98%E5%8C%96%E9%80%9A%E8%AE%AF%E5%BD%95/main.c)
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%8A%A8%E6%80%81%E5%86%85%E5%AD%98%E4%BC%98%E5%8C%96%E9%80%9A%E8%AE%AF%E5%BD%95/contact.c)
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%8A%A8%E6%80%81%E5%86%85%E5%AD%98%E4%BC%98%E5%8C%96%E9%80%9A%E8%AE%AF%E5%BD%95/contact.h)

---


##  7. <a name='-7'></a>文件操作


---
###  7.1. <a name='-7.1'></a>字符串与格式化数据的转换
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8sscanf%E6%8A%8A%E5%AD%97%E7%AC%A6%E4%B8%B2%E8%BD%AC%E6%8D%A2%E6%88%90%E6%A0%BC%E5%BC%8F%E5%8C%96%E6%95%B0%E6%8D%AE/main.c)
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%B0%86%E6%95%B0%E5%AD%97%E5%AD%97%E7%AC%A6%E4%B8%B2%E8%BD%AC%E6%8D%A2%E6%88%90%E6%95%B0%E5%AD%97/main.c)

---
###  7.2. <a name='-7.2'></a>使用文件函数读写文件


---
####  7.2.1. <a name='-7.2.1'></a>用fseek和ftell计算一个文件的字节大小
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8fseek%E5%92%8Cftell%E8%AE%A1%E7%AE%97%E4%B8%80%E4%B8%AA%E6%96%87%E4%BB%B6%E7%9A%84%E5%AD%97%E8%8A%82%E5%A4%A7%E5%B0%8F/main.c)

---
####  7.2.2. <a name='-7.2.2'></a>可保存版本的通讯录
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%8F%AF%E4%BF%9D%E5%AD%98%E7%9A%84%E9%80%9A%E8%AE%AF%E5%BD%95/main.c)
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%8F%AF%E4%BF%9D%E5%AD%98%E7%9A%84%E9%80%9A%E8%AE%AF%E5%BD%95/contact.c)
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%8F%AF%E4%BF%9D%E5%AD%98%E7%9A%84%E9%80%9A%E8%AE%AF%E5%BD%95/contact.h)

---

##  8. <a name='-8'></a>宏


---
###  8.1. <a name='-8.1'></a>用宏实现带参数的打印
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E5%AE%8F%E5%AE%9E%E7%8E%B0%E5%B8%A6%E5%8F%82%E6%95%B0%E7%9A%84%E6%89%93%E5%8D%B0/main.c)

---
###  8.2. <a name='-8.2'></a>宏连接标识符
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%AE%8F%E8%BF%9E%E6%8E%A5%E6%A0%87%E8%AF%86%E7%AC%A6/main.c)

---
###  8.3. <a name='-8.3'></a>模拟实现宏offsetof计算结构体成员偏移量
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/my_offsetof/main.c)

---


##  9. <a name='-9'></a>算法总结


---
###  9.1. <a name='-9.1'></a>排序算法


---
####  9.1.1. <a name='-9.1.1'></a>直接插入排序法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%9B%B4%E6%8E%A5%E6%8F%92%E5%85%A5%E6%8E%92%E5%BA%8F%E6%B3%95/main.c)

---
####  9.1.2. <a name='-9.1.2'></a>选择排序法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F%E6%B3%95/main.c)

---
####  9.1.3. <a name='-9.1.3'></a>冒泡排序法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F/main.c)


---
####  9.1.4. <a name='-9.1.4'></a>快速排序法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F%E6%B3%95/main.c)


---
####  9.1.5. <a name='-9.1.5'></a>希尔排序法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%B8%8C%E5%B0%94%E6%8E%92%E5%BA%8F%E6%B3%95/main.c)

---
####  9.1.6. <a name='-9.1.6'></a>归并排序法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%BD%92%E5%B9%B6%E6%8E%92%E5%BA%8F%E6%B3%95/main.c)

---
###  9.2. <a name='-9.2'></a>公约数与公倍数


---
####  9.2.1. <a name='-9.2.1'></a>循环穷举法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%BE%AA%E7%8E%AF%E6%B1%82%E6%9C%80%E5%A4%A7%E5%85%AC%E7%BA%A6%E6%95%B0/main.c)

---
####  9.2.2. <a name='-9.2.2'></a>辗转相除法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E8%BE%97%E8%BD%AC%E7%9B%B8%E9%99%A4%E6%B3%95%E6%B1%82%E6%9C%80%E5%A4%A7%E5%85%AC%E7%BA%A6%E6%95%B0/main.c)

---
###  9.3. <a name='-9.3'></a>查找算法


---
####  9.3.1. <a name='-9.3.1'></a>暴力查找法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E9%80%90%E4%B8%80%E6%AF%94%E8%BE%83%E6%B3%95%E4%BB%8E%E6%95%B0%E7%BB%84%E4%B8%AD%E6%9F%A5%E6%89%BE%E5%85%83%E7%B4%A0/main.c)

---
####  9.3.2. <a name='-9.3.2'></a>二分查找法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E4%BA%8C%E5%88%86%E6%B3%95%E4%BB%8E%E6%9C%89%E5%BA%8F%E6%95%B0%E7%BB%84%E4%B8%AD%E6%9F%A5%E6%89%BE%E5%85%83%E7%B4%A0/main.c)

---
####  9.3.3. <a name='-9.3.3'></a>分块查找法
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%88%86%E5%9D%97%E6%9F%A5%E6%89%BE%E6%B3%95/main.c)

---
###  9.4. <a name='-9.4'></a>位运算相关算法


---
####  9.4.1. <a name='-9.4.1'></a>判断一个数的二进制序列有几个1
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%88%A4%E6%96%AD%E4%B8%80%E4%B8%AA%E6%95%B0%E4%BA%8C%E8%BF%9B%E5%88%B6%E5%BA%8F%E5%88%971%E7%9A%84%E4%B8%AA%E6%95%B0%E4%BC%98%E5%8C%96%E7%89%88/main.c)

---
####  9.4.2. <a name='-9.4.2'></a>判断一个数是不是2的n次方
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%88%A4%E6%96%AD%E4%B8%80%E4%B8%AA%E6%95%B0%E6%98%AF%E4%B8%8D%E6%98%AF2%E7%9A%84n%E6%AC%A1%E6%96%B9/main.c)

---
####  9.4.3. <a name='-9.4.3'></a>两个数二进制序列不同位的个数
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E4%B8%A4%E4%B8%AA%E6%95%B0%E4%BA%8C%E8%BF%9B%E5%88%B6%E5%BA%8F%E5%88%97%E4%B8%8D%E5%90%8C%E4%BD%8D%E7%9A%84%E4%B8%AA%E6%95%B02.0/main.c)

---
####  9.4.4. <a name='-9.4.4'></a>从数组中找到一只单身狗
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E4%BB%8E%E6%95%B0%E7%BB%84%E4%B8%AD%E6%89%BE%E5%88%B0%E5%8D%95%E8%BA%AB%E7%8B%97/main.c)

---
####  9.4.5. <a name='-9.4.5'></a>从数组中找到两只单身狗
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/find_single/main.c)

---
####  9.4.6. <a name='-9.4.6'></a>将一个数的二进制位的奇数位和偶数位交换
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/swap_bin/main.c)

---
###  9.5. <a name='-9.5'></a>进制转换


---
####  9.5.1. <a name='-9.5.1'></a>二进制转十进制
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E4%BA%8C%E8%BF%9B%E5%88%B6%E8%BD%AC%E5%8D%81%E8%BF%9B%E5%88%B6/main.c)

---
####  9.5.2. <a name='-9.5.2'></a>二进制转八进制
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E4%BA%8C%E8%BF%9B%E5%88%B6%E8%BD%AC%E5%85%AB%E8%BF%9B%E5%88%B6/main.c)

---
####  9.5.3. <a name='-9.5.3'></a>八进制转二进制
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%85%AB%E8%BF%9B%E5%88%B6%E8%BD%AC%E4%BA%8C%E8%BF%9B%E5%88%B6/main.c)

---
####  9.5.4. <a name='-9.5.4'></a>八进制转十进制
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%85%AB%E8%BF%9B%E5%88%B6%E8%BD%AC%E5%8D%81%E8%BF%9B%E5%88%B6/main.c)

---
####  9.5.5. <a name='-9.5.5'></a>十进制转二进制
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%8D%81%E8%BF%9B%E5%88%B6%E8%BD%AC%E4%BA%8C%E8%BF%9B%E5%88%B6/main.c)

---
####  9.5.6. <a name='-9.5.6'></a>十进制转八进制
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%8D%81%E8%BF%9B%E5%88%B6%E8%BD%AC%E5%85%AB%E8%BF%9B%E5%88%B6/main.c)

---
###  9.6. <a name='-9.6'></a>三步翻转法



---
####  9.6.1. <a name='-9.6.1'></a>将一句话的单词倒置
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E5%B0%86%E4%B8%80%E5%8F%A5%E8%AF%9D%E7%9A%84%E5%8D%95%E8%AF%8D%E5%80%92%E7%BD%AE%EF%BC%88%E4%B8%89%E6%AD%A5%E7%BF%BB%E8%BD%AC%E6%B3%95%EF%BC%89/main.c)

---
####  9.6.2. <a name='-9.6.2'></a>左旋字符串
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%94%A8%E4%B8%89%E6%AD%A5%E7%BF%BB%E8%BD%AC%E6%B3%95%E5%B7%A6%E6%97%8B%E5%AD%97%E7%AC%A6%E4%B8%B2/main.c)

---


##  10. <a name='-10'></a>自制游戏


---
###  10.1. <a name='-10.1'></a>猜数字游戏
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E7%8C%9C%E6%95%B0%E5%AD%97%E8%87%AA%E5%88%B6%E7%89%88/main.c)

---
###  10.2. <a name='-10.2'></a>三子棋游戏
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/%E4%B8%8B%E6%A3%8B%E6%B8%B8%E6%88%8F/main.c)

---
###  10.3. <a name='-10.3'></a>扫雷游戏
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/MineSweeping/test.c)
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/MineSweeping/game.c)
[跳转至代码](https://github.com/Jeffreykakk/C-code/blob/master/MineSweeping/game.h)

---


