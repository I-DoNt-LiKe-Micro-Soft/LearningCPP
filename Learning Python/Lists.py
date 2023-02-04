Friends = ["john", "Kevin", "Johnny"] #OpenAndCloseSquareBracketsMeansPythonWillStoreTheValuesAs a Variable
Friends[1] = "MikeWuzowski"  #Updates Given Index Value
print(Friends[0])        #prints Corresponding Index From The List
print(Friends[-1])       #-1 Starts Indexing From The Back Of The List
print(Friends[1:])       #1: Prints Indexed Values 1 and after
print(Friends[0:2])       #0:2 Prints Index Value Range

print("---------------------")
print("ListFunctions")
other_friends = ["Tobuscus", "JohnnyWu", "FreddyForgetty"]
Friends.extend(other_friends)  #Function Extend Feeds new List to already existing list
print(Friends)
Friends.append("MichaeL Jordan") #Function appends more Data To List 
print(Friends)
Friends.insert(1, "Kelly")   #Funtion Insert adds new name to list at given index position
print(Friends)
Friends.remove("Kelly")   #Fuction Removes Given Name In List
print(Friends)
Friends.pop()  #Removes an Item From List Can be Used In combination With Index Number
print(Friends)
print(Friends.index("john"))   #Function Prints The Index Position of a name In The List
print(Friends.count("john"))   #Function Counts how many given names are in the list
Friends.sort()    #Sorts The List Into Alphabetical order or numeric order
Friends.reverse() #Function Reverses the list
print(Friends)
Friends2 = Friends.copy()  #Copys Given Variable/list and creates new variable
Friends.clear() #Removes Everything in The List
print(Friends)
