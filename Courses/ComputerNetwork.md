# CH01 网络概述

网络提供的最基本服务: 
- 信息传递
- 资源共享

**网络分类（按地域规模）**:
- 个域网PAN（Personal Area Network）
- 局域网LAN（Local Area Network）
- 城域网MAN（Metropolitan Area Network）
- 广域网WAN（Wide Area Network）

接入网目标
- 接入网的目标是将主机连接到边缘路由器上
- **边缘路由器**是端系统Host去往任何其他远程端系统的路径上的第一台路由器
- *各种异构网络通过边缘路由器接入*

接入网：无线接入
- 无线局域网（WLAN）
- 广域蜂窝接入网

网络核心的两大功能
- 路由
- - 全局操作：确定数据分组从源到目标所使用的路径
- 转发
- - 本地操作：路由器或交换机将接收到的数据分组转发出去（即移动到该设备的某个输出接口）

**网络协议三要素**：语义（Semantics）、语法（Syntax）和时序（Timing sequence）
- 语义是指交换的信息含义，即“讲什么”，包括用于协调与差错处理的控制信息；
- 语法是指“如何讲”，即协议元素的格式，包括数据及控制信息的格式、编码和信号电平等；
- 时序是指事时执行的顺序，即通信过程中通信状态的变化过程，包括速度匹配和排序等。

协议分层结构的必要性：
- 分层结构
- 统一标准
- 模块独立

两种不同类型的服务
- 面向连接：每个“请求”或“响应”后，都在对方产生一个“指示”或“确认”动作
- 无连接：邮件携带了完整的目标地址，传输过程不需要应答

六个核心服务原语（以面向连接服务为例）
1. 连接请求
2. 接受响应
3. 请求数据
4. 应答
5. 请求断开
6. 断开连接

OSI七层模型：
- 物理层(Physical Layer)
- - 定义如何在信道上传输0、1：Bits on the wire
- 数据链路层(Data Link Layer)
- - 实现相邻(Neighboring)网络实体间的数据传输
- - 成帧(Framing)：从物理层的比特流中取出完整的帧
- 网络层(Network Layer)
- - 将数据包跨越网络从源设备发送到目的设备(host to host)
- - 路由(Routing)：在网络中选取从源端到目的端的转发路径
- 传输层(Transport Layer)
- - 将数据从源端口发送到目的端口（进程到进程）
- 会话层(Session Layer)
- 表示层(Presentation Layer)
- 应用层(Application Layer)

TCP/IP参考模型
- 端对端原则：采用聪明终端&简单网络，由端系统负责丢失恢复等，简单的网络大大提升了可扩展性
IP分组交换的特点
- 可在各种底层物理网络上运行(IP over everything)
- 可支持各类上层应用(Everything over IP)

OSI：先有模型后设计协议，不局限于特定协议，*明确了服务、协议、接口等概念*

# CH02 物理层

物理层功能
- 位置：物理层是网络体系结构中的最低层
- 功能：如何在连接各计算机的传输媒体上**传输数据比特流**
- 作用：尽可能地**屏蔽掉不同传输媒体和通信手段的差异**

物理层接口特性DTE/DCE
- 机械特性：定义接线器的形状和尺寸、引线数目和排列、固定和锁定装置等
- 电气特性：规定了DTE/DCE之间多条信号线的电气连接及有关电路特性
- 功能特性：描述接口执行的功能，定义接线器的每一引脚(针，Pin)的作用
- 规程特性：指明对于不同功能的各种可能事件的出现顺序

傅立叶分析
- 在网络通信中，**信息是以电磁信号（或简称信号）的形式传输的**
- 电磁信号是时间的函数（**时域观**）
- 也可以表示成频率的函数（**频域观**）

许多信号的带宽是无限的，然而信号的主要能量集中在相对窄的频带内，这个频带被称为有效带宽，或带宽（bandwidth）。信号的信息承载能力与带宽有直接关系，带宽越宽，信息承载能力越强。
- 信道带宽（bandwidth）：一个信道的最大数据速率，每秒多少比特（bps） 
- 信道容量
- - 问题：信道为什么会有信道带宽或信道容量的限制？受制于信道自身物理材料特性，通常对高频信道的阻碍要大些

传输方式
- 单工：指两个站之间只能沿一个指定的方向传送数据信号
- 半双工：指两个站之间可以在两个方向上传送数据信号，但不能同时进行
- 全双工：指两个站之间可以在两个方向上同时传送数据信号

异步传输的发送器的接收器的时钟是不同步的，而同步传输两者的时钟是同步的

常用的几种编码方式
- 不归零制码（NRZ：Non-Return to Zero）
- - 原理：用两种不同的电平分别表示二进制信息“0”和“1”，低电平表示“0”，高电平表示“1”
- - 缺点：
- - - 难以分辨一位的结束和另一位的开始
- - - 发送方和接收方必须有时钟同步
- - - 若信号中“0”或“1”连续出现，信号直流分量将累加
- - 结论：容易产生传播错误
- 不归零电平编码（NRZ-L）
- - 负电平用于表示一个二进制值，正电平用于表示另一个二进制值由比特值决定信号的电平。
- 不归零反相编码（不归零1制，NRZI）
- - 用一个比特间隔开始时是否出现电平跳变表示1或0。
- - 属于差分编码，可靠性更好。
- - 比特值决定正负电压之间是否跳变，而非决定电平正负。
- 曼彻斯特码（Manchester），也称相位编码
- - 原理：每一位中间都有一个跳变，从低跳到高表示“0”，从高跳到低表示“1”。每个比特间隔的中间位置处都存在一个跳变。(注意有些系统也可能相反)。这种中间处的跳变既含有时钟信息，也含有数据信息。
- - 优点：克服了NRZ码的不足。每位中间的跳变即可作为数据，又可作为时钟，能够自同步
- - 差分曼彻斯特码（Differential Manchester）
- - 原理：每一位中间都有一个跳变，每位开始时有跳变表示“0”，无跳变表示“1”。位中间跳变表示时钟，位前跳变表示数据。比特间隔中间位置处的跳变仅含有时钟信息。在比特间隔开始处如果出现跳变表示0，如果没有跳变表示1。
- - 优点：时钟、数据分离，便于提取

传输损伤
- 误码(Error)  指信号在传输过程中码元发生的差错，即接收与发送数字信号的单个数字之间的差异
- 抖动(Jitter)  指码元出现的时刻随时间频繁地变化，也就是各有效瞬间相对于理想时间位置的短时间偏移
- 漂移(Wander) 指码元各有效瞬间相对于理想时间位置的长期缓慢偏移
- 滑动(Slip) 指一个信号序列在传输过程中，不可恢复地丢失或增加若干码元
- 时延(Delay) 指信号的各有效瞬间相对于理想时间位置的滞后或推迟

短波通信的主要指标是通信质量和可通率
- 通信质量：模拟通信用信噪比，数字通信用差错率
- 可通率（又称线路利用率）指通信线路接收端的信噪比高于可接受的最低信噪比的时间百分比

复用 (multiplexing) 技术的目的是：允许用户使用一个共享信道进行通信，避免相互干扰，降低成本，提高利用率。
- 频分复用(FDM)：频分复用的所有用户在同样的时间占用不同的带宽资源（请注意，这里的“带宽”是频率带宽而不是数据的发送速率） 
- 时分复用(Time Division Multiplexing, TDM) 将时间划分为一段段等长的时分复用帧（TDM帧），时分复用的所有用户在不同的时间占用同样的频带宽度
- 波分复用（Wavelength Division Multiplexing，WDM）是利用多个激光器在单条光纤上同时发送多束不同波长激光的技术
- 码分多址 (Code Division Multiple Access，CDMA)是指利用码序列相关性实现的多址通信 , 基本思想是靠不同的地址码来区分的地址

码片序列的正交关系
- 每个站分配的码片序列不仅必须各不相同，并且还必须互相正交 (orthogonal)
- 两个不同站的码片序列正交，就是向量 S 和T 的规格化内积 (inner product) 等于 0 

正交频分复用（Orthogonal Frequency Division Multiplexing，OFDM) 
- 将信道分成若干正交子信道；
- 将高速数据信号转换成并行的低速子数据流，调制到在每个子信道上进行传输
