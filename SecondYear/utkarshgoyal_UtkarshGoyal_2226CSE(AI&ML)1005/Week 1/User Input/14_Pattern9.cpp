class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++)
        {
            
            for(int j=n-i+1;j>0;j--)
            {
            printf("*");
            }
            for(int j=(n-1)*2;j>(n-i)*2;j--)
            printf(" ");
            
            for(int j=n-i+1;j>0;j--)
            {
            printf("*");
            }
            
            printf("\n");
        }
        for(int i=1;i<=n;i++)
        {
            
            for(int j=1;j<=i;j++)
            {
            printf("*");
            }
            for(int j=1;j<=(n-i)*2;j++)
            printf(" ");
            
            for(int j=1;j<=i;j++)
            {
            printf("*");
        
            }
            
            printf("\n");
        }
    }
};