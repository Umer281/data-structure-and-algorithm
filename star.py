n=4
for i in range(n):
    for j in range(0,i+1):
        print("*",end=" ")
    print('\r')


# n=5
# for row in range(1,n+1):
# 	space=(2*n)-row
# 	for col in range(row):
# 		for s in range(space):
# 			print('',end='')
# 		print('*')
# print('\r')







# def search(self,nums,target,start,end):
#         if(start>end):
#             return 0
        
#         mid=(start+end)/2
        
#         if(start==end and target<nums[mid]):
#             return mid+1
            
#         if(nums[mid]==target):
#             return mid
#         elif(target>nums[mid]):
#             search(nums,target,mid+1,end)
#         else:
#             search(nums,target,start,mid-1)
# nums=[1,3,5,6]
# target=5
# start=0
# end=len(nums)
# x=search(nums,target,start,end)
# print(x)