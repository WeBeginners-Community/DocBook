class Solution{
public:
   int isStackPermutation(int N,vector<int> &A,vector<int> &B){
       stack<int> st;      //Stack is created using hashmap
       int j=0;
       for(int i=0;i<N;i++){
           while(!st.empty() and st.top() == B[j]){
               st.pop();         //popping or removing the elements from the top of the stack
               j++;
           }
           st.push(A[i]);        //pusing the elements of the array to the stack
       }
       while(!st.empty() and st.top() == B[j]){
           st.pop();
           j++;
       }
       return j==N;
   }
};
