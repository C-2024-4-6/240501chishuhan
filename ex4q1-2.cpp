
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& nums) {
    int n = nums.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }

        // 如果一轮遍历没有发生交换，说明序列已经有序，提前结束排序
        if (!swapped) {
            break;
        }
    }
}

int main()
{
    vector<int> nums = {1,1,1,1,1,1,1,1,1,1};

    for (int i = 1; i <= 10; i++)
    {
        cout << "请输入第" << i << "个数：" << endl;
        cin >> nums[i - 1];
    }
    cout << "原始序列：";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    bubbleSort(nums);

    cout << "排序后序列：";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}