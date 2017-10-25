#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <stack>
#include <queue>
#include <map>
using namespace std;
char Delimiters[] = {';', '(', ')', '{', '}', '[', ']', '*', '=','+','-'};
map<char,int> Delmap;
bool isNum(char t){
	return (t >= '0' && t <= '9') ? true : false;
}
bool isLetter(char t){
	if(t <= 'z' && t >= 'a')return true;
	else if(t <= 'Z' && t >= 'A')return true;
	return false;
}
int main()
{
	string fileName = "Hello.txt";
	freopen("hello.cb", "r", stdin);
	freopen("hello.pre", "w", stdout);
	//ios::sync_with_stdio(false); 
	//cin.tie(0);
	//string content;
	for(int i=0;i<strlen(Delimiters);++i)Delmap[Delimiters[i]]=1;
	char ch;
	bool sentence = false;	
	while((ch = getchar()) != EOF){
		if(ch == ' ' || ch == '\n' || ch == '\r')printf("\n");
		else if(Delimiters[ch])printf("\n%c", ch);//先换行再输出 
		else if(ch == '/'){
			char next;
			scanf("%c",&next);
			if(next == '/'){	//单行注释 
				while(scanf("%c",&ch) != '\n'){};
			}else if(next == '*'){	//多行注释 
				// 已经匹配到/* 
				while(~scanf("%c",&ch)){
					if(ch == '*'){
						char ne;
						scanf("%c",&ne);
						if(ne == '/')break;//匹配到连续的*/,注释结束 
					}
				}	
			}else{ //是除号的意思 
				printf("%c\n", next);
			}
		}else if(ch == '\"'){
			if(sentence){
				printf("\n");
				sentence=false;
			}
			else sentence=true;
		}else{
			printf("%c",ch);
		}
	}
	return 0;
}
