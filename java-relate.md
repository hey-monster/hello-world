1、final 顾名思义，“最终的，不可修改的”，它是形容词，用来修饰名词。
　　final 修饰符可用于Java 的四个结构。

变量：     一个 final 变量能且只能赋值一次。
成员变量：一个 final 成员变量也能且只能赋值一次，在类所定义的构造函数里。
方法：     一个 final 成员方法既不能覆盖(override)，也不能隐藏。
类：        一个 final 类不能扩展(extends)

final 变量
　　一个 final 变量只能赋值一次，允许你声明为局部常量。这样的变量可以留后赋值，创建空白final 变量，但是所有的 final 变量必须赋值一次。
    final 变量在以下两种情形非常有用：防止意外改变方法参数和让匿名类访问变量。

2、java抽象类和接口
一、抽象类
从形式上来说，用abstract修饰的类就是抽象类。抽象类是不完整的，只能做基类，且不能够实例化（不能new） 
如public abstract class VolumeProvider
https://www.bbsmax.com/A/Gkz144WNdR/
二、接口
对于面向对象编程来说，抽象是它的一大特征。在java中，可以通过两种形式来体现OOP的抽象：抽象类和接口。
接口（interface），在软件工程中，接口泛指供别人调用的方法或者函数。
[public] interface InterfaceName{

3.extends
在 Java 中通过 extends 关键字可以申明一个类是从另外一个类继承而来的，一般形式如下：

类的继承格式
class 父类 {
}
class 子类 extends 父类 {
}

继承关键字
继承可以使用 extends 和 implements 这两个关键字来实现继承，而且所有的类都是继承于 java.lang.Object，当一个类没有继承的两个关键字，则默认继承object（这个类在 java.lang 包中，所以不需要 import）祖先类。

extends关键字
在 Java 中，类的继承是单一继承，也就是说，一个子类只能拥有一个父类，所以 extends 只能继承一个类。
implements关键字
使用 implements 关键字可以变相的使java具有多继承的特性，使用范围为类继承接口的情况，可以同时继承多个接口（接口跟接口之间采用逗号分隔）。

![图1]（https://github.com/hey-monster/hello-world/blob/master/image/java/types_of_inheritance-1.png)
