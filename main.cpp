#include <iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
   string s1,s2;
   int n=0;
      cout<<"Input the string... \nTHEN THE SCREEN WILL BE AUTOMATICALLY CLEARED!\n\n";
getline(cin,s1);
s2=s1;
system("cls");
int k;
cout<<endl;
cout<<"Player one enter number of tries \n";
cin>>k;
cout<<"You have "<< k <<" tries\n";
char arr[5]={};
     for(int i=0;s1[i]!='\0';i++){
            if(s1[i]==' '){
                cout<<" ";
            }
            else{
            cout<<"_";}
    }
    cout<<endl<<"Characters will be placed between the dots\n";
 for(int p=0;p<k;p++){
cout<<endl<<"Enter "<<p+1<<" choice. TRY "<< p+1 <<" \n";

cin>>arr[p];

    for(int i=0;s1[i]!='\0';i++){
            for(int j=0;j<=p;j++){
      if(arr[j]==s1[i]){
cout<<s1[i];
      }

}

            if(s1[i]==' '){
                cout<<"   ";
            }
            else{
            cout<<".";}


}




}
return 0;
}





