#ifndef COUSTOM_STACK_H
#DEFINE COUSTOM_STACK_H

#include <vector>

class CustomStackVector{
    private:
        std:: vector<int> datos;

        public:
        CusttomStack();
        ~custonStack();

        bool empty();

        int size();

        int top();

        void push(int valor);
        
        void pop();
};
#endif 