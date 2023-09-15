



// #include <iostream>
// using namespace std;
// class Stack{
//     public:
    
//     int *arr;
//     int cap;
//     int top;
//     Stack(int c){
//         cap = c;
//         arr = new int[cap];
//         top  = -1;
//     }
//     void push(int data);
//     void pop();
//     void display(){
//        if(top<0){
//         std::cout<<"Stack is empty.";
//         return;
//     }
    
//         int x = arr[top];
//         cout<<"Elements in the stack: ";
//         for (int i = top; i >= 0; i--) {
//       cout << arr[i] << " ";
//     }
// cout<<endl;
//     }
  
    
    
// };
// void Stack::push (int data){
//     top++;
//     arr[top] = data;
//     std::cout<<"Element "<<data<<" pushed onto the stack."<<std::endl;
    
// }
// void Stack::pop(){
//     if(top<0){
//         std::cout<<"Stack Underflow. Cannot perform the pop operation.";
//         return;
//     }
//     else{
//         int x = arr[top];
//         top--;
//         cout<<"Element "<<x<<" popped from the stack.";
        
//     }
    
// }



// int main(){
//     Stack s(100);
    
    
//         while(true){
//             int n;
//             cin>>n;
//             switch(n){
//                 case 1:
//                 int data;
//                 cin>>data;
//                 s.push(data);
//                 break;
//                 case 2:
//                 s.pop();
//                 break;
//                 case 3:
//                 s.display();
//                 break;
//                 case 4:
//                 std::cout<<"Exiting the program.";
//                 exit(1);
//                 break;
//             }
//         }
    
    
    
    
// }
#include <iostream>
using namespace std;

class Stack {
public:
  int *arr;
  int capacity;
  int top;

  Stack(int c) {
    capacity = c;
    arr = new int[capacity];
    top = -1;
  }

  void push(int data) {
    if (top == capacity - 1) {
      cout << "Stack overflow!" << endl;
      return;
    }

    top++;
    arr[top] = data;
    cout << "Element " << data << " pushed onto the stack." << endl;
  }

  void pop() {
    if (top == -1) {
      cout << "Stack underflow!" << endl;
      return;
    }

    cout << "Element " << arr[top] << " popped from the stack." << endl;
    top--;
  }

  void print() {
    if (top == -1) {
      cout << "Stack is empty." << endl;
      return;
    }

    cout << "Elements in the stack: ";
    for (int i = top; i >= 0; i--) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  Stack s(100);

  while (true) {
    int n;
    cin >> n;

    switch (n) {
      case 1:
        int data;
        cin >> data;
        s.push(data);
        break;
      case 2:
        s.pop();
        break;
      case 3:
        s.print();
        break;
      case 4:
        cout << "Exiting the program." << endl;
        exit(1);
        break;
      default:
        cout << "Invalid input!" << endl;
        break;
    }
  }
}

