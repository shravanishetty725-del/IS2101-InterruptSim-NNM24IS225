````markdown
# 🖥️ Interrupt Controller Simulation in C

## 🎯 Objective
This program simulates how an **Interrupt Controller** manages multiple device interrupts with **priorities** and **masking**.  
It helps understand how interrupt handling works in computer systems.

---

## ⚙️ Features
- Simulates **Keyboard**, **Mouse**, and **Printer** interrupts.  
- Demonstrates **priority-based handling**:
  - Keyboard → Highest Priority  
  - Mouse → Medium Priority  
  - Printer → Lowest Priority  
- Allows **masking/unmasking** devices (disabling/enabling interrupts).
- Simulates **random interrupt generation**.

---

## 🧩 Priority Order
| Device   | Priority Level | Default Mask Status |
|-----------|----------------|---------------------|
| Keyboard | Highest         | Unmasked            |
| Mouse    | Medium          | Unmasked            |
| Printer  | Lowest          | Unmasked            |

---

## 🧠 How It Works
1. The program provides a simple text-based menu:
   - **1. Mask/Unmask Devices** → Control which interrupts are active.  
   - **2. Generate Random Interrupt** → Simulate a device interrupt.  
   - **3. Exit** → Stop the simulation.
2. The **highest-priority unmasked** interrupt is handled first.
3. If all devices are masked → no interrupt is processed.

---

## 💻 Compilation & Execution

### 🧾 Step 1: Save the file
Save the code as **`interrupt_simulation.c`**

### ⚙️ Step 2: Compile the program
```bash
gcc interrupt_simulation.c -o interrupt_simulation
````

### ▶️ Step 3: Run the executable

```bash
./interrupt_simulation
```

---

## 📸 Sample Output

```
=== Interrupt Controller Simulation ===
Priority: Keyboard > Mouse > Printer

1. Mask/Unmask Devices
2. Generate Random Interrupt
3. Exit
Choose: 2

Keyboard Interrupt Triggered → Handling ISR → Completed
```

If all devices are masked:

```
All devices masked → No interrupt handled
```


Would you like me to make a **short version (for college report)** — like one-page summary format (less explanation, more bullet points)?
```
