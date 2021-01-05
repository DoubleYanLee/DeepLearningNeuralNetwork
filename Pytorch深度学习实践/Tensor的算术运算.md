## 四则运算

### 加法 减法 运算

c = torch.add(a, b) -> tensor(3)

c = a + b

a.add(b)     a.add_(b)(这里会对a的值进行修改，变成a+b的和)

a .sub(b)    a.sub_(b)

### 乘法 除法 运算（对应元素相乘 哈达玛积 element wise）

c = a * b   c = torch.mul(a,b)    这个是点乘 也就是对应元素相乘 不是矩阵的那种乘法

a.mul(b)   a.mul_(b)  a.div(b)   a.div__(b)

### 矩阵的乘法

#### 二维矩阵  torch.mm(a,b)  torch.matmul(a,b)  a @ b 

a.matmul(b)  a.mm(b)  `注意a为 m * n 的矩阵，b就要为 n* p的矩阵`

#### 高维矩阵

![matrix_matmul](/Users/yannie/Desktop/Pytorch/1.png)

### 幂运算

torch.pow(a,2)  a.pow(2)   a**2  a.pow_(2)

torch.exp(a)  表示e^n   a.exp_()

### 开方运算

a.sqrt()  a.sqrt_()

### 对数运算

torch.log2(a)   torch.log10(a)   torch.log(a) -> 默认底数为e    torch.log_(a)

#### PyTorch中的in-place操作

* “就地操作”，即不允许使用临时变量  

* add_   sub_   mul_  

  #### PyTorch 中的广播机制

  * 张量参数可以自动拓展为相同大小

  * 广播机制要满足右对齐  

    `torch.rand(2,1,1) + torch.rand(3)`  这里3前面会加上两个1变成 113   是否满足对齐要看当前两个元素是否相等或者是否有一个值为1

    

  

### Tensor的取整/余运算

![method](/Users/yannie/Desktop/Pytorch/2.png)

#### Tensor的比较运算(其返回的也是一个tensor，由false和true构成 即mask张量)

![](/Users/yannie/Desktop/Pytorch/3.png)

 ![](/Users/yannie/Desktop/Pytorch/4.png)

![](/Users/yannie/Desktop/Pytorch/5.png)

### Tensor的三角函数和其他的数学函数

![](/Users/yannie/Desktop/Pytorch/6.png)

![](/Users/yannie/Desktop/Pytorch/7.png)

* sigmoid也叫做激活函数 由于符号函数没办法求导，所以有了sigmoid函数
* 通过sigmoid函数 我们的数据会被影射到[0,1]的区间上去

![](/Users/yannie/Desktop/Pytorch/8.png)

![](/Users/yannie/Desktop/Pytorch/9.png)

#### 该看3.15了





























































