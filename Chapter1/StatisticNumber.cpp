#include <iostream>

int main() {

    int currVal = 0;
    int val = 0;

    if(std::cin >> currVal) {// 读取第一个数据，并确保确实有数据可以处理
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal) {
                ++cnt;
            } else {
                std::cout << currVal << " occurs : " << cnt << std::endl;
                currVal = val;
                cnt = 1;
            }
        }

        // 打印最后一个输入的数的个数
        std::cout << currVal << " occurs : " << cnt << std::endl;
    }

    return 0;
}