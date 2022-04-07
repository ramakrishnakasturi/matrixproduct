arr,k=[],1
for i in range(1,1000002):
    arr.append(k)
    k=(k*i)%1000000007
for _ in range(int(input())):
    n=int(input())
    print(arr[n])
