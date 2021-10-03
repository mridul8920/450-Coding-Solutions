int main(){
string s1,s2,res;
cin>>s1>>s2>>res;
int l1=s1.size();
int l2=s2.size();
int lr=res.size();
if((l1+l2)!=lr)
  cout<<"No";
else{
 int f=0;
 int i=0,j=0,k=0;
 while(k<lr){
  if(i<l1 and s1[i]==res[k]) i++;
  else if(j<l2 and s2[j]==res[k]) j++;
  else {
    f=1;
    break;
    }
    k++;
 }
if(i<l1 or j<l2)
 cout<<"No";
else cout<<"Yes"; 
}

}
