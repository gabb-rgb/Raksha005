#short code for google translator
from googletrans import Translator;
print("OUR GOOGLE TRANSLATOR")
translator=Translator()

language=input("enter the language in which you wanna converted it to:")

sent=input("enter the sentence:")
result=translator.translate("",dest="language")
print(result.text)


