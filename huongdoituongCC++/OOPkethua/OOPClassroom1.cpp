#include <date/date.h>
#include <cstdint>
#include <iostream>
#include <string>

std::string
convert(std::int64_t seconds_since_1904)
{
    using namespace date;
    using namespace std::chrono;
    constexpr auto offset = sys_days{January/1/1970} - sys_days{January/1/1904};
    return format("%T %m.%d, %Y", sys_seconds{seconds{seconds_since_1904}} - offset);
}

int
main()
{
    std::cout << convert(3'606'124'378) << '\n';
}
