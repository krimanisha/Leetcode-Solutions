### Naive Approach:-<br>
Traverse the array from left side and as soon as we find 0, we again go to right side of the element 0 and then search for the non-zero element. Then swap with 0 and non-zero.<br>
Time Complexity:- O(n^2)

### Efficient Approach:-<br>
Traverse the array from left to right and if element is fixed from a[0] to a[i-1]. Keep count of non-zero element in the array.<br>
Time complexity:- O(n)
