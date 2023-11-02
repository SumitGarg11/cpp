// // #include <bits/stdc++.h>

// // class stack{
// //     int top;
// //     int *arr;
// //     int size;
// //     public:
// //     stack(int c){
// //         top = -1;
// //         size = c;
// //         arr = new int[size];
        
        
// //     }
// //     int peek(){
// //         if(top == -1){
// //             std::cout<<"empty";
// //             return 0;
// //         }
// //         int x= arr[top];
// //         return x;
// //     }
// //     void push(int data){
// //         if(top == size-1){
// //             std::cout<<"overflow"<<std::endl;
// //             return;

// //         }
// //         top++;
// //         arr[top] = data;
// //         std::cout<<data<<" is pushed on stack"<<std::endl;

// //     }
// //     void pop(){
// //         if(top == -1){
// //             std::cout<<" stack is underflow"<<std::endl;
// //             return;

// //         }
// //         int x= arr[top];
// //         top--;
        
// //     }
// //     bool empty(){
// //         return (top <0);
// //     }
    
// // };
// // int main(){
// //     stack s(10);
// //     s.push(12);
// //     s.push(13);
// //     s.push(12);
// //     s.push(13);
// //     s.push(12);
// //     s.push(13);
// //     s.push(12);
// //     s.push(13);
// //     s.push(90);
// //     s.push(100);
    
    
// //     while(!s.empty()){
// //         std::cout<<s.peek()<<" ";
// //         s.pop();

// //     }
    


// // }
// #include <iostream>
// class Node{
//     public:
//     int data;
//     Node* next = NULL;
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next= NULL;
//     }

// };
// class stack{
//     Node* top;
//     public:
//     stack(){
//         this->top=NULL;
//     }
//     void push(int data){
//         Node* newnode = new Node(data);
//         if(!newnode){
//             std::cout<<"stack overflow"<<std::endl;
//             exit(1);
//         }
//         newnode->data=data;
//         newnode->next = top;
//         top = newnode;

//     }
//     bool empty(){
//         return (top == NULL);
//     }
//     int peek(){
//         if(!empty()){
//             return top->data;
//         }
//         else{
//             exit(1);
//         }
//     }
//     void pop(){
//         Node* temp;
//         if(top==NULL){
//             std::cout<<"stack underflow"<<std::endl;
//             exit(1);
//         }
//         else{
//             temp = top;
//             top=top->next;
//             free(temp);
//         }
//     }
//     void print(){
//         Node* temp;
//         if(temp == NULL){
//             std::cout<<"stack underflow"<<std::endl;
//             exit(1);
//         }
//         else{
//             temp = top;
//             while(temp != NULL){
//                 std::cout<<temp->data;
//                 temp=temp->next;
//                 if(temp != NULL){
//                     std::cout<<"->";
//                 }
//             }

//         }
//     }
// };
// int main(){
//     stack s;
//     s.push(11);
//     s.push(20);
//     s.push(30);
//     s.push(50);
//     std::cout<<"linked list: ";
//     s.print();
// }


#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int performOperation(char op, int operand1, int operand2) {
    switch (op) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
        default:
            return 0; // Invalid operator
    }
}

int evaluateRPN(string expression) {
    stack<int> operands;
    
    int i = 0; // Index variable for iterating through the string
    
    while (i < expression.size()) {
        char c = expression[i];
        if (c == ' ') {
            i++; // Skip spaces
            continue;
        } else if (isdigit(c)) {
            int operand = 0;
            while (i < expression.size() && isdigit(expression[i])) {
                operand = operand * 10 + (expression[i] - '0');
                i++;
            }
            operands.push(operand);
        } else if (isOperator(c)) {
            if (operands.size() < 2) {
                cout << "Invalid expression." << endl;
                return -1;
            }
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            int result = performOperation(c, operand1, operand2);
            operands.push(result);
            i++; // Move to the next character after the operator
        } else {
            cout << "Invalid character in expression." << endl;
            return -1;
        }
    }

    if (operands.size() == 1) {
        return operands.top();
    } else {
        cout << "Invalid expression." << endl;
        return -1;
    }
}

int main() {
    string expression;
    cout << "Enter the RPN expression: ";
    getline(cin, expression);

    int result = evaluateRPN(expression);

    if (result != -1) {
        cout << "The result is: " << result << endl;
    }

    return 0;
}


// 100 - 50 / 2 + 25 * 3




    
