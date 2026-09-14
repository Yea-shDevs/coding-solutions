class Solution {
  public:
    int count=0;
    int towerOfHanoi(int n, int S, int M, int D) {
   if(n==1)
   count++;
   
   
   else
   {
        towerOfHanoi( n-1, S, D ,M );
        count++;
        towerOfHanoi( n-1,  M, S ,D);
   }
   return count;
   
}
};