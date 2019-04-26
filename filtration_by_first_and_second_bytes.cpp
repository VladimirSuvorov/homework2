#include "homework_test.hpp"

TEST_F(HomeworkTest, test_filtration_by_first_and_second_bytes) {    
    auto ip_pool=read_ip4_addresses(input);
    auto filtered_by_first_and_second_bytes = filter(ip_pool, 46, 70); 
    //for this test it is assumed, that read_ip4_addresses is correct  
    EXPECT_STREQ(filtered_by_first_and_second_bytes[0].to_string().c_str(),"46.70.225.39");
    EXPECT_STREQ(filtered_by_first_and_second_bytes[1].to_string().c_str(),"46.70.147.26");
    EXPECT_STREQ(filtered_by_first_and_second_bytes[2].to_string().c_str(),"46.70.113.73");
    EXPECT_STREQ(filtered_by_first_and_second_bytes[3].to_string().c_str(),"46.70.29.76");
}