#short code for google translator
from googletrans import Translator

print("OUR GOOGLE TRANSLATOR")
translator=Translator()

sent=input("enter the sentence:")
result=translator.translate("",dest="hi")
print(result.text)


#Code for language translator!
from googletrans import Translator 

def translate_to_hindi(text):
    translator = Translator() 
    translated_text = translator.translate(text, src='en', dest='hi')
    return translated_text.text

def main():
    print("Welcome to English to Hindi Translator")
    while True:
        user_input = input("Enter text in English (type 'exit' to quit): ")
        if user_input.lower() == 'exit':
            print("Thank you for using the translator!")
            break
        else:
            translated_text = translate_to_hindi(user_input)
            print("Translated Text (Hindi):", translated_text)

if __name__ == "__main__":
    main()
