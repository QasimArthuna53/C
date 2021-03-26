#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
main()
{
	int g=1,b,h,k,m=0,z=1,l=0,i,j,r,c,x[10][10],s;
	char p1[9],p2[9];
	system("cls");
	y:printf("\t\thow many player : ");
	scanf("%d",&k);
	if(k>2||k<1)
	{
		printf("\t\tonly 2 players are allowed");
		goto y;
	}
	else if(k==1)
	{
		x:printf("\t\tenter your name for player 1 : ");
		scanf("%s",p1);
		if(strlen(p1)>9)
		{
			printf("\t\tenter your short name under 9 alphabets\n");
			goto x;
		}
		strcpy(p2,"computer");
	}
	else
	{
		h:printf("\t\tenter your name for player 1 : ");
		scanf("%s",p1);
		if(strlen(p1)>9)
		{
			printf("\t\tenter your short name under 9 alphabets\n");
			goto h;
		}
		xd:printf("\t\tenter your name for player 2 : ");
		scanf("%s",p2);
		if(strlen(p2)>9)
		{
			printf("\t\tenter your short name under 9 alphabets\n");
			goto xd;
		}
	}
	printf("\t\tlets play SOS");
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			x[i][j]=0;
	while(1)
	{
		system("cls");
		h=0;
		b=0;
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				if(i==0&&j==9)
					printf("     SOS\t");
				else if(j==9)
					printf("|     %d\t",i);
				else if(i==0)
					printf("    %d\t",j+1);
				else if((i==r&&j==c-1)&&(x[i][j]==0))
				{
					x[i][j]=s;
					g++;
					if((x[i][j]==2&&((x[i][j+1]==1&&x[i][j+2]==2)||(x[i][j-1]==1&&x[i][j-2]==2)||(x[i-1][j]==1&&x[i-2][j]==2)||(x[i+1][j]==1&&x[i+2][j]==2)||(x[i+1][j+1]==1&&x[i+2][j+2]==2)||(x[i+1][j-1]==1&&x[i+2][j-2]==2)||(x[i-1][j-1]==1&&x[i-2][j-2]==2)||(x[i-1][j+1]==1&&x[i-2][j+2]==2)))||(x[i][j]==1&&((x[i-1][j]==2&&x[i+1][j]==2)||(x[i][j-1]==2&&x[i][j+1]==2)||(x[i-1][j-1]==2&&x[i+1][j+1]==2)||(x[i-1][j+1]==2&&x[i+1][j-1]==2))))
					{
						if(z%2==0)
							l++;
						else
							m++;
						b=1;
					}
					goto a;
				}
				else if((i==r&&j==c-1)&&(x[i][j]!=0))
				{
					h=1;
					printf("|   %d\t",x[i][j]);
				}
				else if(x[i][j]!=0)
					a:printf("|   %d\t",x[i][j]);
				else
					printf("|\t");
			}
			printf("\n");
		}
		if(g>81)
		{
			if(l>m)
				printf("\t\t\t\t%s wins",p1);
			else if(l<m)
				printf("\t\t\t\t%s wins",p2);
			else
				printf("\t\t\t\tmatch draw");
			exit(1);
		}
		if(h==1)
		{
			printf("\t\t\t\terror it is already filled\n");
			goto qas;
		}
		else if(b!=1)
			z++;
		qas:printf("%s : %d |\t\t\t\t\t\t\t| %s : %d\n",p1,l,p2,m);
		if(z%2==0)
			printf("\t\t\t\t%s's turn\n",p1);
		else
			printf("\t\t\t\t%s's turn\n",p2);
		if(k==1&&z%2==1)
		{
			srand(time(0));
			s:r=rand()%10;
			if(r==0)
				goto s;
			v:c=rand()%10;
			if(c==0)
				goto v;
			s=rand()%2;
			if(s==0)
				s=2;
		}
		else
		{
			ac:printf("\t\t\t\tenter row :");
			scanf("%d",&r);
			if(r>9||r<1)
			{
				printf("\t\t\t\tnot allowed\n");
				goto ac;
			}
			acx:printf("\t\t\t\tenter column :");
			scanf("%d",&c);
			if(c>9||c<1)
			{
				printf("\t\t\t\tnot allowed\n");
				goto acx;
			}
			as:printf("\t\tenter character ( S : 2 , O : 1 , EXIT : 3 ) :");
			scanf("%d",&s);
			if(s>2||s<1)
			{
				if(s==3)
					exit(1);
				else
				{
					printf("\t\t\t\tnot allowed\n");
					goto as;
				}
			}
		}
	}
}
