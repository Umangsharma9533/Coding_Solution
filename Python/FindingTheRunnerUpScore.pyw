if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    k = max(arr)
    for i in range(0,n):
        if max(arr) == k:   
            arr.remove(max(arr))
    arr.sort(reverse=True)
print(arr[0])