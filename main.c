#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{

    //��̬¼��
    double score[N];
    int i;
    //ʹ��ѭ����������ʱ��Ҫ����ʹ��һ��ѭ��ֻ��һ����
    for(i = 0;i < N;i++)
    {
        printf("�������%dλͬѧ�ɼ�:\n",i + 1);
        scanf("%lf",&score[i]);
    }
    //ʹ��ѭ����ӡ����
    for(i = 0;i < N;i++)
    {
        printf("��%dλͬѧ�ĳɼ���:%lf\n",i+1,score[i]);
    }
    return 0;


    //1.�������鲢�ҳ�ʼ��
    /*int nums[] = {8,4,2,1,23,344,79};
    int i;          //ѭ������
    int sum;        //���
    double avg;     //ƽ��ֵ
    int search_num;
    printf("���Ԫ��\n");
    //2.ѭ�����
    for(i = 0;i < 7;i++)
    {
        printf("%d\t",nums[i]);
    }
    printf("\n");
    //3.���ƽ��ֵ
    for(i = 0;i < 7;i++)
    {
        sum += nums[i];         //�����ۼ�
    }
    avg = sum / 7.0;
    printf("���ֵ��%d��ƽ��ֵ��%.2lf\n",sum,avg);
    //4.��������
    printf("��������Ҫ���ҵ�����:");
    scanf("%d",search_num);
    for(i = 0;i < 7;i++)
    {
        //һ��һ��Ԫ�رȶԣ���ٷ�
        //������ҵ�Ԫ�ظ������ĳ��Ԫ����ͬ
        if(search_num == nums[i])
        {
            printf("���ҵ���\n");
            break;
        }
    }
    //���û���ҵ���ѭ��������ʱ��i����7
    if(i == 7)
    {
        printf("û���ҵ�\n");
    }*/
}
