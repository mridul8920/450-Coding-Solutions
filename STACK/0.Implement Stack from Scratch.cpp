#include<bits/stdc++.h>
using namespace std;
struct MyStack{
int top;
int cap;
int *arr;
MyStack(int c){
    cap=c;
    arr=new int[cap];
    top=-1;
}
void push(int x){
    top++;
    arr[top]=x;
}
int pop(){
    int res=arr[top];
    top--;
    return res;
}
int peek(){
    return arr[top];
}
int size(){
    return (top+1);
}
int isempty(){
    return (top==-1);
}

};
int main(){
    MyStack s(5);
    s.push(5);
    s.push(13);
    s.push(11);
    cout<<"pop: "<<s.pop()<<endl<<"top: "<<s.peek()<<endl<<"size: "<<s.size()<<endl<<"isempty: "<<s.isempty();
    return 0;
}
