class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++)
        {int c=1;
            for(int j=1;j<=i;j++)
            {
            printf("%d ",c);
            c++;
            }
            printf("\n");
        }
    }
};