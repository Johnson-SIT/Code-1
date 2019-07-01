#include<iostream>
using namespace std;
int main()
{void qipao(int a[]);
 void xuanze(int b[]);
 int c[6],i;
 cout<<"请输入6个数组的元素:"<<endl;
 cin>>c[1]>>c[2]>>c[3]>>c[4]>>c[5]>>c[6];
 cout<<"起泡法";
 qipao(c);
 for(i=1;i<7;i++)
 cout<<c[i]<<" ";
 cout<<endl;
 cout<<"选择排序法";
 xuanze(c);
 for(i=1;i<7;i++)
  cout<<c[i]<<" ";
 return 0;
}
void qipao(int a[6])
{int i,j,k;
 for(j=1;j<6;j++)
    for(i=1;i<7-j;i++)
        if(a[i]>a[i+1])
        {k=a[i];
         a[i]=a[i+1];
         a[i+1]=k;
		}
}
 void xuanze(int b[6])
 {int min=b[0],min_=0,t,i,j;
  for(i=1;i<7;i++)
  {min=b[i];
   min_=i;
   for(j=i+1;j<7;j++)
      {if(b[j]<min)
         {min=b[j];
          min_=j;
	     }
      }
      t=b[min_];
      b[min_]=b[i];
      b[i]=t;
  }
 }
