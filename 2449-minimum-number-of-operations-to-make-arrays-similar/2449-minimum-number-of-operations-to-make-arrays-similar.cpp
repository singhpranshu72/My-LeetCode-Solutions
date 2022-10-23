class Solution {
public:
//    Intuition
// Try to solve the simpler question that,
// in one operation we can do:
// A[i] = A[i] + 1
// A[j] = A[j] - 1

// We need to sort A and B,
// and accumulate the difference res = sum(A[i] - B[i]),
// and return res / 2


// Explanation
// In this problem,
// A[i] and B[i] won't change parity (odd or even)
// all evens play the game together,
// all odds play the game together.


// Complexity
// Time O(nlogn)
// Space O(n)


    long long makeSimilar(vector<int>& A, vector<int>& B) {
        vector<vector<int>> AA(2), BB(2);
        for(int a: A) AA[a % 2].push_back(a);
        for(int b: B) BB[b % 2].push_back(b);
        sort(AA[0].begin(), AA[0].end());
        sort(AA[1].begin(), AA[1].end());
        sort(BB[0].begin(), BB[0].end());
        sort(BB[1].begin(), BB[1].end());

        long long res = 0;
        for (int i = 0; i < AA[0].size(); ++i)
            res += abs(AA[0][i] - BB[0][i]) / 2;
        for (int i = 0; i < AA[1].size(); ++i)
            res += abs(AA[1][i] - BB[1][i]) / 2;
        return res / 2;

    }
};