#include <stdio.h>

int main(){
    int i = 0, e=0;  
	char str[100];  
	gets(str);
    for(i=0; str[i]; i++){
		if ((str[i] >= 'a')&&(str[i] <= 'z') || (str[i] >= 'A') && (str[i] <= 'Z')){
			e++;        
		}
    }
    return e;
}
