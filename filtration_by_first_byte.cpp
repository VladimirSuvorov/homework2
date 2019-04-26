#include "homework_test.hpp"

TEST_F(HomeworkTest, test_filtration_by_first_byte) {    
    auto ip_pool=read_ip4_addresses(input);
    reverse_lexicographically_sort(ip_pool);
    //auto filtered_by_first_byte = filter(ip_pool, 1);
    
    //ASSERT_EQ(filtered_by_first_byte.size(), 5);
    
    /*EXPECT_STREQ(filtered_by_first_byte[0].to_string().c_str(),"1.231.69.33");
    EXPECT_STREQ(filtered_by_first_byte[1].to_string().c_str(),"1.87.203.225");
    EXPECT_STREQ(filtered_by_first_byte[2].to_string().c_str(),"1.70.44.170");
    EXPECT_STREQ(filtered_by_first_byte[3].to_string().c_str(),"1.29.168.152");
    EXPECT_STREQ(filtered_by_first_byte[4].to_string().c_str(),"1.1.234.8");*/
}
