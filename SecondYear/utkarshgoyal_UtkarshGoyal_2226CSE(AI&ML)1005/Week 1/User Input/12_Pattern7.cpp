class Solution {
  public:
    void printDiamond(int n) {
    for(int i=1;i<=n;i++)
        {
            for(int j=n;j>i;j--)
            printf(" ");
            
            for(int j=1;j<=i;j++)
            {
            printf("* ");
            }
            printf("\n");
        
        
    }
    for(int i=n;i>0;i--)
        {
            for(int j=n;j>i;j--)
            printf(" ");
            
            for(int j=1;j<=i;j++)
            {
            printf("* ");
            }
            printf("\n");
        
        
    }
    }
};