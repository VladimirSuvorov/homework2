#include "homework_test.hpp"

TEST_F(HomeworkTest, test_lexicographical_reverse) { 
    auto ip_pool=read_ip4_addresses(input);
    reverse_lexicographically_sort(ip_pool);
   
    //for this test it is assumed, that read_ip4_addresses is correct
    EXPECT_STREQ(ip_pool[0].to_string().c_str(),"222.173.235.246");
    EXPECT_STREQ(ip_pool[1].to_string().c_str(),"222.130.177.64");
    EXPECT_STREQ(ip_pool[2].to_string().c_str(),"222.82.198.61");
    
    EXPECT_STREQ(ip_pool[(ip_pool.size()-3)].to_string().c_str(),"1.70.44.170");
    EXPECT_STREQ(ip_pool[(ip_pool.size()-2)].to_string().c_str(),"1.29.168.152");
    EXPECT_STREQ(ip_pool[(ip_pool.size()-1)].to_string().c_str(),"1.1.234.8");    
}
