#include <iostream>
#include <deque>

int main()
{
    int N;
    std::deque<int> deque;
    std::string cmd;
    int arg;

    std::cin >> N;
    for(int i = 0; i < N; ++i)
    {
        std::cin >> cmd;
        if(cmd == "push_front")
        {
            std::cin >> arg;
            deque.push_front(arg);
        }
        else if(cmd == "push_back")
        {
            std::cin >> arg;
            deque.push_back(arg);
        }
        else if(cmd == "pop_front")
        {
            if(deque.empty()) std::cout << "-1" << std::endl;
            else
            {
                std::cout << deque.front() << std::endl;
                deque.pop_front();
            }
        }
        else if(cmd == "pop_back")
        {
            if(deque.empty()) std::cout << "-1" << std::endl;
            else
            {
                std::cout << deque.back() << std::endl;
                deque.pop_back();
            }
        }
        else if(cmd == "size")
        {
            std::cout << deque.size() << std::endl;
        }
        else if(cmd == "empty")
        {
            if(deque.empty()) std::cout << "1" << std::endl;
            else std::cout << "0" << std::endl;
        }
        else if(cmd == "front")
        {
            if(deque.empty()) std::cout << "-1" << std::endl;
            else std::cout << deque.front() << std::endl;
        }
        else if(cmd == "back")
        {
            if(deque.empty()) std::cout << "-1" << std::endl;
            else std::cout << deque.back() << std::endl;
        }
    }

    return 0;
}