num = int(input())
cnt =0 
numbers =list(map(int, input().split()))
for test in numbers:
    check=True
    if test ==2:
        cnt+=1
    elif test % 2 == 0:
        continue
    elif test == 1:
        continue
    else:
        for j in range(2,test):
            if test % j == 0:
                check = False
                break
            else:
                check = True
        if check == True:
            cnt+=1
print(cnt)



            

