#include<iostream>
using namespace std;

int check(int iPageframe[3],int x)
{
		for(int i=0;i<3;i++)
		{
			if(iPageframe[i]==x)
			return -1;
		}
		return 1;
}
	

int main()
{
	int n,j=0,x,z;
	int iRefstr[50];
	int iPageframe[3];

	for(int i=0;i<3;i++)
	{
		iPageframe[i]=-1;
	}	

	cout<<"\nEnter the Number of Elements of Paging Refernce String : ";
	cin>>n;
	cout<<n;

	cout<<"\nEnter the Elements of the Refernce String : ";
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the Element no "<<i+1<<" : ";
		cin>>iRefstr[i];	
	}

	cout<<"\nThe Elements of Refernce String \n";
	for(int i=0;i<n;i++)
	{
		cout<<iRefstr[i];	
	}	

	for(int i=0;i<n;i++)
	{
		 x=iRefstr[i];

		z=check(iPageframe,x);

		if(z==1)
		{
			iPageframe[j]=x;
			j=(j+1)%3;

			cout<<"\nReplaced Page Frame \n";
			for(int k=0;k<3;k++)
			{
				cout<<iPageframe[k]<<"\t";
			}
		}
		else
		cout<<"\nHIT";
		
	}

}


