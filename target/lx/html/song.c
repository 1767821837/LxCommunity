#include <stdio.h>
#define i 2
struct  player
{
	int  num;			/*编号，从1001开始*/
	char  name[20];		/*姓名，英文或拼音*/
	int  age;			/*年龄*/
	char  sex;			 /*性别，m为男，f为女*/
	char  department [20];	/*职业，英文或拼音*/
	int  grade[5];		/*5位评委给分，百分制*/
	int  score;			/*最后得分，总分*/
	int  rank;			/*名次*/
}player[i],temp;

main(){
int m,n,sum = 0,max = 0, min = 0;
for(m = 1;m<=i;m++){
printf("请输入第%d位选手编号\n",m);
scanf("%d",&player[m].num);
printf("请输入第%d位选手姓名\n",m);
scanf("%s",&player[m].name);
printf("请输入第%d位选手年龄\n",m);
scanf("%d",&player[m].age);
printf("请输入第%d位选手性别（m或f）\n",m);
scanf("%s",&player[m].sex) ;
printf("请输入第%d位选手职业\n",m);
scanf("%s",&player[m].department);
printf("请输入5位评委给的%d位选手的分数\n",m+1);
for(n = 0;n<5;n++ ){
	scanf("%d",&player[m].grade[n]);
}
max = player[m].grade[0];
min = player[m].grade[0];
printf("各位评委给的分数为\n");
for(n = 0;n<5;n++){
if(max<player[m].grade[n])max = player[m].grade[n];
 if(min>player[m].grade[n])min = player[m].grade[n];
 sum += player[m].grade[n];
 printf("%d\t",player[m].grade[n]);
}
player[m].score = sum - min - max;
printf("\n去掉最高分%d,去掉最低分%d,最后得分%d\n",max,min,player[m].score);
}


for(m = 0;m < i-1;m++){
	for(n = 0;n<i-1-m;n++){
		if(player[n].score>player[n+1].score){
		temp = player[n];
		player[n] = player[n+1];
		player[n+1] = temp;
		}
	}
}
for(m = 0;m < i;m++){
player[m].rank = m+1;
}


for(m = 0;m < i;m++){
	printf("编号:%d\t姓名:%s\t年龄:%d\t性别:%s\t职业:%s\t分数:%d\t名次:%d\n"
		,player[m].name,player[m].name,player[m].age,player[m].sex==m ? "男":"女",
		player[m].department,player[m].score,player[m].rank);
}








}
