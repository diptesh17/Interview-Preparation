// 1 : Maximum sum subarray of size k 
// Pick all the subarray with size equal to k and return the one which had max sum , return int with max sum stored

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
       int i=0,j=0;
       long ans=INT_MIN;
       long sum=0;
       while(j<N){
           sum+=Arr[j];
           if(j-i+1<K){
               j++;
           }
           else if(j-i+1==K){
               ans=max(ans,sum);
               sum-=Arr[i];
               i++;
               j++;
           }
       }
       return ans;
    }
};



// 2: For every window size k print first -ve number , if not present then add 0
