#include<iostream>     //���������Ԥ����ָ�� 
#include<iomanip>      //ʹ�ÿ��Ʒ������������Ԥ����ָ�� 
#include<string>       //ʹ���ַ��������������Ԥ����ָ��
using namespace std;   //�������ֿռ� 
int main()             //���������� 
{
	void start();             //����start���� 
	void save_money();        //����save_money���� 
	void draw_money();        //����draw_money���� 
	void check_balance();     //����check_balance���� 
	void apply_account();     //����check_account���� 
	void interest();          //����interest���� 
	int a;
	while(1)               //ʼ��ִ��ѭ���� 
	{
		start();           //����start���� 
		cin>>a;
		switch(a)          //���֦ѡ��ṹ�е�switch��� 
		{
			case 0:return 0;break;        //ʹ��break��伴���ڳ���ִ������һ��case�־������switch�ṹ����ֹ��ѭ�� 
			case 1:save_money();break;
			case 2:draw_money();break;
			case 3:check_balance();break;
			case 4:apply_account();break;
			case 5:interest();break;
			default:cout<<"����!�������������Ƿ���Ч"<<endl;   //������case�Ӿ��еĳ������ʽ��ֵ������switch���ʽ��ֵƥ�䣬��ִ��default�Ӿ����Ƕ��� 
		}
	}
}
struct user_information    //�����ṹ������user_information 
{
	string user_ID;        //�����ַ��������û�ID 
	double save_amount;    //����˫���������˻���� 
	string name;           //�����ַ����������� 
}user[100];
int user_number=0;         //��������user_number������ʼ����ֵΪ0  
void start()               //����start���� 
{
	int i;
	for(i=1;i<=65;i++)
       {
	       cout<<"*";      //�������"*"����������ʼ���� 
	   }
	cout<<endl;
	cout<<"*\t\t\t��ӭʹ�����д������ƽ̨\t\t*"<<endl; //��ʾ��ʼ�˵��Ĺ���,\t�����Ʊ����һ���Ʊ��Ĭ�Ͽ�8���ַ� 
	cout<<"*\t\t\t\t\t\t\t\t*"<<endl; 
	cout<<"*\t\t\t1.  ���  \t\t\t\t*"<<endl;
	cout<<"*\t\t\t2.  ȡ��  \t\t\t\t*"<<endl;
	cout<<"*\t\t\t3.��ѯ���\t\t\t\t*"<<endl;
	cout<<"*\t\t\t4.  ����  \t\t\t\t*"<<endl;
	cout<<"*\t\t\t5.��Ϣ����\t\t\t\t*"<<endl; 
	cout<<"*\t\t\t0.�˳�����\t\t\t\t*"<<endl; 
	for(i=1;i<=65;i++)
	   {
          cout<<"*";        //�������"*"����������ʼ����
	   }
    cout<<endl<<"��ѡ����Ҫ�����ҵ��:";
}
void save_money()          //����save_money����
{string a;
 int b,i;
 double c;
 cout<<"�������������֤����(ID)"<<endl;
 cin >>a;
 for(i=0;i<100;i++)
    {if(a==user[i].user_ID)
       {b=i;                    //��һ������b����Ž��������Ĵ�����
	    break;
	    } 
	 else
	   continue;
	}
  cout<<"��������Ҫ����Ľ��"<<endl;
  cin>>c;
  user[b].save_amount+=c;
  cout<<"���ɹ���"<<endl;
}
void draw_money()       //����draw_money����
{string a;
 int b,i;
 double c;
 cout<<"�������������֤����(ID)"<<endl;
 cin >>a;
 for(i=0;i<100;i++)
    {if(a==user[i].user_ID)
       {b=i;                  //��һ������b����Ž��������Ĵ�����
	    break;
	    } 
	}
  end1:;
  cout<<"��������Ҫȡ���Ľ��"<<endl;
  cin>>c;
  if(c>user[b].save_amount)
    {cout<<"�����˻���������������";//���ȡ���������˻�����򱨴� 
     goto end1;                           //����ת�����Ϊend:�ĵط� 
	}
  else 
     {user[b].save_amount-=c;
      cout<<"ȡ��ɹ���"<<endl;
     }
}
void check_balance()  //����check_balance����
{ string a;
  int b,i;
  cout<<"�������������֤����(ID)"<<endl;
  cin >>a;
  for(i=0;i<100;i++)
    {if(a==user[i].user_ID)
       {b=i;                  //��һ������b����Ž��������Ĵ�����
	    break;
	    } 
	}
   cout<<"�����˻����Ϊ:"<<user[b].save_amount<<endl;
}
void apply_account()
{cout<<"������������֤����Ϊ���ID"<<endl;
 cin>>user[user_number].user_ID;
 cout<<"�������������"<<endl;
 cin>>user[user_number].name;
 user[user_number].save_amount=0;//��ʼ���˻����Ϊ0 
 user_number++;                  //ÿ�ο��������û������Զ�+1 
 cout<<"�����ɹ�!��лʹ��!"<<endl;
}
//����Ϊ��չ���� 
void interest()
{   int type;  
    double dMoney,dPeriod,dRate,dInterest;  
    cout<<"������Ԥ�ƴ����:";  
    cin>>dMoney;  
    cout<<"========�������======"<<endl;  
    cout<<"         1.3����"<<endl;  
    cout<<"         2.6����"<<endl;  
    cout<<"         3.һ��"<<endl;  
    cout<<"         4.����"<<endl;  
    cout<<"         5.����"<<endl;  
    cout<<"         6.����"<<endl;  
    cout<<"������Ԥ�ƴ�����޴���:";  
    cin>>type;  
    switch(type)  
    {  
    case 1:  
        dPeriod=0.25;  
        dRate=0.031;  
        break;  
    case 2:  
        dPeriod=0.5;  
        dRate=0.033;  
        break;  
    case 3:  
        dPeriod=1;  
        dRate=0.035;  
        break;  
    case 4:  
        dPeriod=2;  
        dRate=0.044;  
        break;  
    case 5:  
        dPeriod=3;  
        dRate=0.05;  
        break;  
    case 6:  
        dPeriod=5;  
        dRate=0.055;  
        break;  
    }  
    dInterest=dMoney*dPeriod*dRate;  
    cout<<"������Ϣ:"<<dInterest<<"Ԫ,��Ϣ�ϼ�:"<<dInterest+dMoney<<"Ԫ"<<endl;  
}
