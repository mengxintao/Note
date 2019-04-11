# Note
学习的道路漫漫长长

## http基础：
### 1 常见HTTP首部字段
通用首部字段（请求报文与响应报文都会使用的首部字段）  

Date：创建报文时间
Connection：连接的管理
Cache-Control：缓存的控制
Transfer-Encoding：报文主体的传输编码方式  

请求首部字段（请求报文会使用的首部字段）  

Host：请求资源所在服务器
Accept：可处理的媒体类型
Accept-Charset：可接收的字符集
Accept-Encoding：可接受的内容编码
Accept-Language：可接受的自然语言  

响应首部字段（响应报文会使用的首部字段）  

Accept-Ranges：可接受的字节范围
Location：令客户端重新定向到的URI
Server：HTTP服务器的安装信息  

实体首部字段（请求报文与响应报文的的实体部分使用的首部字段）  

Allow：资源可支持的HTTP方法
Content-Type：实体主类的类型
Content-Encoding：实体主体适用的编码方式
Content-Language：实体主体的自然语言
Content-Length：实体主体的的字节数
Content-Range：实体主体的位置范围，一般用于发出部分请求时使用

### 2 GET方法与POST方法的区别
区别一：  

get重点在从服务器上获取资源，post重点在向服务器发送数据；  

区别二：  

get传输数据是通过URL请求，以field（字段）= value的形式，置于URL后，并用"?"连接，多个请求数据间用"&"连接，如http://mengxintaohenshuai/henshuai?name=admin&password=admin，过程对用户是可见的；
post传输数据通过Http的post机制，将字段与对应值封存在请求实体中发送给服务器，过程对用户是不可见的；  

区别三：  

Get传输的数据量小，因为受URL长度限制，但效率较高；
Post可以传输大量数据，所以上传文件时只能用Post方式；  

区别四：  

get是不安全的，因为URL是可见的，可能会泄露私密信息，如密码等；
post较get安全性较高；  

区别五：  

get方式只能支持ASCII字符，向服务器传的中文字符可能会乱码。
post支持标准字符集，可以正确传递中文字符。

### 3 HTTP的缺点与HTTPS  

a、通信使用明文不加密，内容可能被窃听
b、不验证通信方身份，可能遭到伪装
c、无法验证报文完整性，可能被篡改  

HTTPS就是HTTP加上加密处理（一般是SSL安全通信线路）+认证+完整性保护
