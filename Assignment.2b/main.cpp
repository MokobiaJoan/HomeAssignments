/*Mokobia Joan Chidiebere, st135508@student.spbu.ru, 24.B83-mm*/

#include "header.h"

int calculate_RPN(const std::string& rpn) {
    const int stack_len = 50;
    int stack[stack_len];
    int top = -1;

    std::istringstream stream(rpn);
    std::string token;

    while (stream >> token) {
        // Check if the token is a number (including negative numbers)
        if (std::isdigit(token[0]) || (token.length() > 1 && token[0] == '-' && std::isdigit(token[1]))) {
            if (top >= stack_len - 1) {
                std::cerr << "Stack Overflow." << std::endl;
                return -1;
            }
            stack[++top] = std::stoi(token); // Push the number onto the stack
        } else { // Assume the token is an operator
            if (top < 1) {
                std::cerr << "Not enough operands." << std::endl;
                return -1;
            }
            int operand2 = stack[top--]; // Pop the top two operands
            int operand1 = stack[top--];

            switch (token[0]) {
                case '+':
                    stack[++top] = operand1 + operand2; 
                    break;
                case '-':
                    stack[++top] = operand1 - operand2; 
                    break;
                case '*':
                    stack[++top] = operand1 * operand2; 
                    break;
                case '/':
                    if (operand2 == 0) {
                        std::cerr << "Dividing by zero." << std::endl;
                        return -1;
                    }
                    stack[++top] = operand1 / operand2; 
                    break;
                default:
                    std::cerr << "Unknown operator: " << token << std::endl;
                    return -1;
            }
        }
    }

    if (top != 0) { // Ensure there's only one result in the stack
        std::cerr << "Invalid RPN expression." << std::endl;
        return -1;
    }

    return stack[top]; // Return the result
}

int main() {
    std::string rpn_expression = "3 4 + 2 * 7 /"; // Example: ((3 + 4) * 2) / 7

    int result = calculate_RPN(rpn_expression);
    if (result != -1) {
        std::cout << "Result: " << result << std::endl; // Output: Result: 1
    }

    return 0;
}