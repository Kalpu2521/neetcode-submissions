class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int j = arr.size() - 1;
        int maxright = arr[j];

        arr[j] = -1;
        j--;

        while(j >= 0) {
            int current = arr[j];

            arr[j] = maxright;

            maxright = max(current, maxright);

            j--;
        }

        return arr;
    }
};