#include <stdio.h>

struct xuesheng
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};
struct xuesheng arr[1000];
int index = 0;
int main(){

   printf("进入学生成绩管理系统\n");

   
   while(1){
       printf("1--添加学生成绩\n");
       printf("2--删除学生成绩\n");
       printf("3--显示所有学生成绩\n");
       printf("4--业务1：所有总分不及格的学生\n");
       printf("5--业务2：每一科都不及格的学生\n");
       printf("6--业务3：显示总分最高的学生\n");
       printf("7--业务4：显示平均分最高，且没有不及格科目的学生\n");
       printf("8--退出系统\n");

        printf("请输入相对应的功能编号\n");

        int code = 0;
        scanf("%d",&code);

        
        if (code == 1) {
            
        }
        if (code == 2) {
            
        }
        if (code == 3) {
            
        }
        if (code == 4) {
            
        }
        if (code == 5) {
            
        }
        if (code == 6) {
            
        }
        if (code == 7) {
            
        }
        if (code == 8) {
            printf("退出系统\n");
            break;
        }


   }
   

}