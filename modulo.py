def power(x,y):
    if(y==0):
    	return 1

    temp=power(x,y/2)
    
    if(y%2==0):
    	return temp*temp
    else:
    	if(y<0):
    		return (temp*temp)/x
    	else:
    		return x*(temp*temp)



x=float(input())
n=int(input())
res=power(x,n)
print(res)