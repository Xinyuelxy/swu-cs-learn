#include<bits/stdc++.h>
using namespace std;
int const N=10e6;
int a[N];
void DeleteMax(int a[],int n)
{
    swap(a[0],a[n-1]);
    int k=0,i=0,j=0;    //��ʼλ��,i,jΪ�����ӽڵ�
    while((2*k+1)<n)       //�Զ����µ���,��Ҷ�ӽڵ�ֹͣ
    {
        i=2*k+1;
        j=2*k+2;
        if(a[k]<a[i] || a[k]<a[j])  //�����ǰ�ڵ���������ߵĽڵ�С������һ�������
        {
            if(a[i]>=a[j]){swap(a[i],a[k]);k=i;}
            else{swap(a[j],a[k]);k=j;}
        }
        else{break;}
    }
}
int main()
{
    int a[10]={39,25,37,18,20,32,13,3,14,6};
    DeleteMax(a,10);
    for(int i=0;i<9;i++) printf("%d ",a[i]);
    return 0;
}
