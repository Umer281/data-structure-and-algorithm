#    1
#   121
#  12321
# 1234321
##progrm for above pattern
# n=4
# space=n
# row=n
# x=0
# for i in range(0,row):
#   space=space-1
#   col=2*i+1
#   for j in range(0,space):
#     print(end=" ")
#   for k in range(0,col):
#     if(k>i):
#       x=x-1
#       print(x,end="")
#     else:
#       x=x+1
#       print(x,end="")
#   x=0 
#   print('\r')

########
######

 #    *
 #   * *
 #  * * *
 # * * * *

 ##program for above program 


# n=4
# space=n
# for i in range(0,n):
#   for s in range(0,space):
#     print(end=" ")
#   space=space-1
#   for col in range(0,i+1):
#     print("*",end=" ")

#   print('\r')



###
######
######

#           *     
#         * *
#       * * *
#     * * * * 
#   * * * * * 
# n=4
# space=n
# for row in range(0,n):
#   for s in range(0,space):
#     print(end=" ")
#   space=space-1
#   for col in range(0,row+1):
#     print("*",end="")
#   print("\r")

#####
####
#### 2nd method for this using only 2 loops
# n=5
# var=n-1
# x=0
# for row in range(0,n):
# 	for col in range(0,n):
# 		if(var-col>x):
# 			print(end=" ")
# 		else:
# 			print("*",end="")
# 	print("\r")
# 	x=x+1

###another method bu decrementing space by 2
n=5
space=2*n-2
for row in range(0,n):
	for s in range(0,space):
		print(end=" ")
	space=space-2
	for col in range(0,row+1):
		print("* `",end="")
	print("\r")
	