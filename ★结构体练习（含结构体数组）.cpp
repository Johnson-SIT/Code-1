#include<iostream>
using namespace std;
struct student
 {char num[6];
  char name[8];
  int score[3];
  float a;
 }stu[3];
int main()
{int i,j,max,maxi,sum;
 for(i=0;i<3;i++)
    {cout<<"����ѧ��"<<i+1<<"����Ϣ"<<endl;
     cout<<"ѧ��:";
     cin>>stu[i].num;
     cout<<"����:";
     cin>>stu[i].name;
     for(j=0;j<3;j++)
        {cout<<"�ɼ�"<<j+1<<":";
         cin>>stu[i].score[j];
		}
	 cout<<endl;
    }
 max=0;
 maxi=0;
 for(i=0;i<3;i++)
    {sum=0;
    for(j=0;j<3;j++)
       sum+=stu[i].score[j];
    stu[i].a=sum/3.0;
    if(sum>max)
      {max=sum;
       maxi=i;
	  }
	}
	cout<<"ѧ������ƽ����"<<endl;
	for(i=0;i<3;i++)
	   cout<<stu[i].num<<" "<<stu[i].name<<" "<<stu[i].a<<endl;
	cout<<"��߷�����:"<<stu[maxi].name<<"�ܷ�Ϊ:"<<max<<endl;
	return 0;
 }
