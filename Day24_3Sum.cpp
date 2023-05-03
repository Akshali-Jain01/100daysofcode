#include <bits/stdc++.h>
using namespace std;
ifstream in("in.txt");
ofstream out("out.txt");

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        int target = -nums[i];
        int front = i + 1;
        int back = nums.size() - 1;

        while (front < back)
        {

            int sum = nums[front] + nums[back];

            if (sum < target)
                front++;

            else if (sum > target)
                back--;

            else
            {
                vector<int> triplet = {nums[i], nums[front], nums[back]};
                ans.push_back(triplet);

                while (front < back && nums[front] == triplet[1])
                    front++;

                while (front < back && nums[back] == triplet[2])
                    back--;
            }
        }

        while (i + 1 < nums.size() && nums[i + 1] == nums[i])
            i++;
    }

    return ans;
}

int main()
{

    return 0;
}