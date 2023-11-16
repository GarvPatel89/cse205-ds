class MyCircularQueue {
    int *arr;
    int front;
    int rear;
    int size;
public:
    MyCircularQueue(int k) {
        this->size=k;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    
    bool enQueue(int value) {
        if( isFull()){
            return false;
        } 
        else if(rear==-1 && front==-1){
            front=0;
            rear=0;
            arr[rear]=value;
        }
        else if(front!=0 && rear==size-1){
            rear=0;
            arr[rear]=value;
        }
        else{
            rear++;
            arr[rear]=value;
        }
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        int ans=arr[front];
        arr[front]=-1;

        if(front==rear){
            front=-1;
            rear=-1;
        }
        else if(front==size-1){
            front=0;
        }

        else{
            front++;
        }

        return true;
    }
    
    int Front() {
         if(isEmpty()) {
            return -1;
        }
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty()) {
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        if(front==-1 ){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if( (front==0 && rear==size-1)||(rear==(front-1)%(size)) ){
            return true;
        } 

        else{
            return false;
        }
    }
};