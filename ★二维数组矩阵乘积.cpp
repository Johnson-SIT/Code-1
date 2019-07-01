#include<iostream>
using namespace std;
int main()
{int a[2][3]={{1,2,3},{4,5,6}},b[3][2]={{1,4},{2,5},{3,6}};
 void num(int a[2][3],int b[3][2]);
 int i,j,k,l;
 for(i=0;i<2;i++)
    {for(j=0;j<3;j++)
       {cout<<a[i][j]<<" ";
       }
    cout<<endl;
    }
 for(k=0;k<3;k++)
    {for(l=0;l<2;l++)
       {cout<<b[k][l]<<" ";
       }
    cout<<endl;
    }
 num(a,b);
}
void num(int a[2][3],int b[3][2])
{int x,y,z,m,n;
 int c[2][2];
 for(x=0;x<2;x++)                         //c00=a00*b00+a01*b10+a02*b20
    {for(y=0;y<2;y++)                     //c01=a00*b01+a01*b11+a02*b21
       {int sum=0;                        //c10=a10*b00+a11*b10+a12*b20
	    for(z=0;z<3;z++)                  //c11=a10*b01+a11*b11+a12*b21
           {sum=sum+a[x][z]*b[z][y];
           }
        c[x][y]=sum;
       }
	}
 for(m=0;m<2;m++)
    {for(n=0;n<2;n++)
        {cout<<c[m][n]<<" ";
		}
	 cout<<endl;
	}  
}
