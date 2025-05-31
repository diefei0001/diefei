from datetime import datetime
current_time = datetime.now()
day = current_time.day
month = current_time.month
have_31=[1,3,5,7,8,10,12]
days= 32 if month in have_31 else 31
people=["kejun","yongyi","zenghao","nidie"]
list1 =[]
index = 0
for i in range(days):
    index +=1
    if index ==1 or (index-1)%4 ==0:
        list1.append(people[0])
    elif index==4 or index %2 ==0 and index%4 ==0:
        list1.append(people[3])
    elif index ==3 or (index-1)%3==0:
        list1.append(people[2])
    else:
        list1.append(people[1])
print(list1)
print(f"今天是{list1[day-1]}晾衣服")
