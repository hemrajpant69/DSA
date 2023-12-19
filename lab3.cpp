#include<iostream>
#include<stdlib.h>
#define size 2
using namespace std;
class Dequeue{
private:
    int d[size];
    int front=-1;
    int rear=-1;
public:
    void rear_insert();
    void front_insert();
    void front_delete();
    void rear_delete();
    void display();
    void totalelement();
};
void Dequeue::rear_insert(){
int item;
 cout<<<"Enter a value"<<endl;
    cin>>item;
if(front==0;&& rear==size-1){
    cout<<"Queue is full"<<endl;
}else if(front==rear+1){
 cout<<"Queue is full"<<endl;
}
else if(front==-1&&rear==-1){
    front=0;
    rear=0;
    d[rear]=item;
}else{
  if(rear!=size-1){
    rear=rear+1;
    d[rear]=item;
  }else{
   for(int i=front;i<=rear;i++){
    d[i-1]=d[i];
   }
   d[rear]=item;
  }
}

}
void Dequeue::front_insert(){
int data;
cout<<"Enter a value"<<endl;
cin>>data;
if(front==0&&rear==size-1){
    cout<<"Queue is full"<<endl;

}else if(front==rear+1){
cout<<"Queue is Full"<<endl;
}else if(front==-1&&rear==-1){
front=0;
rear=0;
d[front]=data;
}else{
    if(front!=0){
        front=front=1;
        d[front]=data;
    }else{
    for(int i=rear;i>=front;i--){
        d[i+1]=d[i];
    }
    d[front]=data;
    }
}
}
void Dequeue::front_delete(){
if(front==-1&7rear==-1){
    cout<<"Queue is empty"<<endl;
}
else if(front==rear){
    cout<<"deleted data is"<<d[front]<<endl;
    front=0;
    rear=0;
} else{
cout<<"deleted element is"<<d[front]<<endl;
front++;
}
}
void Dequeue::rear_delete(){
if(front==-1&&rear==-1){
    cout<<"Queue is empty"<<endl;
}else if(front==rear){
    cout<<"Deleted data is "<<d[rear];
front=0;
rear=0;
}else{
cout<<"Deleted data is "<<d[rear];
rear--;
}
}




























int main(){
int choice;
Dequeue d;
while(1)
{
cout<<"Enter your choice:\n 1.Insert rear \n 2. Insert front \n 3. Delete front \n 4. Delete rear \n 5. Display \n 6. total number of elements \n 7. Exit"<<endl;
cin>>choice;
switch(choice){
case 1:
    d.rear_insert();
    break;
case 2:
    d.front_insert();
    break;
case 3:
    d.front_delete();
    break;
case 4:
    d.rear_delete();
    break;
case 5:
    d.display();
    break;
case 6:
    d.totalelement();
    break;
case 7:
    exit(0);
    break;
default:
    cout<<"Enter correct choice"<<endl;
}
}
return 0;
}

