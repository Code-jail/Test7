#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{

    //动态录入
    double score[N];
    int i;
    //使用循环操作数组时，要尽量使用一个循环只做一件事
    for(i = 0;i < N;i++)
    {
        printf("请输入第%d位同学成绩:\n",i + 1);
        scanf("%lf",&score[i]);
    }
    //使用循环打印数组
    for(i = 0;i < N;i++)
    {
        printf("第%d位同学的成绩是:%lf\n",i+1,score[i]);
    }
    return 0;


    //1.定义数组并且初始化
    /*int nums[] = {8,4,2,1,23,344,79};
    int i;          //循环变量
    int sum;        //求和
    double avg;     //平均值
    int search_num;
    printf("输出元素\n");
    //2.循环输出
    for(i = 0;i < 7;i++)
    {
        printf("%d\t",nums[i]);
    }
    printf("\n");
    //3.求和平均值
    for(i = 0;i < 7;i++)
    {
        sum += nums[i];         //经典累加
    }
    avg = sum / 7.0;
    printf("求和值是%d，平均值是%.2lf\n",sum,avg);
    //4.查找数字
    printf("请输入需要查找的数字:");
    scanf("%d",search_num);
    for(i = 0;i < 7;i++)
    {
        //一个一个元素比对，穷举法
        //如果查找的元素根数组的某个元素相同
        if(search_num == nums[i])
        {
            printf("查找到了\n");
            break;
        }
    }
    //如果没有找到，循环结束的时候，i等于7
    if(i == 7)
    {
        printf("没有找到\n");
    }*/
}
