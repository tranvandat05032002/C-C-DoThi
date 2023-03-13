#include<bits/stdc++.h>
using namespace std;

void Input(char s[])
{
	cout<<"Nhap chuoi s: ";
	gets(s);
}
int thongke(char s[])
{
	int count = 0;
	for(int i=0; i<strlen(s); i++)
	{
		if(s[i] == 'a')
		   count++;
	}
	return count;
}
int DD(char s[])
{
	int dem = 0;
	for(int i=0; i<strlen(s); i++)
	{
		dem++;
	}
	return dem;
}
void copy(char s[], char t[])
{
	strcpy(t, s);
	cout<<"Chuoi t (copy): "<<t;
}
void SS(char s[], char t[])
{
	cout<<"Nhap Chuoi t: ";
	gets(t);
	if(strcmp(s,t)==0)
	    cout<<"chuoi s = chuoi t";
	else if(strcmp(s,t)>0)
	    cout<<"chuoi s > chuoi t";
	else 
	    cout<<"chuoi s < chuoi t";
}
void del(char s[])
{
	int i=0;
	while (i<strlen(s))
	{
		if (s[i]==32)
		{
			for (int j=i; j<=strlen(s); j++)
				s[j]=s[j+1];
		}
		else
			i++;
	}
	cout<<"Chuoi sau khi xoa khoang trang: "<<s;
}
void inhoa(char s[])
{
//	cout << s << endl;
	for(int i=0; i<=strlen(s); i++)
	{
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
   }
   cout<<"Chuoi in hoa: "<<s;
}
int main()
{
	char s[100], t[100];
	Input(s);
	char saveS[100];
	strcpy(saveS, s);
	cout<<"So ky tu a xuat hien: "<<thongke(s)<<endl;
	cout<<"Do dai cua chuoi s: "<<DD(s)<<endl;
	copy(s,t); cout<<endl;
	SS(s,t); cout<<endl;
	del(s);cout<<endl;
	inhoa(saveS);
}
