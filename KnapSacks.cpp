#include<iostream>
using namespace std;
#include<windows.h>

void knapsack(int n, float weight[], float profit[], float size)
 {
   float x[20], maxp = 0;
   int i, j, rc;
   rc= size;
 
   for (i = 0; i < n; i++)
      x[i] = 0.0;
 
   for (i = 0; i < n; i++) {
      if (weight[i] > rc)
         break;
      else {
         x[i] = 1.0;
         rc=rc-weight[i];
      }
   }
 
   if (i <= n)
  x[i] = rc / weight[i];
      
 for(i=0;i<n;i++)
 {
 
   maxp = maxp + (x[i] * profit[i]);
}
   
 
   cout<<" the maximum profit is:"<<maxp;
 
}
 
int main()
 {
   float weight[20], profit[20],size;
   int m,i,j;
   float ratio[20], temp;
 
   cout<<" enter the no.of items:";
   cin>>m;
 
   cout<<"enter the weights and profits:";
   for (i = 0; i < m; i++)
    {
      cin>>weight[i]>>profit[i];
   }
 
   cout<<" enter the size of the knapsack:";
   cin>>size;
   
 
   for (i = 0; i < m; i++) {
      ratio[i] = profit[i] / weight[i];
   }
 
   for (i = 0; i < m; i++) {
      for (j = i + 1; j < m; j++) {
         if (ratio[i] < ratio[j]) {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;
 
            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;
 
            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
      }
   }
 
   knapsack(m, weight, profit,size);
   //return(0);
   system("pause");

}
