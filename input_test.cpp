#include "homework_test.hpp"
TEST_F(HomeworkTest, Input_MUST_be_correct) {    
    auto ip_pool=read_ip4_addresses(input);
    //For short, only first and last 3 addresses are tested
    ASSERT_STREQ(ip_pool[0].to_string().c_str(),"113.162.145.156");
    ASSERT_STREQ(ip_pool[1].to_string().c_str(),"157.39.22.224");
    ASSERT_STREQ(ip_pool[2].to_string().c_str(),"79.180.73.190");

    ASSERT_STREQ(ip_pool[(ip_pool.size()-3)].to_string().c_str(),"67.183.105.87");
    ASSERT_STREQ(ip_pool[(ip_pool.size()-2)].to_string().c_str(),"91.64.189.196");
    ASSERT_STREQ(ip_pool[(ip_pool.size()-1)].to_string().c_str(),"93.179.90.82");
}
