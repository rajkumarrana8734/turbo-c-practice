#include<iostream.h>
#include<conio.h>
 class strg
 {
   public:
   char s[20],rem[10];
   void string_main();
};

void strg::string_main()
{
   int i;
   char temp[20];
   cout<<"enter string";
   cin>>s;
   cout<<"string is";
   cout<<s<<"\n";
   cout<<"after deleting vowels from string";
   for(i=0;i<strlen(s);i++)
   {
       if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
			      cout<<s[i];
   }
   cout<<"\n\nConvert all uppercase letter to lowercase";
   for(i=0;i<strlen(s);i++)
   {
      if(s[i]>=65 && s[i]<=90)
      {
	 s[i]=s[i]+32;
	 cout<<s[i];
      }
      else
	 cout<<s[i];
      }
      strcpy(temp,s);
      if(strcmp(s,strrev(temp))==0)
	   cout<<"\n\n String is palindrome";
      else
	   cout<<"\n\nString is not palindrome";
}
void main()
{
   clrscr();
   strg s1;
   s1.string_main();
   getch();
}