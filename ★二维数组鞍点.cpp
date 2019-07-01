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
    for(i=0;i<5;i++)                       //控制行数循环 
    	{int max=a[i][0],max_i=i,max_j=0;  //各初始值 
         for(j=1;j<5;j++)                  //控制列数循环 
	       	{if(a[i][j]>max)               //找出每行最大值max，并记录max的列数j 
		    	{max=a[i][j];
                 max_j=j;
                }
            }
         int f=1;
         for(k=0;k<5;k++)                  //检查max所在列 是否存在小于max的数 
	    	{if(a[k][max_j]<max)
		       {f=0;                       //如果有令f=0并跳出循环（f=0表示不满足条件，让之后if判断） 
                break;
               }
            }
         if(f==1)                          //f=1视为满足条件，输出鞍点 
		   {c++;                           //c++后不等于初值0，即表示存在鞍点，让之后的if判断 
            cout<<"此二维数组鞍点为"<<max;
           }
        }
    if(c==0)                               //没有满足条件的情况，没有鞍点 
       cout<<"此二维数组没有鞍点";
}
