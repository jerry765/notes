# Java期末复习

# 第一章
- 应用程序接口（Application Program Interface:API)也称为库;包括为开发程序而预定义的类和接口
- Java开发工具包（Java Development Toolkit:JDK)
- 集成开发环境（Integrated Development Environment IDE)

# 第二章
- import语句有两种类型：明确导入（specific import）和通配符导入（wildcard import），通配符导入是指通过使用星号作为通配符java\*导入包中所有的类
- 标识符是由字母、数字、下划线和美元符号$构成的字符序列。标识符必须以字母、下划线或美元符号开头，不能以数字开头
- 默认情况下整型直接量是一个十进制整数，要表示一个二进制整数直接量，使用0b或者0B(零B)开头；表示一个八进制整数直接量，就用0(零)开头，而要表示一个十六进制整数直接量，就用0x或0X(零x)开头

# 第三章
- 测试双精度值的相等是if-else常见的陷阱
- 异或操作符^:当且仅当两个操作数具有不同的布尔值时，两个布尔型操作数的异或(^)才为 true。注意，p1^p2 等同于 pl!>p20

# 第四章
- ASCII 码（美国标准信息交换码)，它是表示所有大小写字母、数字、标点符号和控制字符的 8 位编码表
- 两个字符可以使用关系操作符进行比较，如同比较两个数字一样。这是通过比较两个字符的 Unicode 值实现的
- 只能从一个特定的字符串实例来调用的方法称为实例方法。非实例方法称为静态方法。静态方法可以不使用对象来调用
- 要将字符串转换为 int 值，使用 Integer.parseInt方法;可以将数值转换为字符串，只需要简单使用字符串的连接操作符

# 第五章
- 关键字 break 立即终止包含 break 的最内层循环

# 第六章
- 每当调用一个方法时，系统会创建一个活动记录（也称为活动框架)，用于保存方法中的参数和变量。活动记录置于一个内存区域中，称为调用堆栈（call stack)。调用堆栈也称为执行堆栈、运行时堆栈，或者一个机器堆栈，常简称为*堆栈*。当一个方法调用另一个方法时，调用者的活动记录保持不动，一个新的活动记录被创建用于被调用的新方法。一个方法结束返回到调用者时，其相应的活动记录也被释放
- void 方法不需要 return 语句，但它能用于终止方法并返回到方法的调用者
- 实参必须与方法签名中定义的参数在次序和数量上匹配，在类型上兼容。类型兼容是指不需要经过显式的类型转换，实参的值就可以传递给形参，例如，将 int 型的实参值传递给 double 型形参
- 方法重载(method overloading)：在一个类中有两个方法，它们具有相同的名宇，不同的参数列表。Java 编译器根据方法签名决定使用哪个方法。调用方法时，Java 编译器寻找最精确匹配的方法。
	- 被重载的方法必须具有不同的参数列表。不能基于不同修饰符或返田值类型来重载方法。
	- 有时调用一个方法时，会有两个或更多可能的匹配，但是，编译器无法判断哪个是最精确的匹配。这称为*歧义调用（ ambiguous invocation)*。歧义调用会产生一个编译错误。
- 参数列表是指方法中参数的类型、 顺序和个数。方法名和参数列表一起构成*方法签名*（method signature）。参数是可选的，也就是说，一个方法可以不包含参数。

# 第七章
- 一个数组变量看起来似乎是存储了一个数组，但实际上它存储的是指向数组的引用
- for (elementType element: arrayRefVar)          {Process the element}
- new elementType[]{valueO, valuel, … ，valued};       该数组没有显式地引用变量，这样的数组称为*匿名数组*（anonymous array)
- **数组在 Java 中是对象**。JVM 将对象存储在一个称作堆（heap）的内存区域中，堆用于动态内存分配
- 具有同样类型的可变长度的参数可以传递给方法，并将作为数组对待。                                          typeName… parameterName ( 类 型 名 … 参 数 名 ）
- main 方法可以从命令行接收字符串参數。
	- java TestMain "First num" alpha 53
- 当创建一个数组时，如果其中的元素的基本数据类型是数值型，那么赋默认值 0。**字符类型的默认值为'\\u0000'**，布尔类型的默认值为 false

# 第九章
- 类为对象定义属性和行为，一个对象是类的一个实例，创建实例的过程称为*实例化*（instantiation)
- 垃圾会占用内存空间。Java 运行系统会检測垃圾并自动回收它所占的空间，这个过程称为*垃圾回收*（garbagecollection)。如果你认为不再需要某个对象时，可以显式地给该对象的引用变量賦 null 值。如果该对象没有被任何引用变量所引用，Java 虚拟机将自动回收它所占的空间。
- 静态变量被类中的所有对象所共享。静态方法不能访问类中的实例成员。
	- 注意，在 UML 类图中，静态变量和静态方法都是以下划线标注的。
	- 常量应该声明为 final static。
	- **静态变量和方法可以在不创建对象的情况下访问。**
	- 使用 “类名.方法名（参数)” 的方式调用静态方法，使用 “类名 .静态变量” 的方式访问静态变量。这会提高可读性，因为可以很容易地识别出类中的静态方法和数据。
- get 方法也被称为访问器（accessor), 而 set 方法称为修改器（mutator)。
- 关键字 this 引用对象自身。
	- 它也可以在构造方法内部用于调用同一个类的其他构造方法。
	- 可以用于引用类的隐藏數据域。
	- Java 要求在构造方法中，语句 this（参数列表）应在任何其他可执行语句之前出现。

# 第十章
- **String 对象是不可改变的**。字符串一旦创建，内容不能再改变。
- Java 虚拟机为了提高效率并节约内存，对具有相同字符序列的字符串直接量使用同一个实例。这样的实例称为*限定的（interned)字符串*。
- StringBuilder 和 StringBuffer 类似于 String 类，区别在于 String 类是不可改变的。StringBuffer 中修改缓冲区的方法是*同步*的，如果是单任务访问，使用 StringBuilder 会更有效。
- 字符串的长度总是小于或等于构建器的容量。长度是存储在构建器中的字符串的实际大小，而容量是构建器的当前大小。如果有更多的字符添加到字符串构建器，超出它的容量，则构建器的容量就会自动增加。
- *正则表达式*（缩写 regex) 是一个描述模板的字符串，用于匹配一系列字符串。可以通过指定一个模板来匹配、替代或者分隔字符串。

# 第十一章
- 指向父类的三角箭头用来表示相关的两个类之间的继承关系。
	- 如果类 Cl 扩展自另一个类 C2, 那么就将 Cl 称为*次类（ subclass )*, 将C2 称为*超类（superclass )*。超类也称为*父类 ( parent class) *或*基类 ( base class)*, 次类又称为*子类 ( child class)*、*扩展类 ( extended class) *或*派生类（derived class )*。
	- 一个 Java 类只可能直接继承自一个父类。这种限制称为*单一继承（ single inheritance)*。
- 关键字 super 可以用于两种途径：
	- 调用父类的构造方法。super()或super(parameters);
	- 调用父类的方法。super.方法名(参数);
	- 一般情况下，最好能为每个类提供一个无参构造方法，以便于对该类进行扩展，同时避免错误。
- 与实例方法一样，静态方法也能被继承。但是，**静态方法不能被覆盖。如果父类中定义的静态方法在子类中被重新定义，那么在父类中定义的静态方法将被隐藏。**可以使用语法：父类名 .静态方法名（ SuperClassName.staticMethodName) 调用隐藏的静态方法。
- Java 中的所有类都继承自 java.lang.Object 类。
- 面向对象程序设计的三大支柱是封装、继承和多态。
	- 多态意味着父类型的变量可以引用子类型的对象。
- 方法可以在沿着继承链的多个类中实现。JVM 决定运行时调用哪个方法。
	- 一个变量必须被声明为某种类型。变量的这个类型称为它的声明类型（declared type)。
	- 变量的实际类型（actual type) 是被变量引用的对象的实际类。
	- Object o = new GeometricObject();
- 总是可以将一个子类的实例转换为一个父类的变量，称为向上转换（upcasting),因为子类的实例永远是它的父类的实例。当把一个父类的实例转换为它的子类变量（称为向下转换(downcasting)) 时，必须使用转换记号 “(子类名)” 进行显式转换。
	- 对象成员访问运算符（.）优先于类型转换运算符。使用圆括号保证在点运算符（.）之前进行转换。
	- ((Circle)object).getArea() ;
- equals(Object) 方法测试两个对象是否相等
	- 在子类中，使用签名 equals(SomeClassName obj) (例如：equals(Circle c)) 重写 equals 方法是一个常见错误，应该使用 equals(Object obj)。
- ArrayList 对象可以用于存储一个**对象列表**，存储不限定个数的对象
	- ArrayList<AConcreteType> list = new ArrayList<>()
- 修饰符的可见性按下面的顺序递增：私有、默认（无修饰符）、 被保护、公共成员
	- 修饰符 private 和 protected 只能用于类的成员。public 修饰符和默认修饰符（也就是没有修饰符）既可以用于类的成员，也可以用于类。一个没有修饰符的类（即非公共类）是不能被其他包中的类访问的。
	- 子类可以重写它的父类的 protected 方法，并把它的可见性改为 public。但是，**子类不能削弱父类中定义的方法的可访问性**。例如：如果一个方法在父类中定义为 public，在子类中也必须定义为 public。
- 构造方法可以调用重载的构造方法或它的父类的构造方法。这种调用必须是构造方法的第一条语句。如果没有显式地调用它们中的任何一个，编译器就会把 super()作为构造方法的第一条语句，它调用的是父类的无参构造方法。
- 实例方法只有在可访问时才能重写。这样，私有方法是不能重写的，因为它是不能在类本身之外访问的。如果子类中定义的方法在父类中是私有的，那么这两个方法是完全没有关系的。
- 可以用 final 修饰符来表明一个类是最终类，是不能被继承的；也可以表明一个方法是最终的，是不能重写的。

# 第十二章
- 一个浮点数除以 0 是不会产生异常的
- 异常处理最根本的优势就是将检测错误（由被调用的方法完成）从处理错误（由调用方法完成）中分离出来
- Throwable 类是所有异常类的根。所有的 Java 异常类都直接或者间接地继承自Throwable。可以通过继承 Exception 或者 Exception 的子类来创建自己的异常类。
- 异常类可以分为三种主要类型：系统错误、异常和运行时异常。
	- *系统错误（system error) *是由 Java 虚拟机抛出的，用 Error 类表示。Error 类描述的是内部系统错误。
	- *异常（exception) *是用 Exception 类表示的，它描述的是由程序和外部环境所引起的错误，这些错误能被程序捕获和处理。
	- *运行时异常（runtime exception) *是用 RuntimeException 类表示的，它描述的是程序设计错误，例如，错误的类型转换、访问一个越界数组或数值错误。运行时异常通常是由 Java 虚拟机抛出的。
	- RuntimeException、Error 以及它们的子类都称为*免检异常（unchecked exception )*。所有其他异常都称为必检异常*（checked exception）*
		- 每个方法都必须声明它可能抛出的必检异常的类型。这称为声明异常（declaring exception)。
			- public void myMethod()                                                                  throws Exceptionl, Exception2,… ，ExceptionN
		- 如果方法没有在父类中声明异常，那么就不能在子类中对其进行继承来声明异常。
		- 从一个通用的父类可以派生出各种异常类。如果一个 catch 块可以捕获一个父类的异常对象，它就能捕获那个父类的所有子类的异常对象。
		- 在 catch 块中异常被指定的顺序是非常重要的。如果父类的 catch 块出现在子类的catch 块之前，就会导致编译错误。
		- 多捕获特征(multicatch feature):
			- catch (Exception1|Exception2丨… 丨Exceptionk ex)
- 在异常事件中，执行仍然会继续。当方法中发生异常时，如果异常没有被捕获，方法将会立刻退出。如果想在方法退出前执行一些任务，可以在方法中捕获这个异常，然后再重新抛给它的调用者
- 构建一个 File 实例并不会在机器上创建一个文件。不管文件是否存在，都可以创建任意文件名的 File 实例。可以调用 File 实例上的 exists() 方法来判断这个文件是否存在。
- 使用 Scanner 类从文件中读取文本数据，使用 PrintWriter 类向文本文件写入数据。必须使用 close() 方法关闭文件。如果没有调用该方法，数据就不能正确地保存在文件中。
	- try with resources 语法自动关闭文件
- 声明异常的关键字是 throws, 而抛出异常的关键字是 throw
- 如果一个异常没有被当前方法捕获，则该异常被传给调用者。这个过程不断重复直到异常被捕获或者传递给 main 方法。

# 第十三章
- 抽象类不可以用于创建对象。抽象类可以包含抽象方法，这些方法将在具体的子类中实现。*抽象方法（abstract method ) *在方法头中使用 abstract 修饰符表示
	- UML图中抽象类名、抽象方法使用斜体表示，# 符号表明protected 修饰符
	- 抽象方法不能包含在非抽象类中。如果抽象父类的子类不能实现所有的抽象方法，那么子类也必须定义为抽象的。换句话说，在抽象类扩展的非抽象子类中，必须实现所有的抽象方法。还要注意到，抽象方法是非静态的。
	- 抽象类是不能使用 new 操作符来初始化的。但是，仍然可以定义它的构造方法，这个构造方法在它的子类的构造方法中调用。
	- 即使子类的父类是具体的，这个子类也可以是抽象的。
- 接口是一种与类相似的结构，只包含常量和抽象方法。
	- UML图中接口名字和方法名字使用斜体。虚线和空心三角形用于指向接口
	- 由于接口中所有的数据域都是 public static final 而且所有的方法都是 public abstract, 所以 Java 允许忽略这些修饰符。
- 一个带空体的接口称为*标记接口*（marker interface)。一个标记接口既不包括常量也不包括方法。它用来表示一个类拥有某些特定的属性。
- Java 只允许为类的扩展做单一继承，但是允许使用接口做多重扩展。
- 利用关键字 extends, 接口可以继承其他接口。这样的接口称为*子接口*（subinterface)。
- 所有的类共享同一个根类 Object, 但是接口没有共同的根。