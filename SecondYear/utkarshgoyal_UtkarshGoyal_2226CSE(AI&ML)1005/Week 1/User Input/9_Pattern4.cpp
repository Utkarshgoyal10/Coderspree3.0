class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int c=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
            printf("%d ",c);
            
            }
            c++;
            printf("\n");
        }
    }
};