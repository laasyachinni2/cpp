#include<iostream>
using namespace std;
class queue{
	private:
		int front,rear,arr[100];
	public:
		queue(){
			rear=-1;
			front=-1;
		}
		bool isempty(){
			if(front==-1 && rear==-1)return true;
			else return false;
		}
		bool isfull(){
			return rear==99;
		}
		void enqueue(int val){
			if(front==-1&& rear==-1){
				front++;
				rear++;
				arr[rear]=val;
			}
			else if(!isfull()){
				rear++;
				arr[rear]=val;
			}
		}
		void dequeue(){
			if(!isempty()){
				front++;
			}
		}
		void peek(){
			cout << "The peak element is" << " " <<arr[front] << endl;
		}
		void display(){
			for(int i=front;i<=rear;i++){
				cout << arr[i] << " ";
			}
		}
};
int main(){
	queue q1;
	q1.enqueue(9);
	q1.enqueue(4);
	q1.enqueue(6);
	q1.dequeue();
	q1.enqueue(2);
	q1.peek();
	q1.display();
	
}
