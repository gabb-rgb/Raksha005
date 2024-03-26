#short code for google translator
from googletrans import Translator

print("OUR GOOGLE TRANSLATOR")
translator=Translator()

sent=input("enter the sentence:")
result=translator.translate("",dest="hi")
print(result.text)


