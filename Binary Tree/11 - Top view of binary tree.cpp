class Solution {
public:
    vector<int> topView(Node *root) {
        vector<int> result;
        if (root == nullptr) return result;

        // Pair to store node and its horizontal distance
        queue<pair<Node*, int>> q;
        map<int, int> m; // Map to store the first node encountered at each horizontal distance

        q.push({root, 0}); // Push root with horizontal distance 0

        while (!q.empty()) {
            Node* node = q.front().first;
            int hd = q.front().second;
            q.pop();

            // If the horizontal distance is not in the map, add it to the map
            if (m.find(hd) == m.end()) {
                m[hd] = node->data;
            }

            // Enqueue left child with horizontal distance hd-1
            if (node->left) {
                q.push({node->left, hd - 1});
            }

            // Enqueue right child with horizontal distance hd+1
            if (node->right) {
                q.push({node->right, hd + 1});
            }
        }

        // Populate result vector from map
        for (auto it = m.begin(); it != m.end(); ++it) {
            result.push_back(it->second);
        }

        return result;
    }
};
