class Solution{
public:
   int isStackPermutation(int N,vector<int> &A,vector<int> &B){
       stack<int> st;
       int j=0;
       for(int i=0;i<N;i++){
           while(!st.empty() and st.top() == B[j]){
               st.pop();
               j++;
           }
           st.push(A[i]);
       }
       while(!st.empty() and st.top() == B[j]){
           st.pop();
           j++;
       }
       return j==N;
   }
};