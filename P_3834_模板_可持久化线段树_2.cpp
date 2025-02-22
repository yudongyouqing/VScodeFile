#include <iostream>
#include <vector>

using namespace std;

constexpr int maxn = 25000000;  

class pertree {
   private:
    vector<int> left_;
    vector<int> right_;
    vector<int> value_;
    int node_cnt_ = 0;

    int NewNode() { return node_cnt_++; }

   public:
    pertree()
        : left_(maxn), right_(maxn), value_(maxn) {}

    int Build(int l, int r, const vector<int>& arr) {
        if (l == r) {
            int u = NewNode();
            left_[u] = -1;
            right_[u] = -1;
            value_[u] = arr[l - 1]; 
            return u;
        }
        int mid = (l + r) / 2;
        int lson = Build(l, mid, arr);
        int rson = Build(mid + 1, r, arr);
        int u = NewNode();
        left_[u] = lson;
        right_[u] = rson;
        return u;
    }

    int Update(int old_root, int l, int r, int pos, int val) {
        if (l == r) {
            int u = NewNode();
            left_[u] = -1;
            right_[u] = -1;
            value_[u] = val;
            return u;
        }

        int mid = (l + r) / 2;
        int u = NewNode();
        left_[u] = left_[old_root];
        right_[u] = right_[old_root];

        if (pos <= mid) {
            int new_left = Update(left_[old_root], l, mid, pos, val);
            left_[u] = new_left;
        } else {
            int new_right = Update(right_[old_root], mid + 1, r, pos, val);
            right_[u] = new_right;
        }
        return u;
    }

    int Query(int root, int l, int r, int pos) const {
        while (l < r) {
            int mid = (l + r) / 2;
            if (pos <= mid) {
                root = left_[root];
                r = mid;
            } else {
                root = right_[root];
                l = mid + 1;
            }
        }
        return value_[root];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    pertree pa;
    vector<int> roots;
    roots.push_back(pa.Build(1, N, arr));

    while (M--) {
        int v, op, pos;
        cin >> v >> op >> pos;
        if (op == 1) {
            int val;
            cin >> val;
            roots.push_back(pa.Update(roots[v], 1, N, pos, val));
        } else {
            roots.push_back(roots[v]);
            cout << pa.Query(roots[v], 1, N, pos) << '\n';
        }
    }
    return 0;
}

