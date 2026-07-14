#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int getUserInupt()
{
    PLOGD << "getUserInupt() called";

    std::cout << "Enter a number: ";
    int x {};
    std::cin >> x;
    return x;
}

int main()
{
    plog::init(plog::debug, "logs/logfile.txt");
    PLOGD << "main() called";

    int x { getUserInupt() };
    std::cout << "You entered " << x << '\n';
    return 0;
}