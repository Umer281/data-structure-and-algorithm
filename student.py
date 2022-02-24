

##this list is a list of dictionaries where index of list contains dictionary which in turn contains- -##information about student





list= [{"name":"rahul","marks":30,"age":22},{"name":"pankaj","marks":34,"age":23},{"name":"faheem","marks":49,"age":23}]


def maxmarks(list,inp_marks):
    dic=[]
    for l in list:
        if(l["marks"]>inp_marks):
            dic.append(l["name"])
    return dic
            

  ans=maxmarks(list,31)
  