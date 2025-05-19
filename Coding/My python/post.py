import requests

# 目标URL（这里用公共测试API）
url = "http://httpbin.org/post"

# 请求头和请求体
headers = {"Content-Type": "application/json"}
data = {"name": "Alice", "age": 25}

# 发送POST请求
response = requests.post(url, json=data, headers=headers)

print("状态码:", response.status_code)
print("响应内容:", response.text)