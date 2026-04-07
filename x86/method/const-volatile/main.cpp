// C++ 23 example

#include <string>
#include <string_view>

#include <format>
#include <print>

inline std::string format_rgb(unsigned char r, unsigned char g, unsigned char b, std::string_view text)
{
    static constexpr std::string_view reset = "\033[0m";
    return std::format("\033[38;2;{};{};{}m{}{}", r, g, b, text, reset);
}

int main(int argc, char* argv[])
{
    std::println("{}: {} {} {}::method({}) {}", format_rgb(210, 140, 110, "public"), format_rgb(210, 140, 110, "void"), format_rgb(210, 140, 110, "__thiscall"), format_rgb(180, 180, 210, "cls"), format_rgb(210, 140, 110, "void"), format_rgb(140, 140, 40, "const"));
    std::println("{}: ?method@cls@@Q{}EXXZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "B"));
    std::println();

    std::println("{}: {} {} {}::method({}) {}", format_rgb(210, 140, 110, "public"), format_rgb(210, 140, 110, "void"), format_rgb(210, 140, 110, "__thiscall"), format_rgb(180, 180, 210, "cls"), format_rgb(210, 140, 110, "void"), format_rgb(140, 140, 40, "volatile"));
    std::println("{}: ?method@cls@@Q{}EXXZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "C"));
    std::println();

    std::println("{}: {} {} {}::method({}) {}", format_rgb(210, 140, 110, "public"), format_rgb(210, 140, 110, "void"), format_rgb(210, 140, 110, "__thiscall"), format_rgb(180, 180, 210, "cls"), format_rgb(210, 140, 110, "void"), format_rgb(140, 140, 40, "const volatile"));
    std::println("{}: ?method@cls@@Q{}EXXZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "D"));
    std::println();

    return 0;
}