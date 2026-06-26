# 🎯 ⚔️ PAIR SUM FINDER IN A RANGE ⚔️ 🎯

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Concept-Logic--Building-FF9900?style=for-the-badge" alt="Logic" />
  <img src="https://img.shields.io/badge/Algorithm-Nested--Loops-8A2BE2?style=for-the-badge" alt="Algorithm" />
</p>

---

## ⚡ 🎯 OVERVIEW

Welcome to the **Pair Sum Finder**! 🔍 This C++ program solves a classic logic-building problem: finding pairs of numbers within a user-defined range that add up to a specific **Target Sum**.

🧠 **How It Works:**
1. You give the program a **Start** and **End** range (e.g., 1 to 10). 📥
2. You provide a **Target Sum** (e.g., 10). 🎯
3. The program runs nested loops to check every possible unique combination and prints out the exact pairs! 🔮✨

---

## 🔬 🧬 THE LOGIC BREAKDOWN

The program uses two nested loops (`i` and `j`) to safely traverse the range without repeating pairs or matching a number with itself:

* 🔄 **Outer Loop (`i`):** Starts from the `start` value and moves towards the `end`.
* 🔄 **Inner Loop (`j = i + 1`):** Always starts one step ahead of `i`. This brilliantly avoids duplicate pairs like `(2, 4)` and `(4, 2)`.
* ⚖️ **The Condition:** `if (j + i == target_sum)` checks if the two numbers hit the bullseye!

---

## 💻 🕹️ EXAMPLE RUN

### 📥 Input:
* Enter your start range: `1`
* Enter your end range: `5`
* Enter your target sum: `5`

### 📤 Output:
```text
(1, 4)
(2, 3)
