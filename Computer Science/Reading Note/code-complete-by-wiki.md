# 代码大全读书笔记

##第一章 软件构建
    
    将通常我们认为的coding，programming看成construct，对于写代码，更重要的是明确软件/系统/web等等的构建过程
    
    软件构建过程：
    
    1.定义问题
    
    2.需求分析
    
    3.规划构建
    
    4.软件架构/高层设计
    
    5.详细设计
    
    6.编码与调试
    
    7.单元测试
    
    8.集成测试
    
    9.集成
    
    10.系统测试
    
    11.保障维护
    
    我个人的看法是1,2是确定需求的过程，确定下来我们需要做些啥，在问题明确的基础上进行3,4,5即架构设计部分，
    这部分最为消耗脑细胞，既要具有一些前瞻性，也不能过于将系统变得复杂，而6就是我们正常而言的coding阶段，
    7~10是测试阶段，为了确保代码不要太惨，在接受大众摧残前要保证不会有明显的bug，最后的保障维护就是在系统
    上线后能对其发生的问题进行维护
    
    构建活动是软件开发中的核心活动，开发的主要时间是用于构建活动，可以提高开发效率，源代码是对构建活动的唯一精确描述，是构建活动的产物

## 第二章 隐喻对软件开发的指导

    隐喻与算法
    
    隐喻：将软件开发的过程与传统行业或者活动进行对比，通过传统活动的一些好的方法来指导代码构建，常见的有将软件开发比作写作，培育，建造。
    
    算法：可预测的，确定性的，不易变化的

## 第三章 前期准备的重要性

    1.前期准备是十分重要的，一般而言，构建活动占整个过程的65%
    
    2.测试是质量保证的后续环节，真正对系统的质量保证是前期准备中的高质量设计
    
    3.实现一个系统前，一定要理解这个系统是做什么的，它该如何做到这些
    
    4.程序员是食物链的底层，架构师吃掉需求，设计师吃到架构，程序员消化设计
    
    5.3-1有一张表，各阶段解决问题的平均时间
    
    6.迭代技术往往能够减少“前期准备”不足，但不能完全解决
    
    7.序列式开发法和迭代式开发法
    
    需求稳定；设计直截了当，而且理解透彻；开发团队对于这一应用领域非常熟悉；项目的风险很小；"长期可预测性”很重要；后期改变需求，设计，编码的代价比较大 适合序列式开发法
    
    需求并没有被理解透彻，不稳定；设计很复杂，或者有挑战性，或者两者兼具；开发团队对于这一应用领域不熟悉；项目包含许多风险；“长期可预测性”不重要；后期改变需求，设计和编码的代价比较小 适合迭代式开发
    
    8.问题定义只定义问题是什么，问题定义应该用客户的语言来书写，而且应该从客户的角度来描述问题；未能定义问题可能会导致用大量的时间去解决错误的问题。同时你并没有解决问题。
    
    9.明确的需求很重要，明确的需求很重要，明确的需求很重要，你懂的，PM最好理解这点
    
    10.稳定的需求是开发的圣杯
    
    11.平均水平，需求会有25%的变化
    
    12.计划严格依照需求行事，实际上就是计划不对客户的要求做出回应
    
    13.构建期间处理需求变更
    
    1）利用书中的需求核对表来评估需求的质量 p42
    
    2）确保每一个人都知道需求变更的代价
    
    3）建立一套变更控制程序
    
    4）使用能适应变更的开发方法
    
    5）放弃这个项目
    
    6）注意项目的商业案例
    
    14.离开了良好的软件架构，你可能瞄准了正确的问题，却用了错误的方法，依然不会成功。
    
    15.架构需要注意的典型组成部分：
    
    1）程序组织
    
    2）主要的类；详细定义主要的类的功能
    
    3）数据设计；所用的数据库，数据表的设计
    
    4）业务规则；如果架构依赖于特定的规则，那么就应该详细描述这些规则
    
    5）用户页面设计：用户界面常常在需求阶段进行详细说明
    
    6）资源管理：架构应该描述一份管理稀缺资源的计划（数据库连接，线程，句柄等）
    
    7）安全性：架构应该描述实现设计层和代码层面的安全性的方法
    
    8）性能：性能目标可以包括资源的使用，这时，性能目标也应该详细定义资源之间的优先顺序
    
    9）可伸缩性：可伸缩性是指系统增长以满足未来需求的能力。
    
    10）互用性：与其他软件，硬件交互
    
    11）国际化/本地化：语言，编码等
    
    12）输入输出流一定要注意
    
    13）错误处理：是计算机科学中最棘手的问题之一
    
    14）容错性
    
    15）满足各类功能的架构可行性（我能否肝出来）
    
    16）过渡工程：系统在检测到错误后继续运行的能力
    
    17）对于上述系统，我们是造好，还是外包买好
    
    具体check checklist表
    
    14.一个运行良好的架构花费在问题定义，需求分析，软件架构上的时间，依据项目的需要而变化，一般在10%~30%左右


## 第四章 关键的构建决策

    1.选择适合的语言：我个人熟悉的语言C，C++，Java，PHP，略有了解的语言python，JavaScript，SQL，VB，C#，MATLAB，HTML，希望学习的语言Ruby，lua，Object C，scala，Haskell等，感觉学不完啊
    
    2.编程约定：树立自己的编码风格
    
    3.技术浪潮中自己的位置：技术变革中找准方向
    
    4.深入一种语言去编程：C++各类书籍，TIPI撸起
    
    5.选择主要的构建实践方法：p69，70两张很nice的checklist

## 第五章 软件构建中的设计

### 设计中的挑战

    软件设计意味着去构思，创造或发明一套方案方案，把一份计算机软件的规格说明书要求转变为实际运行的软件
    
    1.设计是一个“险恶”的问题——简单的讲这里的险恶多指挥不停地改变，你必须先解决一遍后再能更加明确地定义问题，从来迭代式地逼近真正要解决的问题，做出真正可以解决问题的设计（这是我个人的理解）
    
    2.软件设计的结果应该是1.组织良好 2.干净利落的，然而形成设计的过程是了无章法的。（设计的过程不像是解题，可以依据一定的公理方法来推出最后的结果，所以过程是充满错误的，而设计阶段发现错误并改正远比到了编码阶段时要的代价小）
    
    3.设计就是确定取舍和调整顺序的过程。（在算法竞赛中，时间复杂度往往直观重要，而在实际生产中，也许数据的量非常小，这个时候代码的可读性以及编写效率等成了较重的权重，取舍很重要）
    
    4.设计受到诸多限制（设计的要点，创造可能发生的事情，阻止可能发生的事情，后面的例子中也会有，比如子系统之间的通信，不能毫无限制可言）
    
    5.设计是不确定的，一个启发式的过程，是自然而然形成的，它是再不断的设计评估，非正式讨论，写试验代码以及修改试验代码中演化和完善的。
    
### 关键的设计概念
    
    1.全书最重要的观点目前来看没有之一：软件的首要技术使命——管理复杂度
    
    2.软件随着不停地迭代，加入新的功能，需要解决更大的难题，其交互行为越来越复杂，这些转而又增加了软件解决方案本质性困难，当项目因技术性原因而导致失败时，往往是因为失控的复杂度。
    
    3.当没有人知道对一处代码的改动会对其他代码造成什么影响的时候，项目也快停止进站了。
    
    4.陷入复杂度沼泽的现象——自己顽固地使用一种明显毫无作用的方法（我的理解是谁都知道这方法很蠢，但我们依然没有办法，系统过于复杂，我们除了用这种方法别无方法）。
    
    5.软件架构层次上，可以将系统划分为子系统以降低问题的复杂度，子系统之间互相依赖越少，越容易专注在问题的一部分（低耦合）
    
    6.高代价，低效率的设计的三种根源：用复杂的方法解决简单的问题；用简单但错误的方法解决复杂的问题；用不恰当的复杂的方法解决复杂的问题
    
    7.管理复杂度的方法：1.把任何人在同一时间需要处理的本质复杂度的量减到最少；2.不要让偶然性的复杂度无谓地快速增长
    
    8.理想设计的特征：最小的复杂度；易于维护；松散耦合；可拓展性；可重用性；高扇入（大量的类使用某个基础类）；低扇出（一个类里少量使用其他的类）；可移植性；精简性（不要有大量冗余代码）；层次性；标准技术（尽量使用标准，常用的技术）
    
    9.设计的层次：软件系统——>分解为子系统或包——>分解为类——>分解成子程序（routines）——>子程序的内部设计
    
### 设计构造块：启发式方法

    1.找出现实世界的对象
    
    2.形成一致的抽象（基类，用简化的观念来考虑复杂的概念）
    
    3.封装实现细节（不让别人看到复杂的内部逻辑细节，你能看到的就是你能得到的）
    
    4.当继承能简化设计时就继承（继承很危险，第六章有讲）
    
    5.信息隐藏（黑盒子，而不是玻璃盒，类的接口应该尽量少地暴露其内部工作机制。类很像冰山，只有1/8暴露在表面）信息隐藏所保管的秘密主要有两大类（1.隐藏复杂度，其他人不用关注，2.变化源，变化发生时，变化只在内部进行，其他人看来不会有影响）这点非常非常重要，做设计时好好问自己，要隐藏些什么。
    
    6.设计时好好分析哪里会发生变化或者变化的频率高于其他地方，将其找出来并隔离
    
    7.高内聚低耦合（老生常谈）
    
    8.使用一些常用的设计模式来解决问题（设计模式就是经过考验的前人的设计总结，轮子，最重要的在于降低风险以及便于其他人理解）这一块要单独看些书
    
    9.设计启发的一个总结p108
    
### 设计实践

    主体还是分而治之以及自顶向上自底向上这些方法相结合，还是之前的话，设计时了无章法的，所以要试
    
## 第六章 可以工作的类

    类的基础——ADT抽象数据结构，使用ADT的好处：隐藏实现细节；改动不会影响到整个程序；让接口提供更多的信息；更容易提高性能；让程序的正确性更显而易见；程序更具自我说明性（更好读）；类相关于有继承和多态的ADT
    
    1.良好的类接口：好的抽象（便于别人理解类抽象的是什么）；良好的封装（尽可能限制类与成员的可访问性，不要公开暴露成员数据，多使用private，不要把私用的实现细节放入类接口中，不要对类的使用者做假设；避免使用友元类，让阅读代码比写方便，千万避免破坏封装性的行为）；
    
    2.包含和继承，7+-2规则
    
    1）通过包含来实现has a关系，万不得已时才使用private继承来实现有一个关系，警惕超过7个数据成员的类
    
    2）用public继承来实现是一个关系，使用继承一定要有详细的说明，不然就别用，对基类一定要做严格的check，确保只继承需要的部分，不要覆盖一个不可覆盖的成员函数，公共接口，数据，操作尽量放在继承树种较高处；类是抽象概念，别混成实例，同样基类如果只有一个派生类，别过早设计，继承树的高度不能太高，3层左右就很复杂了，尽量使用多态来替代case，数据尽量private，protected也不是很安全
    
    3.类里面的子程序越多越容易出错，所以7+-2，减少类调用的子程序数量，低扇出，对其他子程序的间接调用尽量减少，一般而言减少类之间的相互合作
    
    4.创建类的原因：对象建模；抽象概念；降低复杂度；隔离复杂度；隐藏实现细节；限制改变影响；隐藏全局数据；让参数传递更流畅；建立中心控制点；代码复用；便于重构
    
    5.避免的类：万能类；无关紧要的类；别用动词命名类；
    
    
## 第七章

    1.不良子程序的常见问题：
        1）子程序名很差（之前打算重构的促销活动部分的displayPromo_XX）
        2）没有文档
        3）布局代码风格不统一
        4）传入参数命名问题，命名为inputXXX的就不能被改变
        5）读写全局变量
        6）所做事情没有一个统一的目的，太过杂糅
        7）没有防错（实践中经常遇到）
        8）出现过多神秘数值（多用定义）
        9）出现无用参数（很多IDE可以帮检查）
        10）参数过多以及参数顺序混乱（haojing里很多遗留代码也有这种问题）
    
    2.创建子程序的原因
        1）降低复杂度（全书很多都是围绕这个观点）
        2）引入中间易懂抽象，方便阅读
        3）避免代码重复（最初的想法）
        4）隐藏顺序，指针操作（有些算法的操作顺序比较反人类，指针操作亦然）
        5）提高可移植性
        6）简化复杂的布尔判断（各种check）
        7）方便以后修改（不用改多处了，同3）
        
    
    3.子程序层面上设计的考虑在于需要较高的内聚性，但功能的内聚性是我们希望的
    
    4.取一个好的子程序名（英文太差了，词汇贫瘠啊）
        1）正确描述子程序要干的事情
        2）避免使用无意义，模糊，表述不清的词汇
        3）不要仅通过数字来形成不同的子程序名（之前重构促销活动犯了错）
        4）子程序名长度9~15为宜
        5）给函数名时要对返回值有所描述（以后注意，是object还是array）
        6）尽量使用语气强烈的动词加宾语的形式。 p172有很多动词对比词
        
    
    5.子程序长度（超过200行时就要小心点了）
    
    6.子程序参数的使用
        1）使用所有的参数
        2）有一定的顺序（输入在前，状态，出错变量在后等）
        3）对参数要有一定的说明
        4）尽量控制在7个以内
        5）一个有意思的问题，是传入整个object还是其中某几个参数，看需要的这几个参数的作用，从需要表达何种抽象来考虑问题，调用子程序前有set up代码，调用子程序后有take down方法都是不好的设计
        
    
    7.函数和过程的对比，有无返回值，某些过程式的函数可返回执行结果。检查所有可能的返回路径，这里经常有可能有各种奇葩错误，不要返回指向局部数据的引用或指针
    
    8.宏：首先能不用尽量不用，有太多可以替代它的东西，命名全大写，一定要注意用大括号大起来，常见的宏定义错误 #define MULT(a) a*a
    
    9.inline：内联函数，好处：提高效率，坏处：子程序会变长，违反封装原则）

## 第八章 防御式编程
    
### 防御式编程核心思想是承认程序都会有问题，子程序不因传入错误数据而被破坏！
        1）检查所有来源于外部的数据的值（尤其防止sql，html，xml代码注入）
        2）检查子程序所有输入参数的值
        3）针对非法参数，制定错误处理方法

### 断言——用于代码中做各种假定，通常在开发阶段使用
        用错误处理代码来处理预期发生的状况，用断言来处理绝不应该发生的状况
        避免把需要执行的代码放入断言中
        对于高健壮性的代码，先断言再处理错误

### 常用错误处理方法
        1）返回中间值（0，null，“”这种）
        2）换用下一个正确数据
        3）返回上次返回值
        4）换用最接近的正确数据
        5）打log
        6）制定并返回错误码
        7）局部处理掉
        8）exit

### 正确性与健壮性（正确性宁愿挂也不返回错误模糊的值，健壮性的有点小错没关系，程序能持续跑就可以）

### 异常的使用
        1）只有在真正例外的时候抛出异常
        2）不能用异常来推卸责任
        3）不要在构造析构函数中抛出异常
        4）不要使用空catch
        5）尽力去了解所使用库会抛出的异常
        6）考虑异常的集中报告机制以及异常的替换机制

### 隔离程序（我的理解是使用中间件来处理错误的数据，除了中间件，其他内部类可以假定数据是干净可信的）
        隔栏内程序应使用断言技术，因为传进来的数据要背隔栏清理好

### 尽早引入一些辅助调试的代码（有计划地移除他们）

### 产品代码中保留防御式代码
        1）保留检查重要错误的代码
        2）删掉一些检查细微错误的代码
        3）去掉可以导致程序硬性崩溃的代码（die）
        4）保留可以让程序稳妥地崩溃的代码（即使挂也不让用户看到白页的502,404）
        5）记录错误信息（haojing线上错误邮件机制）
        
### 关于安全性问题，还有很多扩展阅读空间       

## 第九章 伪代码编程过程
    1.95%的问题是我自己造成的，剩下5%才是编译器或者硬件等其他因素造成的
    2.理解每一行代码的作用，这点非常重要，不能为了完成任务而忽略了这一点
    3.构造类以及其子程序的时候问自己：
        1）这个类是要做什么
        2）这个类要隐藏哪些信息
        3）类所要表达的抽象概念
    4.构造类的过程
        1）创建类的总体设计
        2）创建类中的子程序
        3）复审并测试整个类
    5.在注释下面填写代码，确保注释可以看出简单的伪代码，以后写代码对于自己负责的子程序要多说明input，output（有时确实感觉到明明是自己之前写的，但却不是很记得逻辑了，有好的注释避免别人和自己花太多时间去理解代码）    
    

## 第十章 使用变量的一般事项
    1.一个数据类型以及一些数据结构的测试（熟悉1，听过但记不清具体含义0.5，不清楚0）p239，作者超有意思的杜撰了几个名词，然后只要得分超过30的就明显是撒谎的，因为根本没有那些东西，不过我自己测下来的感觉是有不少0.5，比如B-树（以及B+树，我只记得是多路查找树，数据库中进行索引的，然后叶子节点是按照顺序排列的，但具体的一些规则，以及插入删除中运用的一些技巧就不记得了）于是它推荐了几本介绍数据结构以及算法的书
    2.有时要注意隐式声明（防止写错变量名，然而编译器不报错，可以关掉，或者养成声明所有变量）
    3.变量初始化原则——不合理的初始化是编程错误的常见根源之一
        1）在声明变量的时候初始化（对于php而言，第一次使用这个变量时就是初始化变量）
        2）在靠近变量第一次使用的位置初始化 //以前写算法竞赛代码比较喜欢用全局变量以及用一个子程序init来初始化变量，现在想想都是不好的习惯，虽然对于比赛也可以认为是不坏的
        3）理想主义：在第一次使用变量的位置声明和定义该变量
        4）多用const，final（防止不必要的改变）
        5）特别注意i，j，k（php下感觉还好，大多用foreach，多层带迭代变量的循环比较少）
        6）在构造函数里初始化数据成员（之前我是打算这么做的，但非常蠢，在构造函数里打数据库也不好）
        7）编译器开出变量未初始化警告
        8）对于子程序而言，一定要其检查输入输出
        9）程序开始时初始化工作内存
    4.作用域——这里并非强调语言上用何种方式实现怎样的作用域范围，而强调了对于变量的作用域我们要谨慎地设计，总的说来，我们要尽量将变量“发挥作用”集中在一起（也佐证了为何要去用子程序），好的变量引用要尽量局部化。
        1）跨度——变量不同使用处之间的距离，平均跨度——求个平均值，跨度过长会导致阅读时更加麻烦（屏幕不够大也许就要翻页了）
        2）存活时间，如在1,5,6,9行用过某变量，则跨度为4,1,3，平均值为（4+1+3）/3，而存活时间是9-1=8），对于一段代码或者一个子程序，其所有变量的平均存活“越短越好”（这个其实不能这么说，但不要太长），但同时减少跨度和存活时间是个好主意，写代码时虽然不会特地去计算，但还是会有意识地去想着将变量集中起来
        3）一些原则：循环开始时再去初始化循环里使用的变量，而不是在子程序开始时（说实话我以前一直超喜欢这么干），这样便于看出哪些变量会在循环中使用；直到变量即将被使用再为其赋值；相关语句放一起——>相关语句提取出来写成子程序；开始时采用最严格的可见性，根据实际情况对扩展变量的作用域
    5.作用域大的“好处”是程序员写的时候方便，可以随意访问变量的便捷，忽视了可能带来的风险。书中的很多观点不适合用于自己写个脚本这种，因为书中的观点是建立在代码是多人合作完成的大项目，是需要不断维护的，所以对我们而言，你写代码时的速度和便利性不如别人阅读你代码的便利性重要，而变量集中化后更方便后人阅读代码。文章称之威提高智力上的可管理性。
    6.持续性，垃圾用好不能因为语言有垃圾回收机制就不手动去管理内存（haojing调用数据库的Node::clean，以及php手动使用unset）
    7.变量绑定时间
        1）绑定时间：编码时；编译时；加载时（从文件中读取之类）；对象实例化；即时；
        2）绑定时间越早灵活性越差，但相反它的复杂度越低，使用具名变量要好过神秘数值
    8.常见三种控制结构：顺序，选择，循环
    9.为变量指定单一用途；
        1）文中原话：通过使用一些巧妙的方法，可以给一个变量赋予多种职责，不要使用这种奇技淫巧（竞赛写题看过很多这种奇技淫巧，自己也模仿过不少，现在想想表面上代码更简洁了，但却不方便理解了，最常见的做背包时的滚动数组降维就是个典型，充分利用了顺序，当时跟XQ讲解时一直让他理解不能，最后还是举了明确的例子模拟一遍才明白）
        2）避免让变量有隐性含义：如pageCount为已打印纸张数量，当其为-1时表明错误发生。（写最短路时，最喜欢省一个数组，直接用一个G，如果两者没有连接的边，则置为一个很大的值，然后强撸就行了，似乎最后是用另外一个数据来表示有无边）
        3）确保使用了所有已声明的变量（IDE会帮做太nice）
    
### 我TM真是各种中枪    

## 第十一章 变量的力量（学好英语的重要性）
    1.首先说明，我写代码一直为起变量名苦恼，大量情况下会用google翻一下，词汇量实在太贫乏了，而我也非常认同好的变量名很有用，以及好的代码就像让别人读英语文章一样轻松（虽然对于我来说并不轻松，我需要网易词典的帮助）
    2.好的变量名即可以准确表达描述该变量概念的名字
    3.好的变量名往往表达的是what（什么），而不是how（如何）
    4.都市传说变量名长度在8~20比较好
    5.例如total，average，sum，max，min，record这些限定词扔到最后面
    6.常用的对仗词
        1）begin/end
        2）first/last
        3）locked/unlocked
        4）min/max
        5）next/previous
        6）old/new
        7）opened/closed
        8）visible/invisible
        9）source/target
        10）up/down
    7.没有明确意义，仅仅起迭代作用的循环变量常用i，j，k，如果需要使用它进行一些运算，起个更加明确的名字（php使用时array迭代时也不要光就key=>value)
    8.为状态变量取一个比flag更好的名字，比如isLocked这种
    9.大量的临时变量用temp做变量名，区分清楚，有些有实际含义的，对其进行更加准确的表述
    10.布尔变量命名
        1）常用done，error，found，succes，ok，尽量不要用not前缀，如notFound这种名字，自己或者别人会绕进去的
        2）命名规则（驼峰法，下划线等）与项目组保持一致即可
    11.应该避免的一些情况：
        1）使用令人误解的缩写（缩写本身是个单词）
        2）避免使用具有相似含义的名字
        3）避免使用具有不同含义却有相似名字的变量
        4）避免使用数字（之前经常犯的错误）
        5）不要拼错单词
        6）不要仅靠大小写区分变量名
        7）避免使用多种语言（比如我请个变量名叫shimakaze）
        8）同7）例子，不要用一些跟业务无关，然而却是我们自己很喜欢的某件东西命名

## 第十二章 基本数据类型
    1.数值理论
        1）避免使用神秘数值，有一种观点认为主程序中只能出现0和1（最近越发觉得记录东西非常非常重要，很多之前做的case“完全”不记得是怎么搞的，都需要回头翻代码，虽然大多时候会恍然大悟，但真心觉得代码中不要出现这种令人费解的神秘数值）
        2）预防除零（常见问题，然而屡屡中招）
        3）注意类型转换
        4）避免混合类型比较（虽然这方面php相当宽松）
    2.整数
        1）检查整数除法（结果往往不是你想象的那样）
        2）检查整数溢出（老胡之前中过一招，代码中结果是-1，存入数据库某个字段，结果那个字段是unsigned int，而且那个字段的真实意义是money的价格，你懂的，同样我们经常遇到的二分搜索，取中值尽量使用mid = min + (max-min)/ 2）
    3.浮点数
        1）等价判断设置个阈值
        2）总而言之，注意精度问题，多用double吧
    4.字符和字符串
        1）同样注意不要出现神秘字符串
        2）避免off-by-one问题
        3）了解语言和开发环境对unicode的支持
        4）各种各样的编码问题
        5）字符串指针和字符数组的差异，字符串操作，使用strcmp，strcpy等（C中），C++ string类要好用多了
        6）用null来初始化无结束符的字符串
    5.布尔变量
        1）用布尔变量对程序进行文档说明
        2）用布尔变量来简化复杂的判断
    6.枚举类型——可以提高程序的可读性，要警惕明确赋值带来的失误
    7.具名常量
        1）在数据声明中使用
        2）避免使用文字量
        3）用具有适合作用域的变量或类来模拟具名常量
        4）统一地使用具名变量
    8.数组
        1）确认下标有没有超（php多确认下isset，in_array不会不好）
        2）考虑用容器来取代数组（简单讲，别人写好的容器就别自己写数组去模拟了）
        3）检查数组的边界点
        4）数组是多维的，确认下标使用是否正确
        5）多层嵌套循环里，千万注意不要把i写成j，j写成i
    9.自定义类型原则
        1）取一个功能导向的名字
        2）避免使用预定义类型
        3）不要重定义一个预定义的类型
        4）定义替代类型以便于移植
        

## 第十三章 不常见的数据类型
    1.已经说了不常见了，为什么不常见，原因很简单，能不用尽量不用
    2.结构体（有类了，结构体可以看成是全体公用数据成员的类，我以前也很喜欢用结构体，很好用，但有类了）
    3.指针
        1）最最重要导致尽量少用的原因是，姿势水平太低的程序员用指针是超容易出错的
        2）当你要去用指针时，确定你理解它
        3）小tips：在分配指针的域中删除指针；使用指针前检查指针；先检查指针所引用的变量再使用它；用狗牌字段检测损毁的内存；用额外的指针变量提高代码可阅读性，比如不要p->next->next->data这种可以把中间值提出来，于是要简化指针表达式啊；删节点时注意顺序；垃圾数据及时清理；
        4）所以别用啊指针啊，不，别自己裸写，能用封装好的容器就用
    4.全局数据
        1）问题显而易见，因为它是全局的，所以太过自由了，所以根据之前的理论，他的跨度和存在时间都太大了，所以复杂度过高，导致我们对其难以管理
        2）个别用用还是可以的，别烂用，所以无论是确定其为全局数据还是起名都要慎重
    
## 第十四章 组织直线型代码
    1.顺序结构的代码怎么写，有些顺序结构的代码之间存在依赖关系，先有09后有天
    2.组织好顺序结构的代码，让依赖关系更明晰
        1）取子程序名的时候突出依赖关系
        2）利用子程序参数暗示依赖关系（调用了相同的参数）
        3）用注释对顺序进行直接说明
    3.阅读代码时，如果需要跳来跳去，那么这是个糟糕的代码
    4.把相关的代码放到一起，代码组织的好，按照依赖关系，各段代码不会出现交叉

## 第十五章 使用条件语句
    1.先写正常代码，再处理不常见的情况
    2.确保对于等量分支是正确的，防止off-by-one错误
    3.if后面跟随有意义的语句，不要为空
    4.多考虑else情况，测试else正确性，检查if，else有没有反
    5.判断复杂时将其提出来写成布尔函数
    6.最常见的情况放最前面
    7.case语句的用法
        1）排列有序，不要乱序，按字母顺序，按功能结构，按使用频率
        2）简化每种情况对应的操作
        3）不要为了使用case语句而刻意造没有实际意义的变量
        4）default只用于默认情况
        5）不要利用语言特性滥用case（不break）

## 第十六章 控制循环
    1.阻止循环发生错误的方法
        1）减少能影响循环的因素数量，简化简化再简化
        2）把循环内部看成是黑盒子，从这个角度讲，使用break的循环更容易出错
    2.写循环结构的原则
        1）只从一个地方进入循环
        2）把初始化的代码紧放在循环前面
        3）用while（true）表示无限循环
        4）适当情况下多使用for循环（控制代码部分集中在一起）
        5）while循环更适用时不要用for循环
        6）不管多短，都用{}括起来
        7）避免空循环（写快排时喜欢这么写for (;a[i] < x;i ++);这么写不如写while (a[i] < x) i ++;直观）
        8）循环只做一件事（有些从代码正确性上可以放一起，但其实他们不是在做一件事情）
        9）i++，j++这种控制循环的内务操作集中放到循环体开头或者结尾
    3.使用continue和break可以令循环更加灵活，但要小心有很多break，continue的循环体
    4.检查循环端点是否正确
    5.用有意义的变量名来替代i，j，k使得代码更易于阅读，以及避免下标串话
    6.循环下标的作用域限制在循环体内
    7.循环尽可能短，15~20lines为宜，嵌套三层以内，考虑将较长的部分功能化成子程序
    8.代码较长时，利用continue，break来使得逻辑更加清晰

## 第十七章 不常见的控制结构
    1.首先不常见就是少用
    2.增强阅读性的情况下，使用return，如利用return错误信息来做异常处理（防卫子句），适当减少每个子程序中的return数量
    3.递归使用注意点
        1）确认递归终止条件
        2）使用安全计数器来防止无穷递归（卡节点）
        3）把递归限制在一个子程序里，不要出现A->B->C->A这样的循环调用（大大增加管理理解难度，代码复杂度猛增）
        4）作者（不是我）怒斥了很多计算机科学教课书讲解递归时使用了愚蠢的计算阶乘，费布那切数列作为例子。原话如下：为我工作的程序员如果用递归去计算阶乘，我会炒了他。作者通过这个例子总结三点经验。计算机科学教程中给出的递归例子没有给世界带来任何好处；递归是强大的工具，功能之强大远超使用它们去计算阶乘和费布那切数列；所有的递归都能通过栈+循环来模拟实现，如何选择，试具体情况来定。
    4.goto语句使用原则
        1）不熟悉，没经验的别用，事实上99%的情况下你不会用到它，剩下几条是那1%情况下你要用它时的原则
        2）尽量在每个子程序内只使用一个goto标号
        3）尽量goto都统一向前跳不要向后跳了
        4）确认所有goto标号都被用到
        5）确认goto不会产生不被执行的代码
    5.诸如goto语句这些不常用的结构控制语句曾经都离奇地引起过轰动，如同现在的很多新技术或者新特性一样，然而并没有被广泛地接受

    
## 第十八掌 表驱动法
    1.表驱动法是一种编程模式，从表里面查询信息，而不是通过选择语句逻辑
    2.三种常用方法
        1）直接访问法（俗称打表）
        2）索引访问（索引啊）
        3）阶梯访问（>a1,>a2,>a3）
    3.p417例子理解理解
    4.表驱动法的优点，简单明了，避免大量逻辑判断，而且时间复杂度也有一定的提升（空间会大些）

## 第十九章 一般控制问题
    1.布尔表达式
        1）用true，false来做布尔判断，1,0之类的不够明显并且有可能根据编译器语言不同而不同
        2）便于理解的情况下，可以隐式地比较布尔值
        3）拆分复杂的判断引入中间布尔变量简化布尔判断
        4）把复杂的布尔判断写成布尔函数（只要可以明显改善可读性）
        5）利用决策表代替复杂判断，表驱动法有讲
        6）合理使用括号明确计算顺序
        7）按照数轴顺序写数值表达式判断
        8）与0，null比较时要注意
        9）C常见问题 if （a = 2）
    2.复合语句
        1）括号一起写（编辑器帮干了）
        2）即使只有一句话，依旧可以使用括号来更明确地表达语句
    3.不建议if，while等中使用空语句，如果使用，可以用宏定义或者定义一个doNothing函数
    4.循环嵌套超过3就很危险，很难理解，尽量控制在3以内，提出一部分写成子程序
    5.对于if语句，合理使用if else if的结构来提高可阅读性以及之前提到的continue，break等手段
    6.简单度量子程序复杂度的方法
        1）从1开始，过程序，遇到if，while，repeat，for，and ，or 关键字就+1
        2）case语句每种情况+1
        3） < 5 : 子程序可能还不错；6-10：得想办法简化子程序了；10+：子程序有些复杂，需要真正考虑去优化了

## 第二十章 软件质量概述
    1.软件质量特性
        1）外部特性（给PM，用户看的）：正确性；可用性（易用性更好理解）；效率（时间，空间）；可靠性；完整性；适应性；精确性；健壮性（无效输入输出，压力测试）；
        2）内部特性（给程序员看的）：可维护性；灵活性（需要加减功能时代码修改方便否）；可移植性；可重用性；可读性；可测试性；可理解性；
    2.改善软件质量的技术
        1）软件质量目标（越早明确越好，越早的错误越难修正）
        2）明确定义质量保证工作
        3）测试策略
        4）软件工程指南
        5）非正式技术复查
        6）正式技术复查
    3.缺陷存在时间越长，修复代价越高（所以代码初期的检查尤为重要）code review远比测试来的效益高
    4.与现实相反，世界上没有免费的午餐，即使有也很糟糕，改善代码质量可以降低开发成本而不是提高，有一个实验表明，给一群程序员开发一个项目，然后平均开发时间为5h，而在平均开发时间的这批代码质量最差，开发的很快或者很慢（有严格的检查）的质量最好。（我的理解，现在花点时间把代码质量搞搞好，远比以后去填坑来的容易）

## 第二十一章 协同构建
    1.协同构建包括结对编程，正式检查，非正式技术复查，文档阅读等
    2.好处包括：是其他质量保证技术的补充；有利于传授公司文化以及编程专业知识；集体所有权适用于所有形式的协同构建（有人看着，代码质量比自己写更高；某个人离开后对项目的影响更小，有很多人了解这段代码；bug修正周期变短，更多人了解代码，随便谁修就好了，不必等某个人有时间
    3.所有的协同构建都是为了检查出代码的问题，提高代码质量，并不是为了羞辱其他人，显示自己吊的不行的，所以不要用类似的语句“是个人都知道，Java里面0到N-1，比1到N效率不知道高多少”（原文例子）目的是改善代码质量以及让新或者经验少的员工能不断学习而不是指责团队中某人是白痴，fire掉他
    4.这一章的很多内容我暂时了解即可，不是十分用的到，以后回来重看
    
## 第二十二章 测试
    1.测试是反程序员的活动，开发是为了没有问题，而测试是为了找出问题
    2.测试不能改善代码，也不能证明程序中没有错误，然而我们还是要去做//如今越来越不重视了，现在的快速迭代开发模式下，测试越来越偏于简化，微软之前也把测试拆掉了，而很多互联网开发，都是由开发自行测试以提高效率
    3.测试先行，很难去考虑一些奇葩的情况，而测试后行却容易受自己编码逻辑的束缚。
    4.两个开发者测试小技巧
        1）结构化基础测试，相比代码覆盖要简单些，通过程序时开始记1，每遇到if ，while，repeat，for，and，or+1，case一句+1，最后得到的数为你需要给你代码设计的测试数据数
        2）数据流测试，已定义，已使用，已销毁；一个数据流正常的顺序应该是如此，以及进入子程序的顺序是已进入，已退出；p510，出现其他所有不同于上述的组合，就需要去怀疑你的代码有问题，或者说写的不够好
    5.边界要注意，off-by-one错误，考虑一些坏数据以及好数据的情况；（初始数据很重要要测，比如对于经典的协同过滤方法，冷启动问题就很严重）
    6.设计正确用例时尽量简单易于人工检查（也许需要各种计算等）
    7.%80的错误来自20%的代码，20%的代码消耗80%，所以你懂的，最贵的地方最容易出错
    8.错误分类：大多数错误的影响范围是相当有限的；许多错误发生在构建的范畴之外；笔误是一个常见的错误；错误理解设计经常导致错误；大多数错误容易修正；
    9.75%的错误由编码造成；10%错误源于需求；15%源于设计；
    10.脚手架模型p523

## 第二十三章 调试
    1.调试与测试一样，无法本质改善代码
    2.优秀的程序员和普通的程序员在调试上的水准差异较大
    3.理解问题，理解自己编写及修改的代码，自行code review，审视解决方案的方法以及fix方法
    4.解决bug时，与其雄心万丈考虑一个完美的方法来解决，不如用最简单的方法先hotfix
    5.项目出现问题后，先审视自己的部分，避免陷入窘境
    6.科学调试方法
        1）将错误稳定下来（稳定地重现bug）
        2）确定错误来源
            a.收集产生错误的相关数据
            b.分析所收集的数据，并构造对缺陷的假设
            c.确定怎样去证实或证伪这个假设
            d.做出结论
        3）修补bug
        4）对问题进行测试
        5）查找是否有类似的错误
    7.tips：
        1）提炼产生错误的测试用例
        2）在单元测试中测试代码
        3）各种可用的工具
        4）尝试多种方法重现错误
        5）对可能的错误原因进行头脑风暴
        6）将需要进行尝试的事情列出（很容易尝试某一个就深入下去回不了头了）
        7）利用打印语句，日志记录等方法二分代码范围，确定出错位置
        8）最近修改过的，之前出现过bug的代码段应该更加重视
        9）适当扩大嫌疑代码区间
        10）与其他人讨论（忏悔式调试）——确实比较有体会，讲着讲着就发现自己某个地方sb了
        11）休息片刻再来啃
        12）如果重写方便就直接重写吧
    8.很多书中“过时”的东西：
        之所以说过时，是因为现代的IDE，以及代码托管工具等已经帮我们搞定了，然而加引号是指它那种思想，比如每次尽量做小改动（commit），注意保留改动前的源代码这种思想并不过时
        
## 第二十四章 重构
    1.软件界神话：我们事先完全按照步骤，严格确认需求，设计完美的设计，代码交付后永远不需要更改。——显然不可能！然而这并不是我们把所有事情交给重构去干的理由（反正有重构，先hard code一下吧）
    2.软件的演化并不完全是一个上升的姿势，当软件的演化降低了程序质量时，我们就需要对代码进行重构。
    3.重构的理由：
        1）代码重复。最最最基础的，永远不要复制自己的代码原则，以及复制黏贴即设计之谬
        2）子程序太长。不要超过一个屏幕
        3）循环太深嵌套太深，之前提过，一般超过三层循环就要小心了
        4）类的内聚性太差。函数——要干就干一件事，类——要干就干一类事
        5）类的接口抽象层次不一致。（很容易搞混）
        6）参数太多。（haojing中也有不少函数存在这种问题，一开始没有，不停地加就多起来了，一般而言不超过7个）
        7）类的内部修改往往局限于某个部分
        8）需要对多个类/case/继承体系进行并行修改。(考虑设计上是否欠妥）
        9）相关的数据只是被放在一起，没有组织到类中。
        10）成员函数更多地使用了其他类的功能，而非自身类（那这个类存在的价值是什么？）
        11）过于依赖基本数据类型
        12）一个类不做什么事情
        13）一连串传递流浪数据的子程序
        14）中间人对象什么也不干
        15）某个类与其他类关系过于密切（考虑继承？）
        16）命名太差（英语太差）
        17）慎用public
        18）派生类仅仅使用基类很少一部分方法（是否真的需要派生？）
        19）用注释掩饰拙劣的代码质量
        20）使用全局变量
        21）预测性设计（超于需求的预测性设计很多时候会产生冗余）
    4.重构的方法：
        1）用具名常量代替神秘数字
        2）变量起个明确语义的名字
        3）表达式内联化
        4）用函数来代替表达式
        5）引入中间变量，便于理解代码语义
        6）将多用途单一变量转化成多个单用途变量
        7）使用局部参数实现局部用途而不是使用参数
        8）基础数据类型转化成类
        9）一组类型码转化成类或枚举类型
        10）将数组转化成对象
        11）封装群集
        12）用数据类代替传统记录
        13）分解复杂的布尔表达式
        14）过于复杂的布尔表达式转化成布尔函数
        15）将条件语句中不同部分的重复代码合并
        16）使用break或return而不是循环控制变量
        17）在嵌套的if then else 语句中一旦知道结果就立刻退出，而不是赋给一个值
        18）用多态来代替条件语句（case）
        19）创建并使用空对象代替对空值的检测（haojing中一直没有）
        20）提取子程序
        21）将子程序代码内联化
        22）将冗余的子程序转化成类
        23）用简单的算法代替复杂的算法
        24）根据实际情况增加减少函数参数
        25）查询，修改操作区分开来（如将redis slave都是用于查询，master用于操作）
        26）通过传递某一参数不同使得子程序具有不同功能
        27）传递整个对象和特定成员一定要从命名上区分开来（不然以后别人来用很容易晕的，city是什么，类还是就是shanghai）
        28）封装向下转型操作
        29）引用对象和值对象注意清楚
        30）用数据初始化代替虚函数
        31）改变成员函数和数据的位置
        32）将特定代码提成派生类
        33）将相似代码合并起来放到基类里
        34）将成员不相关的子程序放到其他类中
        35）拆/删/合并类接口
        36）隐藏委托关系
        37）去掉中间人
        38）委托，继承直接的互相转化
        39）引入外部子程序
        40）引入拓展类
        41）封装暴露在外的成员变量
        42）对不能修改的成员去掉set函数
        43）为无法控制的数据创建明确的索引源
        44）将单向类联系改为双向类联系
        45）将双向类联系改为单向类联系
        46）使用工厂模式而不是简单的构造函数
        47）异常以及错误代码之间互相转化
    5.重构有风险，重构需谨慎：
        1）保留初始代码
        2）重构步伐小点
        3）同一时间只做一项重构
        4）把要做的事情一一列出
        5）设置停车场
        6）多使用检查点
        7）重新小心测试
        8）利用diff工具检查对代码的修改
        9）根据重构方法的风险级别来调整重构方法
    6.不宜重构的情况：
        1）重构不是先写后改
        2）不要用重构代替重写
    7.重构策略：
        1）在增加子程序时考虑重构
        2）添加类时进行重构
        3）在修补缺陷时重构
        4）关注易于出错的模块
        5）关注高度复杂的模块
        6）维护代码时顺手改善下代码质量
        7）定义好干净代码和拙劣代码的边界，尝试进行“转移”
    8.推荐书籍：《重构：改善既有代码的设计》    

# 第二十五章 代码调整策略
    1.性能优化一定不能过度专注性能损失代码的可读性和可维护性
    2.性能不仅仅是时间，还有所占有的资源
    3.在花费时间等代价处理性能问题时先确认好这是一个必要的问题
    4.一些策略：
        1）设计架构有限考虑整体性能，为单个子程序设置效率要求
        2）类和子程序内部实现使用较好的数据结构和算法来实现（快排vs选排，二分查找vs顺序查找）
        3）同操作系统的交互需要密切关注
        4）使用优秀的编译器以及相应的编译优化开关
        5）换更好的硬件（最简单直接的方法，但代价较高）
        6）代码调整（对正确的代码进行一些细微的调整以达到提高性能的目的）
    5.Pareto法则
        1）20%的子程序消耗了80%的执行时间。Knuth的论文中提到过：不足4%的部分常常占用了超过50%的运行时间
        2）典型的一种做法，80%的框架设计书写使用python等高级解释语言书写，20%的核心代码用C/C++来写
    6.一些无稽之谈
        1）高级语言中，减少代码的行数就可以提升所生成的机器代码的运行速度或减少其占有的资源。（清晰的代码会比一些奇技淫巧更利于编译器理解，然而并不是跟代码行数挂钩，这个笑话让我想起一部网上盛传的韩剧的一张截图）
        2）特定运算“可能”比其他快，代码规模也更小，这段不是非常理解，不过作者的意思似乎是表达，语言版本，编译器版本，库种类等可能影响这句话
        3）应当随时随地优化——knuth的名言：过早的优化是万恶之源。不这么做的原因在于几乎不可能在程序所有功能跑通之前确定出程序的性能瓶颈。程序员也很难正确预测程序瓶颈，随时随地优化缺少前瞻性
        4）程序的运行速度与正确性同等重要，性能是建立在正确性的基础上的，但个人看法，这个问题要看情况，有时效率大幅度提升，而对于非十分要求准确的代码而言可以在出错率较低的情况下考虑调整
    7.何时进行优化？设计稳定，程序正确，模块化且易于修改，后期维护工作方便的情况下进行性能优化
    8.善用编译器优化
    9.常见的低效率问题
        1）输入/输出操作（IO操作，数据库操作，跨网络请求）
        2）分页操作
                for (int i = 0;i < n;i ++)
                    for (int j = 0;j < m;j ++)
                        table[i][j] = getItem()
            vs
                for (int j = 0;j < m;j ++)
                    for (int i = 0;i < n;i ++)
                        table[i][j] = getItem()
        3）系统调用（调用系统子程序，上下文切换，这里提一下，在很早以前，读了骆可强的国家集训队论文后，了解到调用子程序的代价并不低后（比如循环中需要调用），我一直很迷信的尝试不写子程序，还是用大量的空行来使得代码“看上去”有那么一点整洁而保持效率，当然显然这是不对的）
        4）解释型语言的锅
    10.常见操作相对效率p601：常见的用一些不易理解的位运算来代替原有的运算
    11.很多优化编译器已经做了，所以做了优化后做好测量方法（Mta大法好！）
    12.代码调整方法总结：
        1）用设计良好的代码开发软件，使得程序易于理解和修改
        2）程序性能不好
            a）对系统进行benchmark，找出瓶颈所在
            b）判断性能问题是否出在设计，数据结构或算法层面上，是改掉他，否，进行代码调整
            c）对瓶颈代码进行代码调整
            d）调整后对性能进行测量记录
            e）保留调整中的代码
        3）保留性能最佳且易于理解的代码

# 第二十六章 代码调整技术
    1.logic知道答案后立刻退出，返回（合理使用break，return）
    2.case语句按照出现频率的顺序判断
    3.用查询表来代替复杂的逻辑式
    4.惰性求值（需要时再去生成并使用它）
    5.与循环无关的判断外提，合并一些循环结构相同的循环，循环展开，减少循环内做的事情，（破坏代码美观以及语义逻辑）
    6.哨兵值，把哨兵塞到正常数组里，然后只要判断值正确与否即可（就是边界判断，N*N的地图，在外面加一层，变成(N+2）* (N+2)的地图，然后边界值赋值为-1即可
    7.最忙的循环放到最里面
    8.削减强度（使用多次轻量级运算代替重量级运算，位运算）
    9.使用整型而不是浮点数
    10.数组维数控制不要过高
    11.使用索引，缓存机制
    12.表达式使用代价更低的恒等表达式代替原有的
    13.编译期初始化
    14.小心系统函数
    15.常用的值实现算出来
    16.合并公共子表达式
    17.子程序改写成内联
    18.低级语言重写部分代码

# 第二十七章 程序规模对构建影响
    1.项目规模扩大后的难度，工作量以及其他代价并非简单线性增长的，无法理解这点很难调整好自己做项目的心态
    2.交流，项目需要交流，当人数扩大时，交流路径是N^2增大的，所以因交流产生的错误可能性也增大，所以需要写文档来减少一些冗余的交流
    3.项目规模会影响错误的数量和类型，随着项目的不断增大，因需求和设计犯的错误会更多。随着项目的增大，每千行代码缺陷密度会增大p652，大型项目的密度达到小型的4倍甚至更多
    4.小项目生产率的根本影响因素是程序员的能力，大项目则是组织方式等
    5.小项目的生产率一般而言远高于大项目
    6.项目规模影响了活动比例，小项目65%左右是代码构建，中项目大约50%，大项目则可能不足30%，虽然构建活动随着项目规模增大而增大，但其他活动增大的更快，不同活动比例对项目的成本也有影响，对于小项目，5%的时间用于架构足够了，但大项目可能需要超过15%~20%的时间进行架构
    7.开发方法：敏捷开发vs计划驱动，轻量级vs重量级

# 第二十八章 管理构建
    1.这一章原文讲的十分概括性，有很多辅助阅读资料，而且是从你成为一个管理者或者你应该如何和管理者打交道的角度出发，暂时不会有切身体会
    2.一些良好的编码实践技术（习惯？）
        1）项目的每部分分派两个人（导师制，结对编程，伙伴系统），最大的好处，一个跳槽的概率要高于两个都跳槽了
        2）逐行code review（知道有人review，总归不会写的太烂，写烂了，通过不断地review会变好）
        3）要求代码签名（责任制，出了问题或需要修改知道找谁）
        4）安排一些好的代码示例作参考
        5）强调代码是共有财产（有点不是非常理解会有人认为是私有财产？）
        6）奖励好的代码（一定要试非常出色的代码，不能某人明明是划的，却被奖励了）
        7）制定一些简单的标准
    3.配置管理——需求，代码，文档，测试用例
    4.需求变更时要慎重——最好有系统的流程来变更，而不是拍脑袋；成组处理变更（记下来，不是想到哪里改到哪里）；评估变更成本；提放大量变更；成立变更控制委员会；
    5.代码版本控制（SVN，git等）
    6.工具版本配置（IDE，开发平台等）
    7.有一个有效的备份计划，完成的项目进行归档
    8.评估构建进度表（jira，trello，tower等）
    9.进度落后的方法（加班赶上；扩大团队；缩小任务范围）
    10.把程序员当人看（废话，我当然是人）
        1）提供较好的工作环境
        2）了解程序员花在编程外的活动
        3）承认人与人之间有差距，团队之间亦然
    11.不要大意挑起战争——涉及编程信仰问题
        1）编程语言
        2）缩进风格
        3）大括号的摆放位置
        4）所用的集成开发环境
        5）注释风格
        6）效率与可读性的取舍
        7）方法选择
        8）编程工具
        9）命名习惯
        10）对goto的使用
        11）对全局变量的使用
        12）生产力的度量
    12.管理你的管理者（程序员角度）——大意是与不懂技术的管理者交流时尽量站在对方的角度去考虑，不要过多谈论他们不关心的技术细节（也许他们非常重要）

# 第二十九章 集成
    1.定义：将一些独立的软件组件组合为一个完整的系统
    2.集成频率：阶段式集成or增量集成
        1）阶段式集成：设计，编写，测试，调试各个类——>将这些类组合成一个庞大的系统——>测试并调试系统；这种我们又称为大爆炸集成，可能同时出现多个问题，且不好定位问题来源；类少的时候用比较好，节约集成时间
        2）增量集成：滚雪球集成；每次添加一个新类时，将其集成到系统上，并进行测试调试；好处：易于定位错误；及早令系统跑起来；改善对进度的监控;改善客户关系（能部分跑起来了！）；更充分测试各个单元；提升开发进度
        3）增量开发策略
            #1 自顶向下集成 底层问题不易早期被解决
            #2 自底向上集成 高层设计问题是个坑
            #3 三明治集成 上面两种方法缺陷的弥补，先集成高层设计，再集成底层广泛用到的工具类（两片面包）最后集成中间的类（火腿肠）
            #4 风险导向集成 对各个类进行风险评级，先集成风险高的类，后集成风险低的类
            #5 功能导向集成（顾名思义）
            #6 T-型集成 p701图，一看就懂，简单讲是先高层结构，再集成一个挑大梁部件
        4）daily buld & 冒烟测试
        

# 第三十章 编程工具
    1.使用工具能大大提高我们的效率，这一章节主要告诉我们，一个程序员需要哪些工具，至于你对于各种类型的工具具体选择什么，就因人而异了（巨硬大法好还是苹果大法好）
    2.设计工具：图形化的设计工具，UML，架构方块图，继承体系图，实体关系图，类图等（Mircosoft visio）
    3.源代码工具：
        1）IDE，好的IDE应该具备的功能：（Visual studio, PHPStrom，Eclipse等）
            #1 编辑器中进行编译以及错误检测
            #2 源代码控制工具，build工具，测试工具，调试工具集成
            #3 显示程序的大纲视图（代码折叠）、
            #4 跳转到类，子程序定义，变量定义处
            #5 跳转到使用某个类，子程序，变量的全部位置
            #6 针对特定语言的格式编排
            #7 针对语言的交互式帮助（编写提示）
            #8 括号匹配
            #9 常用语言的结构模板
            #10 智能缩进
            #11 自动化代码转换或重构
            #12 宏编程
            #13 列出查找的字符串，使常用的字符串无需重新键入
            #14 查找替换支持正则表达式
            #15 在一组文件中查找替换
            #16 同时编辑多个文件
            #17 双列式diff对比
            #18 多级编辑动作撤销
        2）diff工具（方便看case，查找bug来源）
        3）merge工具（版本控制）
        4）源代码美观器
        5）生成接口文档工具（方便写注释，为后来人着想）
    4.分析代码质量
        1）吹毛求疵的语法语义检查器
        2）尺度报告器（统计代码行，数据声明行，注释行，空行，每行代码是谁改的，进行了什么改动等）
    5.重构源代码
        1）重构器
        2）结构改组工具
        3）代码翻译器（使用前提原来代码就是一坨屎）
    6.版本控制工具（git）
    7.数据字典
    8.可执行码工具
        1）产生目标码
            #1 编译器链接器
            #2 build工具
            #3 程序库（造轮子的基本素养）
                1-容器类
                2-行用卡交易服务
                3-跨平台开发工具
                4-数据压缩工具
                5-数据结构与算法
                6-数据库操作工具与数据文件操纵工具
                7-图解图示图表工具
                8-图象工具
                9-许可证管理器
                10-数学运算
                11-网络与互联网通信工具
                12-报表生成器与报表查询生成器
                13-安全与加密工具
                14-电子表格和数据网络工具
                15-文本与拼写工具
                16-语音，电话与传真工具
            #4 代码生成向导
            #5 安装
            #6 预处理器
        2）调试
            #1 编译器的警告信息
            #2 测试用的脚手架
            #3 diff工具
            #4 追踪执行，监测器
            #5 交互式调试器
        3）测试
            #1 自动测试框架（JUnit）
            #2 自动化的测试生成器
            #3 测试用例记录回放工具
            #4 覆盖率监控器
            #5 符号调试器
            #6 系统扰动器
            #7 diff工具
            #8 缺陷注入工具
            #9 缺陷跟踪工具
    9.代码调整
        1）执行刨测器
        2）汇编代码清单和反汇编
    10.工具导向环境，打造自己熟悉的环境（微软一直在这么干）
    11.脚本——项目特有的工具
    12.工具幻境p722~723，归纳下来就是没有工具能消除编程

# 第三十一章 布局和风格
    1.基本原理，好的布局凸显程序的逻辑结构
    2.计算机永远可以理解你的代码，所以好的代码相比差的代码是要让人更容易看懂
    3.良好布局的目标：
        1）准确表达代码的逻辑结构
        2）始终如一地表现代码的逻辑结构
        3）改善可读性
    4.布局技术：空白，分组，空行（代码中最佳空行比例8%~16%），缩进
    5.常用结构：模仿纯块结构（我自己平时就一直是这种风格）
    XXXXX {
        AAAAA
        BBBB
    }
    6.一些考虑：
        1）段落之间用空行
        2）单语句代码块前后风格统一
        3）对于复杂的表达式，将条件分隔放在几行上
        4）不用goto
        5）case语句不要有行尾布局的例外
        6）单条语句控制在80以内
        7）变量声明在其首次使用处
        8）注释缩进与代码一致
        9）每行注释用至少一个空行分开
        10）用空行分隔子程序的各部分
        11）将子程序参数按标准缩进

# 第三十二章 自说明文档
    1.外部文档（单元开发文件夹，详细设计文档）
    2.最好的文档是碉堡的代码
    3.注释并不万能，不好的注释只有反效果
    4.高效注释关键
        1）采用易于修改的注释风格（有些花哨的风格很好看，但以后如果要修改会奇怪）
        2）用伪代码编程法减少注释时间
        3）注释集成到开发风格中
    5.不要添加无关注释（实时注意删掉无用注释）
    6.尽量不要用行尾注释，行尾注释用于数据声明
    7.好的注释
        1）注重为何做以及做什么，而不是怎么做
        2）注释为后面的内容做铺垫
        3）让每个注释都有用
        4）说明非常规做法
        5）注释不要有歧义
        6）将主次注释区分分开
        7）错误或特殊语言环境说明清楚
        8）给出违背一些编程规范的理由
        9）不要注释投机取巧的代码，应该重写之（可以先写着，但一定要记得改掉）
    8.类的实现细节不用说明，封装的一个好处就是信息隐藏
    9.注释文件的一般原则
        1）说明各文件的意图和内容
        2）将owner以及其信息放入注释
        3）版本等法律通告信息

# 第三十三章 个人性格
    1.编程的整个过程如同建造空中楼阁，是纯粹的脑力劳动
    2.要成为好的程序员，只能靠自己
    3.聪明与谦逊，编程界知识太过混杂，很难精通所有
    4.求知欲
        1）开发中有自我意识，如果工作竟是些无法提高自身技能的短期任务，需要跟老板提出意见。
        2）看书时进行试验时学习编程的有效途径之一
        3）阅读解决问题的有关方法
        4）行动前做好分析和计划
        5）学习成功项目的开发经验
        6）阅读文档，书本期刊，与专业人士多交流
    5.专业人员划分（拉哥之前也谈过类似的程序员升级加点问题）
        1）入门级：会利用某语言的基本功能，能编写类，子程序循环和条件语句，会使用语言的许多特性
        2）中级：度过入门级，能利用多种语言的基本功能，并会得心应手地使用至少一种语言
        3）熟练级：对语言或环境有着专业技能，精通很多技术细节，有自己的技术信仰
        4）技术带头人级：在第三级的基础上明白编码不是为计算机工作，而是为人，写出的代码具有很高的可读性
    6.诚实
        1）不是高手不装高手
        2）乐于承认错误
        3）理解编译器的警告
        4）透彻理解自己的程序，而不要只是编译看看能否运行
        5）提供实际的状况报告
        6）提高现实的进度方案，在上司面前坚持自己的观点
    7.良好的交流与合作
    8.创造力和纪律性（并不矛盾）
    9.“懒惰”，良好的懒惰具有创造力，软件就是为懒惰的人提供便捷
    10.坚持，拥抱变化
    11.好的习惯（代码习惯，思维习惯，多问几个为什么）
    12.小聪明，经验，坚持以及编程狂人是双刃剑！！！！！

# 第三十四章 软件工艺的话题
    1.征服复杂性，致力于降低复杂度是软件开发的核心，技巧：
        1）在架构层将系统划分为多个子系统，以便让精力集中于系统的一小部分
        2）仔细定义类接口，从而可以忽略类内部的工作机理
        3）保持类的抽象性，不必记住不必要的实现细节
        4）避免使用全局变量
        5）避免深层次的继承，很耗精力
        6）避免深度嵌套的循环或者条件判断，因为都可以用简单的控制结构来替代
        7）不用goto（就不要用了）
        8）小心定义错误处理方法，不要滥用不同的错误处理技术
        9）以系统的观点对待内置的异常机制，不能让异常不受约束
        10）不要让类过度膨胀，以致于占据整个程序
        11）子程序应保持短小
        12）命名逻辑清晰
        13）子程序参数数目尽量减少
        14）用规范和约定（记在本子上）来避免思维和代码的跳跃性
    2.精选开发过程（如何从团队的角度来进行开发）
    3.首先为人写代码，其次是机器（机器总归能读懂）
        1）可理解性
        2）容易复查
        3）错误率
        4）调试
        5）可修改性
        6）开发时间
        7）开发质量
    4.深入一门语言去编程，不浮于表面
    5.利用规范集中注意力
    6.基于问题域编程
    7.代码分为不同层次的抽象
        1）高层问题域
        2）低层问题域
        3）低层实现结构
        4）编程语言结构和工具
        5）操作系统的操作和机器指令
    8.问题域的低层技术
        1）在问题域使用类，来实现由实际意义的结构
        2）隐藏实现细节等信息
        3）使用具名变量来说明字符串等有意义的数据
        4）中间计算结果使用中间变量（有意义的）
        5）用布尔函数代替复杂判断
    9.迭代主义
    10.软件和信仰分离（很多时候自己需要有一套自己的代码信仰，但团队的规范也要去遵守，不要过于较真），以及解决方法折中主义
    11.试验，通过试验来验证来判断等

# 第三十五章 何处有更多信息
    这一章书本上提到的很多书虽然经典或者途径，但难免有些过时，但想法并不过时
    1.软件构建的信息（本书）
    2.构建之外的话题（奇怪的书，管理啊，心理啊等等，本书强推了一本《程序开发心理学》）
    3.期刊杂志
    4.专题出版物
    5.对于每个程序员（其实其他职业也一样）需要有自己的阅读计划
    6.一些专业的组织会议
    7.知乎，微信公众号等等新颖的模式