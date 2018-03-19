#ifndef FIB
#define FIB

#include <vector>

long long int fib(int x){
  std::vector<long long int> dp(x);
  for(int i=0;i<x;i++){
    if(i<=1) dp[i]=1;
    else dp[i]=dp[i-1]+dp[i-2];
  }
  return dp[x-1];
}

#endif
