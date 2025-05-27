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
// AI Generated Better In-Place Solution
class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int p1 = m - 1;
    int p2 = n - 1;
    int p = m + n - 1;

    // Merge from the back
    while (p1 >= 0 && p2 >= 0) {
      if (nums1[p1] > nums2[p2]) {
        nums1[p--] = nums1[p1--];
      } else {
        nums1[p--] = nums2[p2--];
      }
    }

    // Copy remaining nums2 elements (if any)
    while (p2 >= 0) {
      nums1[p--] = nums2[p2--];
    }

    // No need to copy nums1 — they're already in place
  }
};
