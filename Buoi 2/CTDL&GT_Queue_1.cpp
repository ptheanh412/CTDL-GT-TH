#include <iostream>
using namespace std;

#define max 10000
int Queue[max];
int front, rear;
//https://gochocit.com/ky-thuat-lap-trinh/hang-doi-queue-la-gi-cach-xay-dung-hang-doi

void QueueInit(){
	front = 0;
	rear = -1;
}

void enqueue(int V){
	if(rear >= max-1){
		cout<<"Queue is full";
	}else{
		rear++;
		Queue[rear] = V;
	}
}

int dequeue(){
	if(front > rear){
		cout<<"Queue is empty";
		return -1;
	}else{
		int res = Queue[front];
		front++;
		return res;
	}
}

//print Queue
void printQueue(){
	if(front > rear){
		cout<<"Queue is empty";
	}else{
		cout<<"Elements in Queue:";
		for(int i=front;i<=rear;i++){
			cout<<Queue[i]<<" ";
		}
	}
}
