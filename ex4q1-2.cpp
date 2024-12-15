
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

        // ���һ�ֱ���û�з���������˵�������Ѿ�������ǰ��������
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
        cout << "�������" << i << "������" << endl;
        cin >> nums[i - 1];
    }
    cout << "ԭʼ���У�";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    bubbleSort(nums);

    cout << "��������У�";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}