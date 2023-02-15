# CH01 概述与基本知识

## Web简介

### 一、Web和互联网的关系

**互联网是基础设施，Web是互联网的一项服务(应用)。**

互联网(Internet)：互联网是指20世纪末兴起的计算机网络模式，通过一系列网络协议实现计算机与计算机之间的网络通信，是一种网络基础设施(Infrastructure)，与之对应有局域网、城域网、广域网等。
World Wide Web：万维网，简称Web、WWW，是一种基于互联网进行访问的应用模式，其主要要素包括HTTP、HTML、URL、浏览器等。
万维网并不等同于互联网，万维网是基于互联网这一基础设施提供的服务之一，互联网上还要其他服务和应用类型，如电子邮件、网络游戏等。

### 二、Web的发展1.0，2.0，3.0

- Web1.0：主要由平台/公司搭建服务器、创造内容，以**静态或动态网页**的形式向互联网上的用户提供信息，用户一般不参与内容的创造，也很少互动，所以Web1.0也被称为**只读网络**。
- Web2.0：随着社交网络平台的诞生而出现，平台/公司除了向用户提供内容外，更多的是提供平台来共享用户生产的内容，并让用户间可以交互。网络不再是只读的，而是**可读可写的网络**。
- Web3.0：是近一两年来提出来的一个定义模糊的概念，大致思想包括去中心化、无需许可/审核、用户拥有内容、原生支付等。

## Web应用程序的工作原理

### 一、请求-响应模式

客户端把**请求**发送到服务器端的Web应用程序，Web应用程序接收请求后进行相关处理，并把客户端请求的资源以文本、图片、网页等形式(**HTML**),做为**响应**返回到客户端。

### 二、B/S与C/S

- C/S架构：客户机Client/服务器Server
- B/S架构：浏览器Browser/服务器Server

### 三、Web服务器

## Web的三个基础技术（coding）

### 一、HTTP

HTTP：HyperText Transfer Protocol 超文本传输协议

- 请求：请求行、请求头、请求体
    - GET：从服务器获取资源
    - POST：向服务器提交实体内容
- 响应：响应行、响应头、响应体
- 请求类型
    - 网页：text/html
    - 字符串：text/plain
    - 图片：image/jpeg
- 状态码
    - 网页：text/html
    - 字符串：text/plain
    - 图片：image/jpeg

![HTTPRequest](images/HttpRequest.png "HTTP请求")

### 二、URL&URI

- URL：Uniform Resource Locator 统一资源定位符
    - HTTP协议规定互联网用户通过输入URL地址或点击URL链接，实现对服务器上资源的请求。
- URI：Uniform Resource Identifier 统一资源标识符
    - 是标识逻辑或物理资源的字符序列，与URL类似，也是一串字符。通过使用位置，名称或两者来标识Internet上的资源；它允许统一识别资源。

有两种类型的URI，统一资源标识符（URL）和统一资源名称（URN）

# CH02 Servlet基础

## Java Web基础

### Web服务器和Web容器的概念

什么是Web容器？
- 由来：由于Web服务器的主要功能处理HTTP协议，响应针对静态内容(包括静态网页和图片等)的请求，所以在动态页面的应用中需要一个处理服务端逻辑的应用程序。
- 容器：容器是中间件的一种，给处于其中的应用程序提供一个统一的环境，降低应用程序的复杂性。
- 给Web应用的服务端程序提供运行环境的容器就称为**Web容器**。常见的Web容器有**Tomcat(Servlet容器)**、JBoss(EJB容器)和IIS(ASP容器)等。
- Web容器的主要功能包括通信支持、生命周期管理和多线程支持等。

![WebContainerAndServer](images/WebContainerAndServer.png "Web容器和Web服务器的关系")

### Tomcat

- 概念
    - Tomcat是Java Web应用开发中常用的开源Web容器
    - Tomcat的准确定位应为：**Java Web容器+Web服务器**。
    - 作为Web服务器，Tomcat能完成Apache的部分功能，如实现HTTP协议、处理请求/响应等，默认在**8080**端口监听。
    - 作为Java Web容器，**Tomcat负责编译、运行、部署Servlet/JSP，也叫Servlet容器。**
- 目录结构
     bin目录：可执行程序，包括启动和关闭的脚本startup.sh和shutdown.sh
     conf目录：配置文件，包括核心配置文件server.xml和context.xml
     lib目录：库文件，包括编写Servlets必须servlet-api.jar和jsp-api.jar
     webapps目录：Web应用程序。每个web应用程序都需要有一个目录，名称映射根路径
- 使用

### XML

- 概念
- 语法和格式要求

## Servlet（coding）

### javax.servlet Servlet接口

- init()
- service()
- destroy()

### javax.servlet.http

- HttpServlet
    - doPost()
    - doGet()
- HttpServletRequest
- HttpServletResponse
- HttpSession