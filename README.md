
##初衷  
主要是最近看Casa大神的博客[去model化和数据对象](https://casatwy.com/OOP_nomodel.html)中写到去Model化架构设计,于是乎也想试一试;  
##我看到的    
在Casa博客[iOS应用架构谈 网络层设计方案](https://casatwy.com/iosying-yong-jia-gou-tan-wang-luo-ceng-she-ji-fang-an.html)介绍了Reformer结合"去Model化"的用法,为了保证取值的方便,引入了PropertyListReformerKeys.h文件,容下了返回字典的Key值;   



##我想到的  
如下图,创建了一个新文件PropertyListReformerKeys.m,并将常量key的赋值放于其中;然后使用的时候:保存在字典中的key,即是服务器返回的字段;同时可以通过key取到value;  




##扩展  
想到之前刚对ESJsonFormat进行改装成了[ESJsonFormatForMac](https://github.com/czhen09/ESJsonFormatForMac);脱离Xcode环境运行于MacOs平台,于是乎,针对服务器返回key,自动生成PropertyListKeys的文件这个想法油然而生;   


使用同[ESJsonFormatForMac](https://github.com/czhen09/ESJsonFormatForMac)一样,可以直接在Json下面的NSTextView中输入json字段,点击Go;或者输入请求的URl,点击Request;就可以起飞了;




##其他  
1.暂时只支持OC;    
2.使用愉快,欢迎吐槽,感谢Star;


