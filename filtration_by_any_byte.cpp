#include "homework_test.hpp"

TEST_F(HomeworkTest, test_filtration_by_any_byte) {    
    auto ip_pool=read_ip4_addresses(input);
    auto filtered_by_any_byte = filter_any(ip_pool, 46);
    //for this test it is assumed, that read_ip4_addresses is correct
    EXPECT_STREQ(filtered_by_any_byte[0].to_string().c_str(),"186.204.34.46");
    EXPECT_STREQ(filtered_by_any_byte[1].to_string().c_str(),"186.46.222.194");
    EXPECT_STREQ(filtered_by_any_byte[2].to_string().c_str(),"185.46.87.231");
    
    EXPECT_STREQ(filtered_by_any_byte[(ip_pool.size()-3)].to_string().c_str(),"46.49.43.85");
    EXPECT_STREQ(filtered_by_any_byte[(ip_pool.size()-2)].to_string().c_str(),"39.46.86.85");
    EXPECT_STREQ(filtered_by_any_byte[(ip_pool.size()-1)].to_string().c_str(),"5.189.203.46");
}
