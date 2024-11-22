'''
Author:Amala Manoj
Date:22-11-2024
'''
list1=[1,4,6,7,9]
print("list1:",list1)
list2=[11,12,8,10]
print("list2:",list2)
merged_list=list1+list2
print("merged_list:",merged_list)
even=[]
odd=[]
for i in merged_list:
    if i%2==0:
        even.append(i)
    else:
        odd.append(i)
even.sort()
odd.sort()
sorted_list=even+odd
print("sorted list:",sorted_list)

