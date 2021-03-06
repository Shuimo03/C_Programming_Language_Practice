# 简答题

1. 什么是算法？是从日常生活找三个例子，描述它们的算法。

2. 什么叫结构化算法，为什么要提倡结构化算法？

3. 试述3种基本结构的特点，请另外设计两种基本结构(要符合结构的特点)

4. 用传统流程图表示求解以下问题的算法

   1. 有两个瓶子A和B，分别盛放着醋和酱油，要求将它们互换。(即A瓶原来盛醋，现在改成酱油，B瓶则相反)

   2. 依次将10个数输入，要求输出其中最大的数。

   3. 由3个数，a,b,c要求按大小顺序把它们输出。

   4. 求1+2+3+...+100

   5. 判断一个数能否同时被3和5整除。

   6. 将100-200之间的素数输出

   7. 求两个数m和n的最大公约数

   8. 求如下方程式的根，请分别考虑

      1. 有两个不相等的实根
      2. 有两个相等的实根。

      $$
      ax^2+bx+c = 0
      $$

5. 用N-S图表示第4题中各题的算法

6. 用伪代码表示第4题中各种的算法

7. 什么叫结构化程序设计？它的主要内容是什么？

8. 用自顶向下，逐步细化的方法进行以下算法的设计

   1. 输出1900-2000年中是闰年的年份，符合下面两个条件之一的年份是闰年。
      1. 能被4整除但不被100整除
      2. 能被100整除且能被400整除
   2. 求ax^2+bx+c = 0的根。分别考虑 d = b^2-4ac大于0，等于0和小于0这三种情况。
   3. 输入10个数，输出其中最大的一个数。

## 什么是算法？是从日常生活找三个例子，描述它们的算法。

算法是为了解决一个问题而采用的方法和步骤，计算机算法分为两类：数值运算算法和非数值运算算法，日常生活中算法，比如从北京去天津开会，算法如下

- S1购买车票
- S2乘坐交通工具到达北京站
- S3到达天津站后坐交通工具到会场
- S4参加会议

再比如考大学，算法如下

- S1填报志愿表
- S2交报名费
- S3领取准考证
- S4按时参加考试
- S5若取得录取通知书，则到达指定学校报到注册，否则结束。

最后，要去医院看病，算法如下

- S1乘坐交通工具到达医院
- S2到挂号窗口挂号缴费
- S3见到医生并且就诊
- S4就诊结束，根据情况开药住院。

## 什么叫结构化算法，为什么要提倡结构化算法？

由基本结构构成的算法称为结构化算法，基本结构有顺序结构，选择结构，循环结构，使用结构化算法的好处在于可以解决任何复杂的问题，不存在无规律转向，只有在基本结构内才允许分支和向前或向后的跳转。这样的好处是可以将复杂问题简单化,让编程更容易,提高代码维护和可读性。

## 试述3种基本结构的特点，请另外设计两种基本结构(要符合结构的特点)

顺序结构是表示程序中各操作是按照它们出现的先后顺序执行的，这种结构的特点是程序从入口点A开始，按顺序执行所有操作，直到出口点B处，称为顺序结构。

选择结构表示程序的处理步骤出现分支，当p条件成立的时候立即执行A操作，p条件不成立的时候，立即执行B操作。

循环结构分为当型循环结构和直到型循环结构，循环结构是反复执行某一部分的操作，当型结构的作用是当给定的条件p1成立的时候，执行A操作，执行完A操作后，在判断条件p1是否成立，如果条件仍然成立，则继续执行，直到条件不成立为止。

直到循环结构是先执行A操作，然后判断给定的p条件是否成立，如果条件p不成立，则在执行A操作，然后在对p条件做判断，如果条件p仍然不成立，则在执行A操作，直到条件成立为止，此时不再执行A操作。

![image-20200614164432132](C:\Users\wu-cola\AppData\Roaming\Typora\typora-user-images\image-20200614164432132.png)

## 用传统流程图表示求解以下问题的算法

### 有两个瓶子A和B，分别盛放着醋和酱油，要求将它们互换。(即A瓶原来盛醋，现在改成酱油，B瓶则相反)