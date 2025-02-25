# **📝 Minimalistic Text Editor in C**
🚀 A simple, lightweight text editor built **from scratch** in pure C! Think **nano**, but much simpler. No external libraries—just **standard C functions** for handling input, output, and file operations.  

---

## **⚡ Features**
✅ **Real-time typing** – Instantly displays characters as you type.  
✅ **Basic text editing** – Supports typing, deleting (Backspace), and saving files.  
✅ **Save & Exit Shortcuts** –  
   - **CTRL+S** → Save text to `output.txt`.  
   - **CTRL+Q** → Quit the editor.  
✅ **Clean & Modular Code** – Each feature is in its own file for easy understanding.  

---

## **📂 Project Structure**
```
text_editor/
│── main.c        # Entry point
│── input.c       # Handles keyboard input
│── screen.c      # Manages screen display
│── file_io.c     # Handles saving text to a file
│── editor.c      # Processes user input and editing logic
│── input.h       # Header file for input.c
│── screen.h      # Header file for screen.c
│── file_io.h     # Header file for file_io.c
│── editor.h      # Header file for editor.c
│── .gitignore    # Ignore unnecessary files
│── README.md     # Project documentation
```
Each module is **independent**, making the code easy to read and modify.

---

## **🛠️ Installation & Setup**
### **1️⃣ Compile the code**
Make sure you have **GCC** installed, then run:
```sh
gcc main.c input.c screen.c file_io.c editor.c -o text_editor.exe
```
### **2️⃣ Run the editor**
```sh
text_editor.exe
```

---

## **⌨️ How to Use**
| Command        | Action                  |
|---------------|-------------------------|
| **Type**      | Enter text in real-time |
| **Backspace** | Delete the last character |
| **CTRL+S**    | Save text to `output.txt` |
| **CTRL+Q**    | Quit the editor |

After saving, you can open `output.txt` with:
```sh
notepad output.txt
```

---

## **🖥️ How It Works**
🔹 Uses **raw input mode** to read keystrokes instantly.  
🔹 Stores text in a **character buffer** (`buffer[1024]`).  
🔹 Uses `fflush(stdout);` to ensure **real-time text display**.  
🔹 Saves text with `fopen()` and `fputs()` in **file_io.c**.  
🔹 `switch-case` structure in `editor.c` makes key handling **clean & simple**.

---

## **📌 Your Homework**
This editor is just the **beginning**. To take it to the next level, here’s what you should try adding:

🔹 **Arrow Key Navigation** – Move the cursor left and right within the text.  
🔹 **Multi-line Support** – Allow users to enter text across multiple lines.  
🔹 **Open Existing Files (`CTRL+O`)** – Load text from an existing file into the editor.  
🔹 **Syntax Highlighting** – Colorize keywords and text to improve readability.  

💡 **Think you can do it?** Try adding one feature at a time and test your progress!  

---

## **🤝 Contributing**
Want to improve this project? Fork it and submit a pull request!  
```sh
git clone https://github.com/your-username/minimal-text-editor.git
```

---

## **📜 License**
This project is **open-source** under the **MIT License**. Use, modify, and share freely!

---

### 🎯 **Built for learning. Now, it's your turn.** 🚀

Would you like me to generate a **logo** or **ASCII art** for the README? 🎨