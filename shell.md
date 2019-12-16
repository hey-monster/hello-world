awk 命令
https://www.cnblogs.com/ggjucheng/archive/2013/01/13/2858470.html
awk -F 'aaa' 'print $2'

$各种符号
https://www.cnblogs.com/fhefh/archive/2011/04/15/2017613.html
https://blog.csdn.net/x1269778817/article/details/46535729

获取当前执行文件所在的目录
# 在某些情况下会拿到错误结果
work_path=$(dirname $0)
work_path=$(pwd)

## 正确实现
# 通过 readlink 获取绝对路径，再取出目录
work_path=$(dirname $(readlink -f $0))

# 或者曲线救国
work_path=$(dirname $0)
cd ./${work_path}  # 当前位置跳到脚本位置
work_path=$(pwd)   # 取到脚本目录 
————————————————
版权声明：本文为CSDN博主「orientlu」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/qq_18150497/article/details/76600828
