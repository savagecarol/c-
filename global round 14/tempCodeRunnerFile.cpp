for _ in range(I()):
//     n,m,x=M()
//     a=L()
//     b=[[a[i],i] for i in range(n)]
//     b=sorted(b,key=lambda item:item[0],reverse=True)
//     ans=[0 for i in range(n)]
//     j=0
//     # print(b)
//     for i in b:
//         if(j==m):j=0
//         ans[i[1]]=j+1
//         j+=1
//     print("YES")    
//     for i in ans:
//         print(i,end=" ")
//     print()