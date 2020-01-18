Copy from https://github.com/hummatli/onvif-qt-server-client  
处理没有生成*.lib的问题分析：  
1)动态加载dll 
可能存在不懂需要调用什么类，构造类需要怎么样传入参数的问题   
2)修改OnvifLib，导出*.lib  
可能存在找不到dll方法问题，最后还要修改OnvifLib源码   
3)集成OnvifLib源码到client、server端  
存在client server端包含源码多，子lib里面有些都重复的类文件，所以全部导入也不可行。  

综合上面的几个方法，方法2可行性比较大。步骤 
1）依次查找需要导出的类 
2)拷贝包含mydll_global.h文件的文件夹到库目录中  
3)需要导出的类上引入头文件及进行导出

#include "exportdef\mydll_global.h" //（这样 HEADERS 都不用加入mydll_global.h）

MYDLLSHARED_EXPORT  

4).pro文件加入  
DEFINES += MYDLL_LIBRARY

5)编译
