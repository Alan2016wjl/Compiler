import java.util.regex.Matcher;
import java.util.regex.Pattern;
public boolean isL(String content){
   	String pattern1 = -["auto","double","int","struct","break","else","long","switch","case","enum","register","typedef","char","extern","return","union","const","float","short","unsigned","continue","for","signed","void","default","sizeof","volatile","do","while","static","if","inline","restrict","_Alignas","_alignof","_Atomic","_Bool","_Complex","_Generic","_Imaginary","_Noreturn","_Static_assert","_Therad_local"];
	String pattern2 = ^["a"-"z","A"-"Z","_"]["a"-"z","A"-"Z","0"-"9","_"]{0-32};
	boolean isMatch = Pattern.matches(pattern1, content);
	if(isMatch){
		boolean isAlsoMatch = Pattern2.matches(pattern2,content);
		return isAlsoMatch;
	};
}
