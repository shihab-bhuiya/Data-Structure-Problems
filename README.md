Binary Search

Use: Sorted array
Time: O(log N)
Space: O(1)

Template
int l = 0, r = n - 1;

while (l <= r)
{
    int mid = l + (r - l) / 2;

    if (a[mid] == target)
    {
        // Found
        break;
    }
    else if (a[mid] > target)
        r = mid - 1;   // Left
    else
        l = mid + 1;   // Right
}
🧠 Remember
== → Found
>  → Left  → r = mid - 1
<  → Right → l = mid + 1

Prerequisite: Array must be sorted.
