#include <stdio.h>
#include <string.h>
#include <math.h>

/*
int main()
{
	int grade,num;
	int i,j;         //i������
	scanf("%d %d",&grade,&num);
	if(grade==1)
	{
		for(i=0;i<=20;i++)
		{
			for(j=0;j<=20;j++)
			{
*/


#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int sum_ys=0;

int add(int num1, int num2)//�ӷ�
{
	return num1 + num2;
}

int subtraction(int num1, int num2)//����
{
	return num1 - num2;
}

int mul(int num1, int num2)//�˷�
{
	return num1*num2;
}

float divis(int num1, int num2)//����  �������뱣����λС��
{
	return ((int)(((float)num1 / num2) * 100 )) / 100.0;
}

float sumx(float sum)
{
	//return (float)(Math.round(sum*100))/100
	//float sum2=9 + 12 / 5 - 16;
	//printf("\n  %.2f\n",sum2);
	//return ((int)(sum2* 100 + 0.5)) / 100.0;

	return (int)(sum* 1000 + 0.5) / 1000.0;
}

int random(int m)  //���������
{
	return rand()%m;
}

double yunsuanfu(int a,int b,int c)
{
	char fuhao[4]={'+','-','*','/'};
	int x1=1;
	int x2=1;
	while(x1!=3 && x2!=3)
	{
		x1=rand()%3+1;
		x2=rand()%3+1;
	}
	int sum=0;
	printf("%d %c %d %c %d =__?__\n", a,fuhao[x1-1], b,fuhao[x2-1], c);
	switch(x2)
	{
		case 1:
			if(x1==1)
				return a+b+c;
			else if(x1==2)
				return a-b+c;
			else if(x1==3)
				return a*b+c;
			break;

		case 2:
			if(x1==1)
				return a+b-c;
			else if(x1==2)
				return a-b-c;
			else if(x1==3)
				return a*b-c;
			break;

		case 3:
			if(x1==1)
				return a+b*c;
			else if(x1==2)
				return a-b*c;
			else if(x1==3)
				return a*b*c;
			break;
	}
}

int main()
{
	int type = -1;
	int data = -1;
	int grade, results; //�꼶 ���
	int num1,num2,num5,num6;		//num1 num2Ϊϵͳ����ʱ�����ɵ������ 
	int num4,num3;      //num4 Ϊʹ��������ж����������  num3Ϊ����������жϵ�˫ ��Ӧ���ɼӼ���
	int flag=0; 
	int sum=0,sum2=0;   //sum2ΪsumӰ�� �����жϽ���Ƿ��������
	float div_result;   //�������
	int right = 0;      //��Ը���
	int wrong = 0;      //������
	char ch;
	
	printf("��ӭ����Сѧ���������⣡\n");
	srand((unsigned int)time(0));

	while (1)
	{
		printf("�������꼶��1.һ�꼶 2.���꼶 3.���꼶 4.���꼶 ���꼶 ���꼶\n");
		//printf("��ѡ���������ͣ� 3.�˷� 4.����(������λС��)\n");  //��Ϊ���
		scanf("%d", &grade);
		printf("������������\n");  //��Ϊ��Ŀ���� while(data--)
		scanf("%d", &data);
		//printf("%d  ",rand()%50);
		//srand((unsigned int)time(0));

		switch (grade)
		{
			case 1:   //һ�꼶����Ӽ���
				{
					while(data--)
					{
					num3 = rand() % 2;  //�������ɼӷ� ˫�����ɼ���
					if (num3==1)
					{
						num1 = rand() % 20;  //����20���������
						num2 = rand() % 20;  //����20���������

						while(add(num1, num2)>20)  //�жϽ���Ƿ����20����
						{
							num1 = rand() % 20;  //��������20���������
							num2 = rand() % 20;  //��������20���������
						}

						printf("%d + %d=__?__\n", num1, num2);
						scanf("%d", &results);

						if (results == add(num1, num2))
						{
							printf("�ش���ȷ��\n");
							right++;	
						}
						else
						{
							printf("�ش����\n");
							wrong++;
						}
						/*
						printf("�Ƿ������y/n\n");
						getchar();
						scanf("%c", &ch);

						if (ch == 'y')
							break;
						else if (ch == 'n')
							goto end;
						*/
					}
				
				else if(num3==0)  //��������
				{
					num1 = rand() % 20;  //����20���������
					num2 = rand() % 20;  //����20���������
					while(add(num1, num2)>20)  //�жϽ���Ƿ����20����
					{
						num1 = rand() % 20;  //��������20���������
						num2 = rand() % 20;  //��������20���������
					}
					printf("%d - %d=__?__\n", num1, num2);

					scanf("%d", &results);

					if ( results == subtraction(num1, num2) )
					{
						printf("�ش���ȷ��\n");
						right++;	
					}
					else
					{
						printf("�ش����\n");
						wrong++;
					}
					/*
					printf("�Ƿ������y/n\n");
					getchar();
					scanf("%c", &ch);

					if (ch == 'y')
						break;
					else if (ch == 'n')
						goto end;
					*/
				}
				}
				printf("�Ƿ������y/n\n");
				getchar();
				scanf("%c", &ch);

				if (ch == 'y')
					break;
				else if (ch == 'n')
					
				goto end;	
			}


			case 2:   //���꼶����Ӽ���
				{
					while(data--)
					{
					sum=0;
					flag=0;
				
					num3 = rand() % 2;  //�������ɼӷ� ˫�����ɼ���
					num4 = rand() % 10 - 1;  //��������� num3Ϊ�� ��ʽΪ���������
					while(num4<=1)
						num4 = rand() % 10 - 1;  //ʹ�������������2
					//printf("%d\n",num4);

					if(num3==1)
					{
						num1 = rand() % 50;  //����50���������
						num2 = rand() % 50;  //����50���������
						sum=0;
						sum+=add(num1,num2);
						while(sum>40)            //�����λ�ӷ� ǰ��λ��С��40
						{
							sum=0;
							num1 = rand() % 50;  //��������50���������
							num2 = rand() % 50;  //��������50���������
							sum+=add(num1,num2);
						}
					}
					else if(num3==0)
					{
						num1 = rand() % 50;  //����50���������
						num2 = rand() % 50;  //����50���������
						sum=0;
						sum+=subtraction(num1,num2);
						while(sum>50)
						{
							num1 = rand() % 50;  //��������50���������
							num2 = rand() % 50;  //��������50���������
							sum+=subtraction(num1,num2);
						}
					}
					
					while(num4--)
					{
						if(num3==1)
						{
							if(flag==0)
							{
								printf("%d + %d", num1, num2);
								flag=1;		
								//sum+=add(num1,num2);
							}
							else if(flag==1)
							{
								printf(" + %d", num2);
								sum+=num2;
							}	
						}
						else if(num3==0)
						{
							if(flag==0)
							{
								printf("%d - %d", num1, num2);
								flag=1;		
								//sum+=subtraction(num1,num2);
							}
							else if(flag==1)
							{
								printf(" - %d", num2);
								sum-=num2;
							}	 
						}

						sum2=sum;

						num2 = rand() % 50;

						num3 = rand() % 2;

						if(num3==1)
							sum2+=num2;
						else if(num3==0)
							sum2-=num2;

						while(sum2>50)  //�жϽ���Ƿ����50����
						{
							num2 = rand() % 50;  //��������50���������
							sum2=sum;
							if (num3==1)
								sum2+=num2;
							else if(num3==0)
								sum2-=num2;						
						}
					   
					
					}

					printf("=__?__\n");
					scanf("%d", &results);
					if ( results == sum )
					{
						printf("�ش���ȷ��\n");
						right++;	
					}
					else
					{
						printf("�ش����\n");
						wrong++;
					}

					/*
					printf("�Ƿ������y/n\n");
					getchar();
					scanf("%c", &ch);

					if (ch == 'y')
						break;
					else if (ch == 'n')
						goto end;
					*/
					}
					printf("�Ƿ������y/n\n");
					getchar();
					scanf("%c", &ch);

					if (ch == 'y')
						break;
					else if (ch == 'n')
						
				goto end;	
			}

			case 3:
				{
				while(data--)
				{
					double m3;
					num1 = rand() % 1000;
					num2 = rand() % 1000;
					num5 = rand() % 1000;
					m3=yunsuanfu(num1,num2,num5);
					printf("%.2lf\n",m3);
					
					scanf("%d", &results);

					if (results == m3)
					{
						printf("�ش���ȷ��\n");
						right++;
					}
					else
					{
						printf("�ش����\n");
						wrong++;
					}
					/*
					printf("�Ƿ������y/n\n");
					getchar();
					scanf("%c", &ch);

					if (ch == 'y')
						break;
					else if (ch == 'n')
						goto end;
					*/
				}
				printf("�Ƿ������y/n\n");
				getchar();
				scanf("%c", &ch);

				if (ch == 'y')
					break;
				else if (ch == 'n')
							
				goto end;
				}

			case 4://���꼶����Ӽ���
				  
				{
					while(data--)
					{
					char fuhao[4]={'+','-','*','/'};
					char s[100];
					int a[100];
					float b[100];
					int num[4];
					int x1=1;
					int x2=1;
					int x3=1;
					int x[3];
					int j;
					while(x1!=3 && x2!=3 && x1!=4 && x2!=4 && x3!=3 && x3!=4)
					{
						a[1]=x1=rand()%4+1;
						a[3]=x2=rand()%4+1;
						a[5]=x3=rand()%4+1;
					}

					float sum=0;
					float results;
					flag=0;
				
					//num3 = rand() % 2;  //�������ɼӷ� ˫�����ɼ���
					//num4 = rand() % 10 - 1;  //��������� num3Ϊ�� ��ʽΪ���������
					//while(num4<=2)
					//	num4 = rand() % 10 - 1;  //ʹ�������������Ϊ3
					//printf("%d\n",num4);
					a[0]=num1 = rand() % 20;  //����10���������
					a[2]=num2 = rand() % 20;  //����10���������
					a[4]=num5 = rand() % 20;  //����10���������
					a[6]=num6 = rand() % 20;  //����10���������
					for(int i=0;i<8;i++)  //�����ʽ
					{
						b[i]=a[i];
						printf("%d ",a[i]);
						if(i==6) break;
						i++;			
						printf("%c ",fuhao[a[i]-1]);
					}
					printf("=__?__\n");
					for(int i=0;i<5;i+=2,j=i)
					{
						if(a[i+1]==3)
						{
							b[i+2]=b[i]*b[i+2];
							b[i]=0;
						}
						else if(a[i+1]==4)
						{
							b[i+2]=divis(b[i],b[i+2]);
							b[i]=0;
						}
						else if(a[i+1]==2)
							b[i+2]=-b[i+2];
					}
					for(int i=0;i<7;i+=2)
					{
						//printf("%.2f ",b[i]);
					   sum+=b[i];
					}
					
					//sum=sumx(sum);
					//if(x1==4 || x2==4 || x3==4 )
						//sum=(int)(sum* 100 + 0.5) / 100.0;
					printf("\n��(�������뱣����λС����%.2f\n",sum);

					//printf("2/4=%.2f\n",divis(2,4));
					//printf("3/8=%.2f\n",divis(3,8));
					//printf("10/3=%.2f\n",divis(10,3));
					//printf("19/10=%.2f\n",divis(19,10));
					//printf("19/10=%.2f\n",sumx(1.9));
					//printf("18 / 17=%.2f\n",18.0/17.0);
					//printf("8 / 16=%.2f\n",8.0/16.0);
					//printf("8 / 16=%3f\n",8.0/16.0);
						//6 - 7 + 8 / 16 =__?__

						//�𰸣�-0.49
					//x2=rand()%4+1;
					//printf("s=%s\n",s);					

					scanf("%f", &results);
					if ( results == sum )
					{
						printf("�ش���ȷ��\n");
						right++;	
					}
					else
					{
						printf("�ش����\n");
						wrong++;
					}
					/*
					printf("�Ƿ������y/n\n");
					getchar();
					scanf("%c", &ch);

					if (ch == 'y')
						break;
					else if (ch == 'n')
						goto end;
					*/
					}
				printf("�Ƿ������y/n\n");
				getchar();
				scanf("%c", &ch);

				if (ch == 'y')
					break;
				else if (ch == 'n')
					getchar();
				goto end;	
			}

		default:
			printf("�������\n");
			break;
		}

	}
	end:
	printf("�ش���ȷ%d�⣬�ش����%d��\n", right, wrong);
	printf("\n===================��лʹ��=====================��\n");
	puts("pause");
	getchar();
	getchar();
	return 0;
}