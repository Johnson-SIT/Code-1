#include<iostream>     //输入输出流预处理指令 
#include<iomanip>      //使用控制符的输入输出流预处理指令 
#include<string>       //使用字符串的输入输出流预处理指令
using namespace std;   //运用名字空间 
int main()             //主函数部分 
{
	void start();             //声明start函数 
	void save_money();        //声明save_money函数 
	void draw_money();        //声明draw_money函数 
	void check_balance();     //声明check_balance函数 
	void apply_account();     //声明check_account函数 
	void interest();          //声明interest函数 
	int a;
	while(1)               //始终执行循环体 
	{
		start();           //调用start函数 
		cin>>a;
		switch(a)          //多分枝选择结构中的switch语句 
		{
			case 0:return 0;break;        //使用break语句即可在程序执行其中一个case字句后跳出switch结构，防止死循环 
			case 1:save_money();break;
			case 2:draw_money();break;
			case 3:check_balance();break;
			case 4:apply_account();break;
			case 5:interest();break;
			default:cout<<"错误!请检查输入数字是否有效"<<endl;   //若所有case子句中的常量表达式的值不能与switch表达式的值匹配，就执行default子句的内嵌语句 
		}
	}
}
struct user_information    //声明结构体类型user_information 
{
	string user_ID;        //定义字符串类型用户ID 
	double save_amount;    //定义双精度整型账户金额 
	string name;           //定义字符串类型姓名 
}user[100];
int user_number=0;         //定义整型user_number，并初始化赋值为0  
void start()               //定义start函数 
{
	int i;
	for(i=1;i<=65;i++)
       {
	       cout<<"*";      //输出若干"*"来美化程序开始界面 
	   }
	cout<<endl;
	cout<<"*\t\t\t欢迎使用银行储蓄管理平台\t\t*"<<endl; //显示开始菜单的功能,\t代表制表符，一个制表符默认空8个字符 
	cout<<"*\t\t\t\t\t\t\t\t*"<<endl; 
	cout<<"*\t\t\t1.  存款  \t\t\t\t*"<<endl;
	cout<<"*\t\t\t2.  取款  \t\t\t\t*"<<endl;
	cout<<"*\t\t\t3.查询余额\t\t\t\t*"<<endl;
	cout<<"*\t\t\t4.  开户  \t\t\t\t*"<<endl;
	cout<<"*\t\t\t5.利息计算\t\t\t\t*"<<endl; 
	cout<<"*\t\t\t0.退出程序\t\t\t\t*"<<endl; 
	for(i=1;i<=65;i++)
	   {
          cout<<"*";        //输出若干"*"来美化程序开始界面
	   }
    cout<<endl<<"请选择您要办理的业务:";
}
void save_money()          //定义save_money函数
{string a;
 int b,i;
 double c;
 cout<<"请输入您的身份证号码(ID)"<<endl;
 cin >>a;
 for(i=0;i<100;i++)
    {if(a==user[i].user_ID)
       {b=i;                    //用一个变量b来存放借贷人申请的贷款编号
	    break;
	    } 
	 else
	   continue;
	}
  cout<<"请输入您要存入的金额"<<endl;
  cin>>c;
  user[b].save_amount+=c;
  cout<<"存款成功！"<<endl;
}
void draw_money()       //定义draw_money函数
{string a;
 int b,i;
 double c;
 cout<<"请输入您的身份证号码(ID)"<<endl;
 cin >>a;
 for(i=0;i<100;i++)
    {if(a==user[i].user_ID)
       {b=i;                  //用一个变量b来存放借贷人申请的贷款编号
	    break;
	    } 
	}
  end1:;
  cout<<"请输入您要取出的金额"<<endl;
  cin>>c;
  if(c>user[b].save_amount)
    {cout<<"超出账户余额，请重新输入金额";//如果取出金额大于账户余额则报错 
     goto end1;                           //并跳转至标记为end:的地方 
	}
  else 
     {user[b].save_amount-=c;
      cout<<"取款成功！"<<endl;
     }
}
void check_balance()  //定义check_balance函数
{ string a;
  int b,i;
  cout<<"请输入您的身份证号码(ID)"<<endl;
  cin >>a;
  for(i=0;i<100;i++)
    {if(a==user[i].user_ID)
       {b=i;                  //用一个变量b来存放借贷人申请的贷款编号
	    break;
	    } 
	}
   cout<<"您的账户余额为:"<<user[b].save_amount<<endl;
}
void apply_account()
{cout<<"请输入你的身份证号作为你的ID"<<endl;
 cin>>user[user_number].user_ID;
 cout<<"请输入你的姓名"<<endl;
 cin>>user[user_number].name;
 user[user_number].save_amount=0;//初始化账户余额为0 
 user_number++;                  //每次开户过后，用户人数自动+1 
 cout<<"开户成功!感谢使用!"<<endl;
}
//以下为拓展功能 
void interest()
{   int type;  
    double dMoney,dPeriod,dRate,dInterest;  
    cout<<"请输入预计存款金额:";  
    cin>>dMoney;  
    cout<<"========存款期限======"<<endl;  
    cout<<"         1.3个月"<<endl;  
    cout<<"         2.6个月"<<endl;  
    cout<<"         3.一年"<<endl;  
    cout<<"         4.二年"<<endl;  
    cout<<"         5.三年"<<endl;  
    cout<<"         6.五年"<<endl;  
    cout<<"请输入预计存款期限代号:";  
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
    cout<<"到期利息:"<<dInterest<<"元,本息合计:"<<dInterest+dMoney<<"元"<<endl;  
}
