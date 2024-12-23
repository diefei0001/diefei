'''完善购物车'''
from collections import defaultdict
instock_dict={101:("签字笔(黑)",3),
           102:("签字笔(红)",3),
           103:("荧光笔",10),
           104:("铅笔",2),
           201:("笔记本A4",18,5),
           202:("笔记本B5",14),
           203:("练习本A4",2.5),
           204:("练习本B5",2)
           }
cart_dict=defaultdict(list)
while True:
    index_input=int(input("请输入编号"))
    if index_input==-1:
        break
    elif index_input not in cart_dict.keys():
        quantities=int(input("请输入数量"))
        cart_dict[index_input]=quantities
    elif index_input not in instock_dict.keys():
        print("商品编号不存在，请重新输入")
        continue
    else:
        print("已存在，请输入修改数量")
        modity_number=int(input("请输入修改数量"))
        if modity_number==0:
            del cart_dict[index_input]
        else:
            cart_dict[index_input]=modity_number
print(cart_dict)

        