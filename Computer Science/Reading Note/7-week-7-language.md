# 七周七语言
    新坑啊，这本书大概的流程，看书，装环境，自己试着实现文中的例子以及看看能不能用新语言搞点小新闻

## 第一章 简介
    按照作者的说法，这本书的目的，并不是让你成为专家，而是教会你比“Hello World！”更实用的知识；很多时候就是告诉你语法糖，各个语言之间最本质的一些差异。
    1.作者想要传达给我们的：
      1）语言的类型模式是什么
      2）语言的编程泛型是什么
      3）怎样和语言交互
      4）语言的判断结构和核心数据结构
      5）语言的核心特性（食戟梗：当我们事先某种逻辑的代码时，我们的代码上会映衬出这门语言的样子，我们称之为必杀特性）
    2.要学的语言Ruby，Io，Prolog，Scala，Erlang，Clojure，Haskell
    3.不是安装指南，不是编程参考
    4.玩大于利益，享受编程！

## 第二章 ruby
    1.Matz设计语言的初衷：并不担心语言的执行效率，精力放在提高开发效率上。所以ruby的优势在于语言的灵活性（众多语法糖），劣势在于效率
    2.解释型，面向对象，动态类型语言
    3.Ruby是纯面向对象语言，鸭子类型
    4.符号:symbol的形式，相同符号是同一物理对象
    5.通过yield来调用代码块
    6.规范：
        1）类以大写字母开头，采用驼峰命名法
        2）实例变量前加上@，类变量前必须加上@@，以小写字母开头，采用下划线命名法
        3）常量全部大写
    7.类设计思想：先定义类的主要部分，然后用模块mixin添加额外功能
    8.集合的一些功能，all，collect，select，inject等
    9.元编程
        1）开放类（ruby可以随处重新定义任何类和对象，很方便也很危险）
        2）method——missing
        3）模块
    10.ruby的应用：
        1）脚本
        2）ROR，web开发
    11.不足：
        1）性能
        2）并发和面向对象编程
        3）类型安全
    
## 续第二章 ruby
    1.我个人用的2.2.3，linux和windows都很好装，JetBrains有一款IDE RubyMine，跟phpstorm和pycharm一个风格
    2.2.2.7习题：
        1）Ruby API 文档：http://ruby-doc.org/core-2.2.3/
        2）Programming Ruby：http://ruby-doc.com/docs/ProgrammingRuby/（英），http://vdisk.weibo.com/s/aSSvdjXJj4zY（中）
        3）替换字符串某一部分方法：
            #1 直接替换str['xxxx'] = 'yyyyyy'
            #2 gsub or gsub！：http://ruby-doc.org/core-2.2.3/String.html#method-i-gsub
            #3 replace：http://ruby-doc.org/core-2.2.3/String.html#method-i-replace
        4）Ruby正则表达式：
            http://www.cnblogs.com/cnblogsfans/archive/2009/02/02/1382745.html
            http://www.cnblogs.com/cnblogsfans/archive/2009/02/03/1383505.html
        5）Ruby Range：
            http://ruby-doc.org/core-1.9.3/Range.html
            http://www.runoob.com/ruby/ruby-range.html
        6）puts “Hello World！”
        7）puts “Hello World！”
        8）name = “wiki”
           10.times {puts name}
        9）x = 1
           puts "This is sentence number #{x}." , x = x + 1 while x <= 10
        10）用9）的代码测试
        11）见: https://github.com/Wiki616/Reinforce/blob/master/Computer%20Science/7-week-7-language-code/Ruby/GuessNumber.rb
    3.2.3.9习题
        1）打印数组内容：https://github.com/Wiki616/Reinforce/blob/master/Computer%20Science/7-week-7-language-code/Ruby/arrayPrint.rb
        2）接口友好的树类Tree：https://github.com/Wiki616/Reinforce/blob/master/Computer%20Science/7-week-7-language-code/Ruby/Tree.rb
        3）简单的grep程序（找出文件中带有某个词组的行全部打印）：https://github.com/Wiki616/Reinforce/blob/master/Computer%20Science/7-week-7-language-code/Ruby/grep.rb

## 第三章 Io
    1.Steve设计Io语言的初衷：C/C++语言语法和语义规则过于复杂，于是做Io尽量简化语法和语义规则
    2.原型语言
        1）所有事物都是对象
        2）所有与对象交互都是消息
        3）不需要实例化类，而是复制原型对象
        4）对象会记住其原型
        5）对象有槽（类似key=>value）
        6）槽包含对象，方法
        7）消息返回槽中值或调用方法
        8）如果对象无法响应某消息，则它会把该消息发送给自己的原型
    3.单例的实现：变更clone方法
    4.编程习惯：
        1）大写字母开头的对象是type，类型的复制品小写
        
