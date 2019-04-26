# 阿里云物联网平台API调用与MQTT客户端

![Travis](https://img.shields.io/badge/version-v0.1.0-blue.svg)
![Travis](https://img.shields.io/badge/author-Jx-orange.svg)
![Travis](https://img.shields.io/badge/license-GNU-brightgreen.svg)

## API调用

阿里云物联网平台为用户提供了各类API接口，并规范了严格的调用流程，即

1. 首先需在阿里云物联网平台新建应用并获取AppKey和AppSecret，其中AppKey用于HTTP请求时传入请求头部Header、AppSecret用于计算签名；

2. 接着，通过HTTP POST或GET方法向物联网平台发送API请求并进行签名校验，必要时还需发送JSON格式的请求内容体Content；

3. 最后接收并处理API请求返回的数据。

这里对上述阿里云物联网平台API调用流程进行了封装，屏蔽其中连接验证与数据校验等细节，仅需提供AppKey、AppSecret以及对应的API请求地址即可方便快捷地调用API接口。

> 理论上，这里针对物联网平台API调用的程序也适用于阿里云其它云服务的API调用过程，这里仅对物联网平台进行了测试。

## MQTT客户端

阿里云物联网平台对MQTT协议进行了进一步封装，增加了连接验证与数据校验环节。

这里编写的MQTT客户端可根据阿里云物联网平台的设备三元组数据（产品密钥、设备名、设备密钥），生成标准的MQTT配置参数并连接至对应的MQTT服务端。

> 编译环境：Qt 5.12.1 MinGW 7.3.0 64-bit
