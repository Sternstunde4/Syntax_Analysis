# Syntax_analysis
Using flex&amp;bison to build a syntax tree for PCAT language


（1）语法树以PROGRAM开头，叶⼦节点为词法元素。

（2）⾏列号以该语法元素结束位置为准。

（3）如果碰到了语法错误则输出错误的位置，不进⾏语法树解析。
