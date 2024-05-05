#include <cstdio>
#include <string>
namespace Manager
{
    int decode(std::string args[])
    {
        //
    }
    void Helper()
    {
        //
    }
}
int main(int *argc, std::string args[])
{
    switch (Manager::decode(args))
    {
    case 0:
        Manager::Helper();
        return 0;
    }
    return 0;
}