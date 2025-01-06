import decimal
goodsdic = {"101":("签字笔（黑）", 3.0),"102":("签字笔（红）", 3.0), "103":("荧光笔", 10.0),"104":("铅笔", 2.0), "201":("笔记本 A4", 18.5),"202":("笔记本 B5", 14.0), "203":("练习本 A4", 2.5),"204":("练习本 B5", 2.0)}
cart = {}  # 用于存储购物车中的商品
while True:
    item_id = input("")
    if item_id == '-1':  # 输入 -1 退出购物车并结算
        break
    if item_id not in goodsdic:  # 如果输入的商品编号不存在
        print("{}商品不存在".format(item_id))
        continue
    if item_id in cart:  # 如果购物车中已存在该商品
        num = int(input(""))
        if num == 0:  # 修改数量为 0，删除该商品
            del cart[item_id]
        else:
            cart[item_id] = num
    else:  # 购物车中没有该商品
        num = int(input(""))
        cart[item_id] = num
# 计算总金额
total_price = 0
for item_id, num in cart.items():
    price = goodsdic[item_id][1]
    total_price += price * num
# 输出总金额，保留两位小数
print("购物车里商品的总价格为{:.2f}".format(decimal.Decimal(total_price)))






        