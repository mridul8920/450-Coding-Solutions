char* reverse(char *S, int len)
{
    //code here
    stack<int>s;
    for(int i=0;i<len;i++){
        s.push(S[i]);
    }
    for(int i=0;i<len;i++){
        S[i]=s.top();
        s.pop();
    }
    return S;
}
