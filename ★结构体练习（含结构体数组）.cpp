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
    {cout<<"输入学生"<<i+1<<"的信息"<<endl;
     cout<<"学号:";
     cin>>stu[i].num;
     cout<<"姓名:";
     cin>>stu[i].name;
     for(j=0;j<3;j++)
        {cout<<"成绩"<<j+1<<":";
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
	cout<<"学号姓名平均分"<<endl;
	for(i=0;i<3;i++)
	   cout<<stu[i].num<<" "<<stu[i].name<<" "<<stu[i].a<<endl;
	cout<<"最高分者是:"<<stu[maxi].name<<"总分为:"<<max<<endl;
	return 0;
 }
