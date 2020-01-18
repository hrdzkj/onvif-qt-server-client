Copy from https://github.com/hummatli/onvif-qt-server-client  
处理没有生成*.lib的问题分析：  
1)动态加载dll 
可能存在不懂需要调用什么类，构造类需要怎么样传入参数的问题   
2)修改OnvifLib，导出*.lib  
可能存在找不到dll方法问题，最后还要修改OnvifLib源码   
3)集成OnvifLib源码到client、server端  
存在client server端包含源码多，子lib里面有些都重复的类文件，所以全部导入也不可行。  

综合上面的几个方法，方法2可行性比较大。
 