#include <iostream>
#include <cstring>
using namespace std;
class Stack {
private:
    int element[100];
    int top;
public:
   Stack(){top=-1;}
  void push(int value) {
        if (top <99) {
            element[++top] = value;
        } else {
            cout << "Stack overflow!" << endl;
        }
    }
    int pop() {
        if (top >= 0) {
            return element[top--];
        } else {
            cout << "Stack underflow!" << endl;
            return -1; 
        }
    }
};
int evaluatePostfix(string expression)
{Stack stack;
 int n=expression.length();
 for (int i = 0; i < n; i++) {
        char c = expression[i];
        if (isdigit(c)) {
            stack.push(c-'0');
        }
       else if (c == '+' || c == '-' || c == '*' || c == '/') {
              if (stack.size() < 2) {
                cout << "Invalid postfix expression" << endl;
                return -1;
            }
            int operand2 = stack.pop();
            int operand1 = stack.pop();
            switch (c) {
                case '+':
                    stack.push(operand1 + operand2);
                    break;
                case '-':
                    stack.push(operand1 - operand2);
                    break;
                case '*':
                    stack.push(operand1 * operand2);
                    break;
                case '/':
                    if (operand2 == 0) {
                        cout << "Division by zero error" << endl;
                        return -1;
                    }
                    stack.push(operand1 / operand2);
                    break;
            }
        }
    }
   if (stack.size() == 1) {
        return stack.top();
    } else {
        cout << "Invalid postfix expression" << endl;
        return -1;
    }
}


int main() {
 
   string postfixExpression = "42*5+";
    int result = evaluatePostfix(postfixExpression);

    if (result != -1) {
        cout << "Result of postfix expression '" << postfixExpression << "' is: " << result << endl;
    }

  
  return 0;
}
