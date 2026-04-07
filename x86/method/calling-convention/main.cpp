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
    std::println("{} {} {}::DoDie({})", format_rgb(210, 140, 110, "void"), format_rgb(140, 140, 40, "__thiscall"), format_rgb(180, 180, 210, "oCNpc"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?DoDie@oCNpc@@IA{}XXZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "E"));
    std::println();

    std::println("{} {} {}::DoDie({})", format_rgb(210, 140, 110, "void"), format_rgb(140, 140, 40, "__cdecl"), format_rgb(180, 180, 210, "oCNpc"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?DoDie@oCNpc@@IA{}XXZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "A"));
    std::println();

    std::println("{} {} {}::DoDie({})", format_rgb(210, 140, 110, "void"), format_rgb(140, 140, 40, "__stdcall"), format_rgb(180, 180, 210, "oCNpc"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?DoDie@oCNpc@@IA{}XXZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "G"));
    std::println();

    std::println("{} {} {}::DoDie({})", format_rgb(210, 140, 110, "void"), format_rgb(140, 140, 40, "__fastcall"), format_rgb(180, 180, 210, "oCNpc"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?DoDie@oCNpc@@IA{}XXZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "I"));
    std::println();

    std::println("{} {} {}::DoDie({})", format_rgb(210, 140, 110, "void"), format_rgb(140, 140, 40, "__fastcall"), format_rgb(180, 180, 210, "oCNpc"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?DoDie@oCNpc@@IA{}XXZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "I"));
    std::println();

    std::println("{} {} {}::DoDie({})", format_rgb(210, 140, 110, "void"), format_rgb(140, 140, 40, "__vectorcall"), format_rgb(180, 180, 210, "oCNpc"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?DoDie@oCNpc@@IA{}XXZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "Q"));
    std::println();

    return 0;
}