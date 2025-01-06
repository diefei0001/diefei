'''Caesar Cipher'''
def encrypt(text:str,shift):
    acc_str=""
    for chrs in text:
        new_chr =chr(ord(chrs)+shift)
        acc_str+=new_chr
    return acc_str
def decrypt(text:str,shift):
    acc_str=""
    for chrs in text:
        new_chr =chr(ord(chrs)-shift)
        acc_str+=new_chr
    return acc_str
if __name__=="__main__":
    text1="hello world"
    shift1=100
    code_text=encrypt(text1,shift1)
    print(f"加密后：{code_text}")
    print(f"解密后：{decrypt(code_text,shift1)}")






        