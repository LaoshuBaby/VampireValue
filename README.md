# VampireValue

## 介绍

你是否想过

吸血鬼是否真的存在这个世界上？

答案显然是否的。那么，文学作品中的吸血鬼形象，又是人们按照什么标准来塑造的呢？

他们之间又有什么共同的地方呢？而不同又是什么程度上的？

这些具有共性的特点，是人们因为何种理由而塑造出来的？

为此，我们准备了这份VampireValue，作为一份对文学艺术作品中吸血鬼形象分类判别以及判断相似关系远近的问卷，并构建了一个粗糙的数学模型来进行计算。

因为判断项目的不同，因此模型结果仅针对同版本的量表有效。





## 计算方法

本repo的数值并非从零开始的得分，仅保证每个选项之间等间距，可以用作不同的两个角色之间计算差异的大小

例如，我们以3.1和5.1为例，计算差异的大小(3.1在前)

```c
#include<stdio.h>
#include<math.h>

int main(void)
{
	double Value1 = sqrt(pow((0 - 0.5), 2) + pow((0 - 0.5), 2) + pow((0 - 0), 2) + pow((0.5 - 0.5), 2) + pow((2 - 2), 2) + pow((1 - 1), 2) + pow((0 - 0), 2) + pow((1 - 1), 2));
	double Value2 = sqrt(pow((0 - 0), 2) + pow((1 - 0), 2) + pow((3 - 3), 2) + pow((4 - 1), 2) + pow((2 - 0), 2) + pow((1 - 1), 2) + pow((1 - 0.5), 2) + pow((0 - 4), 2) + pow((0.5 - 1), 2) + pow((0 - 0.5), 2) + pow((0.5 - 0), 2) + pow((0.5 - 0), 2) + pow((0 - 0), 2));
	double Value3 = sqrt(pow((0 - 0), 2) + pow((1 - 1), 2) + pow((2 - 0), 2));
	double Value4 = sqrt(pow((1 - 1), 2) + pow((0 - 2), 2) + pow((0 - 1), 2) + pow((1 - 1), 2));
	printf("%lf,%lf,%lf,%lf", Value1, Value2, Value3, Value4);
}
```

输出的结果为：

```
0.707107,5.590170,2.000000,2.236068
```

对于差异的大小，我们需要一个客观的量化标准，比如与所有吸血鬼角色的同一类指标的平均值或者中位数作为划分差异大和差异小的指标

但因为没别的数据嘛，1和2和3为界限吧

我们可以理解，在起源的方面，瑟拉娜与索菲是没有太大差异的，但是在特性上差异就非常大

但是特性共有13个项目，起源只有8个项目

平均每个项目的差异贡献是这样的：

```
0.088388,0.430013,0.666666,0.559017
```

由此看来，差异最大的，反而是外貌这一项了

————

那么，究竟最终将采取什么算法，也希望有擅长数学和统计的朋友能帮忙指点



## 类似的评测问卷

本repo将考虑独立出来作为一个社科方向的研究性repo出现，而不是以聊动漫的娱乐性质出现。
如果没人看，那就……当是死宅捏人设的参考就行了

### 左派测试：

测试地址：https://leftvalues.github.io/
Repo页面：https://github.com/LeftValues/leftvalues.github.io

### 8values测试：

测试地址：https://8values.github.io
Repo页面：https://github.com/8values/8values.github.io



## 鸣谢

感谢[tangwenrao/tricks](https://github.com/tangwenrao/tricks)对本项目的支持和孵化