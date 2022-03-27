class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& matrix, int k) {
    set<pair<int, int>> st;
    for (auto itr = 0; itr < matrix.size(); itr++) {
        auto p = accumulate(begin(matrix[itr]), end(matrix[itr]), 0);
        st.insert({p, itr});
    }
    vector<int> res;
    for (auto itr = begin(st); k > 0; itr++, k--)
        res.push_back(itr->second);
    return res;
}
};