#include <iostream>
using namespace std;
int main()
{int a[][5]={{19,21,31,26,30},{27,44,40,60,40},{52,12,57,64,35},{45,81,55,16,20},{36,50,37,22,75}};
 void andian(int a[][5]);
 int i,j;
 for(i=0;i<5;i++)
    {for(j=0;j<5;j++)
        cout<<a[i][j]<<" ";
     cout<<endl;
    }
    andian(a);
    return 0;
}
void andian(int a[][5])
{int i,j,k,c=0;
    for(i=0;i<5;i++)                       //��������ѭ�� 
    	{int max=a[i][0],max_i=i,max_j=0;  //����ʼֵ 
         for(j=1;j<5;j++)                  //��������ѭ�� 
	       	{if(a[i][j]>max)               //�ҳ�ÿ�����ֵmax������¼max������j 
		    	{max=a[i][j];
                 max_j=j;
                }
            }
         int f=1;
         for(k=0;k<5;k++)                  //���max������ �Ƿ����С��max���� 
	    	{if(a[k][max_j]<max)
		       {f=0;                       //�������f=0������ѭ����f=0��ʾ��������������֮��if�жϣ� 
                break;
               }
            }
         if(f==1)                          //f=1��Ϊ����������������� 
		   {c++;                           //c++�󲻵��ڳ�ֵ0������ʾ���ڰ��㣬��֮���if�ж� 
            cout<<"�˶�ά���鰰��Ϊ"<<max;
           }
        }
    if(c==0)                               //û�����������������û�а��� 
       cout<<"�˶�ά����û�а���";
}
