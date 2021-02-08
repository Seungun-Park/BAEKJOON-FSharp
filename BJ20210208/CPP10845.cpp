#include <iostream>
#include <queue>
#include <string>

int main()
{
    int N;
    std::queue<int> queue;
    std::string cmd;
    int arg;

    std::cin >> N;
    for(int i = 0; i < N; ++i)
    {
        std::cin >> cmd;
        if(cmd == "push")
        {
            std::cin >> arg;
            queue.push(arg);
        }
        else if(cmd == "pop")
        {
            if(queue.empty()) std::cout << "-1" << std::endl;
            else
            {
                std::cout << queue.front() << std::endl;
                queue.pop();
            }
        }
        else if(cmd == "size")
        {
            std::cout << queue.size() << std::endl;
        }
        else if(cmd == "empty")
        {
            if(queue.empty()) std::cout << "1" << std::endl;
            else std::cout << "0" << std::endl;
        }
        else if(cmd == "front")
        {
            if(queue.empty()) std::cout << "-1" << std::endl;
            else std::cout << queue.front() << std::endl;
        }
        else if(cmd == "back")
        {
            if(queue.empty()) std::cout << "-1" << std::endl;
            else std::cout << queue.back() << std::endl;
        }
    }

    return 0;
}