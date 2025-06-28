# ⚡ Quick Sort in C

Quick Sort is a highly efficient sorting algorithm based on the divide-and-conquer principle. It picks a "pivot" element and partitions the array around the pivot such that elements less than the pivot go to the left, and those greater go to the right. This process is recursively applied to the sub-arrays.

---

## 📊 Time Complexity

- **Worst Case:** O(n²)
- **Best & Average Case:** O(n log n)
- **Space Complexity:** O(log n) due to recursion stack

---

## 🖥️ Output

```text
Enter the number of elements (max 25):
6
Enter element 1:
8
Enter element 2:
3
Enter element 3:
9
Enter element 4:
4
Enter element 5:
1
Enter element 6:
5
Sorted array in ascending order:
1 3 4 5 8 9
