+:
假设
int a,b,c;
c = a + b;
则有如下汇编：
movl	-8(%rbp), %eax	#把基地址rbp减8的地址的内存单元的值移动到eax寄存器，即，下同
movl	-4(%rbp), %edx
addl	%edx, %eax  #把edx和eax寄存器的值相加存到eax
movl	%eax, -12(%rbp)  #将eax寄存器的值移到基地址rbp减12的地址的内存单元


-:
假设
int a,b,c;
c = a - b;
则有如下汇编：
movl	-8(%rbp), %eax
movl	-4(%rbp), %edx
subl	%eax, %edx	#第二操作数减去第一操作数，并将结果存放到第二操作数对应的寄存器
movl	%edx, %eax
movl	%eax, -12(%rbp)


*:
假设
int a,b,c;
c = a * b;
则有如下汇编：
movl	-4(%rbp), %eax
imull	-8(%rbp), %eax
movl	%eax, -12(%rbp)


/:
假设
int a,b,c;
c = a / b;
则有如下汇编：
movl	-4(%rbp), %eax
cltd			#转为四字
idivl	-8(%rbp)
movl	%eax, -12(%rbp)

