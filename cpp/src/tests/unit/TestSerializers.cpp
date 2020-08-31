#include <comm/Dashboard.h>
#include <iostream>

#include <assert.h>

using namespace comm;

int main(){
    Dashboard dashboard_test;
    dashboard_test._enabled_1 = 1;
    dashboard_test._enabled_2 = 2;
    dashboard_test._enabled_3 = 3;
    dashboard_test._enabled_4 = 55;
    dashboard_test._enabled_5 = 5;
    dashboard_test._enabled_6 = 6;
    dashboard_test._enabled_7 = 7;
    dashboard_test._enabled_8 = 8;

    std::vector<uint8_t> dashboard_test_data = dashboard_test.Serialize();
    std::cout << dashboard_test_data.size() << std::endl;
    assert(dashboard_test_data.size() == 9);
}