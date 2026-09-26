类型
  void:无 0位 缺省值none
  bool:布尔 8位 缺省值false
  char:字符 16位 缺省值'\0' 有short, long变种
  int:整 32位 缺省值0 有unsigned short short, short short, unsigned short, short, long, unsigned long, long long, unsigned long long变种
  float;浮点 64位 缺省值. 有short, long变种
  _half_float:半精度浮点 缺省值. 16位
  _decimal_float:十进制浮点 缺省值. 64位 有short, long变种

  前置修饰符
  unsigned:无符号
  short:位数减半
  long:位数增倍

  后置修饰符
  []:组 缺省值[]
    []间传入值以限长
    未限长则据初赋值而定
  $:址 缺省值null
  #:引用 缺省值none

  其它
  struct[类型列表]:结构体 缺省值struct[void]

变量
  类型 标识符 {值};
    声明自动存储期变量并分配内存与初赋值
    省略{}与值则应用缺省值

  new 类型 标识符 {值};
    声明自由存储区变量并分配内存与初赋值
    省略{}与值则应用缺省值

  del 自由存储区变量名;
    终止声明自由存储区变量并释放内存

  _tmp 变量声明 {值};
    声明临时变量并分配内存与初赋值
    省略{}与值则应用缺省值
    临时变量于调用后终止声明并释放内存

函数
  返回值类型 标识符(形参类型表);
    声明函数

  返回值类型 标识符(形参表) {函数体}
    定义函数
    类型需作为形参时<>括起
      类型形参为编译期单位

  return 值;
    带值返回
      省略值则应用返回值类型缺省值

  throw 信号;
    带信号返回
      详见异常处理

运算符
  单目运算符操作数

  操作数 双目运算符 操作数

  []索引
  $取值 #取址 -负 !非 ~按位非
  *乘 /除 %模
  +加 -减
  <<<算术左移 >>>算术右移
  &按位与 |按位或 ^按位异或 !&按位与非 !|按位或非 !^按位同或 <<逻辑左移 >>逻辑右移


关键字
  _decimal_float
  _half_float
  _tmp
  bool
  char
  const
  del
  float
  int
  long
  new
  return
  short
  struct
  unsigned
  void
