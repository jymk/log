#include "log.hpp"

int main() {
    set_log_lev(LogLevel::Debug);
    DEBUG(111);
    return 0;
}