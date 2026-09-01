#include<iostream.h> 
#include<stdlib.h> 
#include<conio.h> 
#define N 3 
class deq 
{ 
 private: 
  int Q[N]; 
  int f,r; 
  public: 
  deq() 
  { 
   f=-1; 
   r=-1; 
  } 
  void insert_frontend(int item); 
  void insert_rearend(int item); 
  int delete_frontend(); 
  int delete_rearend(); 
  void display(); 
}; 
void deq::insert_frontend(int item) 
{ 
 if (((f==0) && (r==N-1)) || (f==r+1) ) 
 { 
 cout<<"\nqueue overflow\n"; 
 return; 
 } 
 else if( f==-1 )
 { 
  f=N-1; 
  r=N-1; 
 } 
 else if(f==0)  
  f=N-1; 
 else 
  f=f-1; 
  Q[f]=item ; 
}
 
void deq::insert_rearend(int item) 
{ 
 if(((f==0) && (r==N-1)) || (f==r+1) ) 
 { 
  cout<<"\nqueue overflow\n"; 
  return; 
  } 
 else if(f==-1) 
 { 
  f=0; 
  r=0; 
 } 
 else if(r==N-1)  
  r=0; 
 else 
  r=r+1; 
 Q[r]=item ; 
}/*end of insert_rearend()*/ 
 
int deq::delete_frontend() 
{ 
 int item; 
 if(f == -1) 
 { 
  cout<<"\nqueue underflow\n"; 
  return(0); 
 } 
 item=Q[f]; 
 if(f==r) 
 { 
  f=-1; 
  r=-1; 
 } 
 else if(f==N-1)  
  f=0; 
 else 
  f=f+1; 
 return item; 
}
int deq::delete_rearend() 
{ 
 int item; 
 if(f==-1) 
 { 
  cout<<"\nqueue underflow\n"; 
  return(0); 
 } 
 item=Q[r]; 
 if(f==r) /*queue has only one element*/ 
 { 
  f=-1; 
  r=-1; 
 } 
 else if(r==0)  
  r=N-1; 
 else 
  r=r-1; 
 return item; 
}
 
void deq::display() 
{ 
 int i; 
 if( f == -1) 
 { 
  cout<<"\nqueue underflow\n"; 
  return; 
 } 
 cout<<"\nqueue elements :\n"; 
 if(f<=r) 
 { 
  for(i=f;i<=r;i++) 
  cout<<" "<<Q[i]; 
 } 
 else 
 { 
  for(i=0;i<=r;i++) 
  cout<<" "<<Q[i]; 
  for(i=f;i<=N-1;i++) 
  cout<<" "<<Q[i]; 
 } 
 cout<<"\n"; 
} implement deque using circular array */ 
void main() 
{ 
  deq q1; 
 int choice,item; 
 do 
 { 
  clrscr(); 
  cout<<"\n\n1.insert at the front end\n"; 
  cout<<"2.insert at the rear end\n"; 
  cout<<"3.delete from front end\n"; 
  cout<<"4.delete from rear end\n"; 
  cout<<"5.display\n"; 
  cout<<"6.Exit\n"; 
  cout<<"\enter your choice : "; 
  cin>>choice; 
  switch(choice) 
  { 
   case 1: 
   cout<<"\ninput the element for adding in queue : "; 
   cin>>item; 
   q1.insert_frontend(item); 
   break; 
   case 2: 
   cout<<"\ninput the element for adding in queue : "; 
   cin>>item; 
   q1.insert_rearend(item); 
   break; 
   case 3: 
   cout<<"\nelement deleted from front end is :\n"<<q1.delete_frontend(); 
   break; 
   case 4: 
   cout<<"\nelement deleted from rear end is : "<<q1.delete_rearend(); 
   break; 
   case 5: 
   q1.display(); 
   break; 
   case 6: 
   cout<<"\nHave a nice day\n"; 
   break; 
   default: 
   cout<<"\nwrong choice\n"; 
   break; 
   }
   getch(); 
   }while(choice!=6);
}