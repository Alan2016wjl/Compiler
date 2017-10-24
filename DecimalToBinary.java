import java.util.Scanner;

public class DecimalToBinary{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Please input:");
		int n = sc.nextInt();
		System.out.println(DecimalToBinary(n));
	}

	private static String DecimalToBinary(int i) {
        char[] buf = new char[32];
        int charPos = 32;//当数组有余时，便于取char数组中的数据
        do {
            buf[--charPos] = (i & 0x01) == 1 ? '1': '0';//从后往前填充buf，若是正数则charPos不会减到0
            i >>>= 1;	//在进行算术右移时，最高位补符号位；而在进行逻辑右移时，最高位补0。如果这里使用的算术右移，那么对于像-1这样的负数，不论进行多少次右移操作都不可能变成0，所以会造成死循环。
        } while (i != 0);//如果使用的是while，那么对于i=0的场景则会返回空字符串。

        return new String(buf, charPos, (32 - charPos));//用32-charPos是为了把正数补码的高位0去掉
    }//

}
