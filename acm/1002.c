#include<stdio.h>
int main(){
	int num,list[101],min,max,i;
	while(scanf("%d",&num)==1){
		min=101;max=0;
		for(i=0;i<num;i++){
			scanf("%d",&list[i]);
			if(list[i]>max){max=list[i];}
			if(list[i]<min){min=list[i];}
		}
		printf("%d %d\n",max,min);
	}
	return 0;
}