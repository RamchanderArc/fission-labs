#include<stdio.h>
#include<iostream>

class contest
{
	private:
		int c; //no. of contests
		int *p; //pointer to no. of problems in each contest
		int *n,*h; //n-problems solved by naren h-problems solved by herbal
		int i,j,k,l;

	public:
		contest()
		{
			std::cout<<"Enter no. of contests\n";
			std::cin>>c;
			p = new int[c];
			n = new int[c];
			h = new int[c];
			std::cout<<"Enter no. of problems in each contest\n";
			for(i=0;i<c;i++)
			{
				std::cin>>p[i];
			}				
		}
		void test()
		{
			for(i=0;i<c;i++)
			{
				h[i]=0;
				n[i]=p[i];
				for(j=2;j<p[i];j++)
				{
					if(p[i]%j==0)
					{
						l=0;
						for(k=2;k<j;k++)
						{
							if(j%k==0)
							{
								l++;
								break;
							}
						}
						if(l==0)
						{
							h[i]=j;
							n[i]=p[i]-j;
							break;
						}
					}
				}
			}
		}
		void print()
		{
			std::cout<<"Problems solved by herbal and naren are as follows\n";
			for(i=0;i<c;i++)
			{
				std::cout<<h[i]<<" "<<n[i]<<"\n";
			}
		}
};
int main()
{	
	contest ACM;
	ACM.test();
	ACM.print();
	return 0;
}


