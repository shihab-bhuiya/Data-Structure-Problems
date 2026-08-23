Binary Search — Quick Memorization Note

Use when: Array is sorted.

int l = 0, r = n - 1;

while(l <= r)
{
    int mid = l + (r - l) / 2;

    if(a[mid] == val)
    {
        // Found
        break;
    }
    else if(a[mid] > val)
    {
        r = mid - 1;   // Search LEFT
    }
    else
    {
        l = mid + 1;   // Search RIGHT
    }
}

a[mid] == val  → FOUND
a[mid] > val   → LEFT  → r = mid - 1
a[mid] < val   → RIGHT → l = mid + 1
