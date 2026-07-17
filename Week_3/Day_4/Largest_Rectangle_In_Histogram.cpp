class Solution {
public:
    vector<int> prevSmaller(vector<int>& heights) {
        stack<int> st;
        vector<int> pse(heights.size());

        for (int i = 0; i < heights.size(); i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if (st.empty())
                pse[i] = -1;
            else
                pse[i] = st.top();

            st.push(i);
        }

        return pse;
    }

    vector<int> nextSmaller(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        vector<int> nse(n);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if (st.empty())
                nse[i] = n;
            else
                nse[i] = st.top();

            st.push(i);
        }

        return nse;
    }

    int largestRectangleArea(vector<int>& heights) {

        vector<int> pse = prevSmaller(heights);
        vector<int> nse = nextSmaller(heights);

        int maxArea = 0;

        for (int i = 0; i < heights.size(); i++) {
            int width = nse[i] - pse[i] - 1;
            int area = heights[i] * width;
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};
