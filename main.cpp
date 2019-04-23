#include "homework.hpp"

int main(int argc, char const *argv[]){
    try {
        auto ip_pool(read_ip4_addresses());    

        reverse_lexicographically_sort(ip_pool);
        output(ip_pool);
        output(filter(ip_pool, 1));
        output(filter(ip_pool, 46, 70));
        output(filter_any(ip_pool, 46));

        ip_pool.clear();
        ip_pool.shrink_to_fit();
    } catch(const std::exception &e) {
       std::cerr << e.what() << std::endl;
    }
    return 0;
}

