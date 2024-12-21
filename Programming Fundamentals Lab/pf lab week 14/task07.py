def like_or_dilike(check):
    if(check[len(check)-3]==check[len(check)-2]):
       return "Nothing"
    else:
        if(check[len(check)-2]=="like"):
            return "LIKE"
        else:
            return "DISLIKE"
state = []
idx = ""
while(idx!="ok"):
    idx = input("Enter your button and press ok to stop input.... ")
    state.append(idx)
print(like_or_dilike(state))    