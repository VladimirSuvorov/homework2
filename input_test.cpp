#include "homework_test.hpp"


/*
//All tests, except a following input test, 
//are using EXPECT and only the input test is using ASSERT,
//because wrong input leads to wrong results of other tests.

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

TEST_F(HomeworkTest, test_filtration_by_first_byte) {    
    auto ip_pool=read_ip4_addresses(input);
    auto filtered_by_first_byte = filter(ip_pool, 1);
    //for this test it is assumed, that read_ip4_addresses is correct
    EXPECT_STREQ(filtered_by_first_byte[0].to_string().c_str(),"1.231.69.33");
    EXPECT_STREQ(filtered_by_first_byte[1].to_string().c_str(),"1.87.203.225");
    EXPECT_STREQ(filtered_by_first_byte[2].to_string().c_str(),"1.70.44.170");
    EXPECT_STREQ(filtered_by_first_byte[3].to_string().c_str(),"1.29.168.152");
    EXPECT_STREQ(filtered_by_first_byte[4].to_string().c_str(),"1.1.234.8");
}

TEST_F(HomeworkTest, test_filtration_by_first_and_second_bytes) {    
    auto ip_pool=read_ip4_addresses(input);
    auto filtered_by_first_and_second_bytes = filter(ip_pool, 46, 70); 
    //for this test it is assumed, that read_ip4_addresses is correct  
    EXPECT_STREQ(filtered_by_first_and_second_bytes[0].to_string().c_str(),"46.70.225.39");
    EXPECT_STREQ(filtered_by_first_and_second_bytes[1].to_string().c_str(),"46.70.147.26");
    EXPECT_STREQ(filtered_by_first_and_second_bytes[2].to_string().c_str(),"46.70.113.73");
    EXPECT_STREQ(filtered_by_first_and_second_bytes[3].to_string().c_str(),"46.70.29.76");
}

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
*/

