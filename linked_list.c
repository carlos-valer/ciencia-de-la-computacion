#include <stdio.h>

struct nodo
{
	int val;
	struct nodo *next;
};
void print(struct nodo *head){
	struct nodo *t;
	t=head;
	while(t!=NULL)
	{
		printf("%d",t->val);
		t=t->next;
	}
}


struct nodo *delete(struct nodo *head,int x)
{
	struct nodo *prev,*cur;
	prev=head;
	cur=head->next;
	
	if(head->val==x){
		head=head->next;
		free(prev);
	}
	else{
		while(cur!=NULL)
		{
			if(cur->val == x)
			{
				prev->next = cur->next;
				free(cur);
				break;
			}
			prev=cur;
			cur=cur->next;
		}
		if(cur==NULL)printf("ERROR\n");
	}
	return head;
}


struct nodo *createList(struct nodo *head,int tam)
{
	int i=0;
	struct nodo *t,*cur;
	head=malloc(sizeof(struct nodo));
	cur=head;
	scanf("%d",&head->val);
	while(i+1<tam)
	{
		t=malloc(sizeof(struct nodo));
		scanf("%d",&t->val);
/*		t->val=i+2;*/
		cur->next=t;		
		cur=t;
		i++;
	}
	cur->next=NULL;
	return head;
}
struct nodo *insert(struct nodo *head,int num,int pos)
{
	int i=0;
	struct nodo *e,*t;
	e=malloc(sizeof(struct nodo));
	e->val=num;
	e->next=NULL;
	t=head;
	if(pos==0){
		e->next=t;
		head=e;
		return head;
	}
	while(t->next!=NULL && i<pos)
	{		
		if(i+1==pos){
			e->next=t->next;
			t->next=e;
			break;
		}
		t=t->next;
		i++;
	}
	if(i+1==pos)t->next=e;		
	else{printf("ERROR\n");}
	return head;
}
struct nodo *cat(struct nodo *head1,struct nodo *head2)
{
	struct nodo *p;
	p=head1;
	while(p->next!=NULL)p=p->next;
	p->next=head2;
	return head1;
}
main() {
	struct nodo *head1,*head2;
	head1=createList(head1,3);
/*	head2=createList(head2,2);*/
	head1=insert(head1,5,2);
/*	head1=delete(head1,2);*/
/*	head1=cat(head1,head2);*/
	print(head1);
/*	printf("\n");*/
/*	print(head2);*/
/*	printf("\n");*/
/*	head1=cat(head1,head2);*/
/*	print(head1);*/
}
