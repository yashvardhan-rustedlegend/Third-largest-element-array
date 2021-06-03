#include<iostream>
using namespace std;
int thirdLargest(int a[], int n)
{
    if(n<3)
        return -1;
    else
    {
         int max=0,temp;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
         for(int i=0;i<n;i++)
         {
             if(max==2)
             {
                 return a[i];
                 break;
             }
             else
             {
                 if(a[i]>a[i+1])
                 max++;
             }
         }
	}
}
int main()
{
	int a[]={2,4,1,1,5,3,5};
	int n=sizeof(a)/sizeof(a[0]);
	int k=thirdLargest(a,n);
	cout<<"third Largest element in the array is "<<k;
}
