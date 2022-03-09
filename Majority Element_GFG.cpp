int majorityElement(int a[], int size)
{
        
      int c=1;
      int m=0;
      int n=0;
      for(int i=1;i<size;i++)
      {
          if(a[i]==a[m])
               c++;
          else
               c--;
          if(c==0)
          {
              m=i;
              c=1;
          }
      }
       for(int i=0;i<size;i++)
           if(a[i]==a[m])
               n++;
       if(n>size/2)
           return a[m];
       else
           return -1;
}
