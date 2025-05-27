class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    vector<int> nums3(m + n);
    int p1 = 0, p2 = 0, i = 0;
    while (p1 < m && p2 < n) {
      if (nums1[p1] < nums2[p2]) {
        nums3[i++] = nums1[p1++];
      } else {
        nums3[i++] = nums2[p2++];
      }
    }
    while (p1 < m) {
      nums3[i++] = nums1[p1++];
    }
    while (p2 < n) {
      nums3[i++] = nums2[p2++];
    }

    for (int j = 0; j < m + n; j++) {
      nums1[j] = nums3[j];
    }
  }
};
