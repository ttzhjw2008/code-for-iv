#include "common.h"
#include "test_print.h"
#include "test_solution.h"

#include <gtest/gtest.h>

#include<iostream>
#include<vector>


TEST(testCase,test0){
    EXPECT_FALSE(check_inside());
}

TEST(testSwardToOffer,print_matrix){
    std::vector<std::vector<int>> input_matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    std::vector<int> out_test = {1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10};
    
    Solution solver;
    std::vector<int> out_put = solver.printMatrix(input_matrix);
    EXPECT_EQ(out_put, out_test);
}

TEST(testSwardToOffer,find_2d_array){
    
    EXPECT_EQ(out_put, out_test);
}

int main(int argc,char **argv) {

    testing::InitGoogleTest(&argc,argv);
    int run_result = RUN_ALL_TESTS();

    return run_result;

}