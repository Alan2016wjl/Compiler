+:
����
int a,b,c;
c = a + b;
�������»�ࣺ
movl	-8(%rbp), %eax	#�ѻ���ַrbp��8�ĵ�ַ���ڴ浥Ԫ��ֵ�ƶ���eax�Ĵ�����������ͬ
movl	-4(%rbp), %edx
addl	%edx, %eax  #��edx��eax�Ĵ�����ֵ��Ӵ浽eax
movl	%eax, -12(%rbp)  #��eax�Ĵ�����ֵ�Ƶ�����ַrbp��12�ĵ�ַ���ڴ浥Ԫ


-:
����
int a,b,c;
c = a - b;
�������»�ࣺ
movl	-8(%rbp), %eax
movl	-4(%rbp), %edx
subl	%eax, %edx	#�ڶ���������ȥ��һ�����������������ŵ��ڶ���������Ӧ�ļĴ���
movl	%edx, %eax
movl	%eax, -12(%rbp)


*:
����
int a,b,c;
c = a * b;
�������»�ࣺ
movl	-4(%rbp), %eax
imull	-8(%rbp), %eax
movl	%eax, -12(%rbp)


/:
����
int a,b,c;
c = a / b;
�������»�ࣺ
movl	-4(%rbp), %eax
cltd			#תΪ����
idivl	-8(%rbp)
movl	%eax, -12(%rbp)

