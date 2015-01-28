using namespace std;
#include<iostream>
struct node{
int data;
node *next;
};


node* insert(node *head)
{
int n,y=1;
do{
node *temp=new node();
cout<<"\nenter data\t";
cin>>n;
temp->data=n;
temp->next=NULL;
if(head==NULL)
head=temp;
else
{

temp->next=head;
head=temp;
}
cout<<"\ninserted\n";
cout<<"\nEnter more(press 1 for yes 0 for no)\t";
scanf("%d",&y);
}while(y==1);

return head;
}
void display(node *h)
{
	node* head =h;
cout<<"\n";


{
while(head!=NULL)
{
cout<<head->data<<"\t";
head=head->next;
}
//cout<<head->data;}

}}
int main()
{
node *head1=new node();
node *head2=new node();

cout<<"Enter data in first list\n";
head1 =insert(head1);
cout<<"\n"<<head1->data<<endl;
cout<<"\nEnter data in list 2 :";
head2 =insert(head2);
cout<<"\nData of first node are \n";
display(head1);
cout<<"\nData of 2nd list are \n ";
display(head2);
return 0;
}


